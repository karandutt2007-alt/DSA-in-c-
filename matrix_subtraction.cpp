#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int a[m][n], b[m][n], sub[m][n];
    cout<<"inserting first array: ";
    // Input first matrix
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout<<"inserting second array: ";
    // Input second matrix
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }

    // Subtraction
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    // Print result
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}