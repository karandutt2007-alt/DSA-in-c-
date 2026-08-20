#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;

    // Enter rows and columns
    cin >> m >> n;

    int arr[m][n];

    // Input matrix
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Print original matrix
    cout << "Original Matrix:" << endl;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Print transpose
    cout << "Transpose Matrix:" << endl;

    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < m; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}   