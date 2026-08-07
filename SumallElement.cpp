# include<bits/stdc++.h>
using namespace std;


int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int sum = 0;


    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    cout << "Sum of all elements = " << sum;

    return 0;
}

