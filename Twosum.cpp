#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> number(n);

    // Enter numbers
    for(int i = 0; i < n; i++)
        cin >> number[i];

    // Enter target
    int target;
    cin >> target;

    // Two Sum
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            if(number[i] + number[j] == target) {
                cout << "Number: " << number[i] << " + "
                     << number[j] << endl;

                cout << "Target: " << target << endl;

                cout << "Index: " << i << " " << j;
                return 0;
            }
        }
    }

    return 0;
}