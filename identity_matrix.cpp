#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n][n];

    // Input matrix
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool identity = true;

    // Check identity matrix
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j && arr[i][j] != 1)
            {
                identity = false;
            }

            if(i != j && arr[i][j] != 0)
            {
                identity = false;
            }
        }
    }

    if(identity)
        cout << "Identity Matrix";
    else
        cout << "Not an Identity Matrix";

    return 0;
}