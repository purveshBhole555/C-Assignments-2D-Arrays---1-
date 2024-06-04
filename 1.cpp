#include <iostream>
using namespace std;

int main()
{
    int m=2, n=2;
    int arr[m][n];
    int brr[m][n];
    

    for(int i=0 ; i<m; i++)
    {
        for(int j=0 ; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0 ; i<m; i++)
    {
        for(int j=0 ; j<n; j++)
        {
            cin>>brr[i][j];
        }
    }
    for(int i=0 ; i<m; i++)
    {
        for(int j=0 ; j<n; j++)
        {
            cout<<arr[i][j]+brr[i][j]<<" ";
        }
        cout<<endl;
    }

    
}

// Output is 
4 5 5 3 
3 4 5 3
7 9
10 6