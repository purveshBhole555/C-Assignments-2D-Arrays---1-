#include <iostream>
using namespace std;

int main()
{
    int m , n ;
    cout<<"Enter m and n ";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cin>>arr[i][j];
        }
    }
    int x;
    x=arr[0][0];
    for(int i=0 ; i<m ; i++)
    {
       

        for(int j=0 ; j<n ; j++)
        {
            
            if(arr[i][j]>x)  x=arr[i][j]; 
        }
    }

    cout<<x;
}

// output is 

Enter m and n 2 2 
4 5 6 7 
7