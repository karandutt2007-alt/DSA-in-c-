#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the bit position to check (0-indexed): ";
    cin >> i;

    if (n & (1 << i)) {
        cout << "The " << i << "th bit is set." << endl;
    } else {
        cout << "The " << i << "th bit is not set." << endl;
    }

    return 0;           
}