https://vjudge.net/problem/HackerRank-c-tutorial-pointer

#include <iostream>
#include <cmath> // For abs function
using namespace std;

// Function to update the values of a and b
void update(int *a, int *b) {
    int sum = *a + *b;
    int abs_diff = abs(*a - *b);
    *a = sum;
    *b = abs_diff;
}

int main() {
    int a, b;
    // Read the input values
    cin >> a >> b;
    
    // Call the update function
    update(&a, &b);
    
    // Print the modified values
    cout << a << endl;
    cout << b << endl;

    return 0;
}
