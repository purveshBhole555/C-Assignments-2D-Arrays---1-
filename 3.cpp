#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << "Enter the number of columns : ";
    cin >> m;
    int a[n][m];
    cout << "Enter the matrix element : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int l1, l2, r1, r2;
    cout << "Enter the value of l1 coordinate : ";
    cin >> l1;
}

// Output is 

Enter the number of rows : 3
Enter the number of columns : 3
Enter the matrix element : 1 2 3
4 5 6
7 8 9
Enter the value of l1 coordinate : 3
