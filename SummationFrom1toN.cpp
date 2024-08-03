https://vjudge.net/problem/Gym-287306F solve

#include <iostream>

int main() {
    long long N;
    std::cin >> N;

    // Calculate the sum using the formula
    long long sum = N * (N + 1) / 2;

    // Print the result
    std::cout << sum << std::endl;

    return 0;
}
