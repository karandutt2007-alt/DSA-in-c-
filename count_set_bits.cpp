#include <iostream>
using namespace std;

// Brian Kernighan's Algorithm
int countSetBits(unsigned int n) {
    int count = 0;
    while (n) {
        n &= (n - 1);   // clears the lowest set bit
        count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of set bits: " << countSetBits((unsigned int)n) << endl;
    return 0;
}