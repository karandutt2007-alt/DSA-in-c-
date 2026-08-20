#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 5, 7, 8, 10, 13, 4};
    int n = 7;

    for(int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - 1 - i]);
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}