#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> sequence[i];
    }

    std::sort(sequence.begin(), sequence.end()); // Ensure the sequence is sorted for unique permutations

    do {
        for (int i = 0; i < n; ++i) {
            std::cout << sequence[i] << ' ';
        }
        std::cout << '\n';
    } while (std::next_permutation(sequence.begin(), sequence.end()));

    return 0;
}
