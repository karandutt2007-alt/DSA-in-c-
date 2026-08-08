#include <bits/stdc++.h>
using namespace std;

int main() {

    // Take size of array
    int n;
    cin >> n;

    // Create an array
    int arr[n];

    // Take array elements as input
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Calculate Prefix Sum
    // Add previous element to current element
    for(int i = 1; i < n; i++)
        arr[i] += arr[i - 1];

    // Print Prefix Sum array
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}