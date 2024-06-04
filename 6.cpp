#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int arr[5][5]={{1,2,3,4,5},{4,5,6,7,8},{7,8,9,1,2},{7,8,9,1,2},{7,8,9,1,2}};
    // int n=5;

    int  n ;
    cout<<"Entern ";
    cin>>n;
    int arr[n][n];
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n; j++)
        {
            if (i==(n/2) || j==(n/2))
            {
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

}


// Output is 

Entern 5
1 2 3 4 5 
2 3 4 5 6
3 4 5 6 7 
4 5 6 7 8 
5 6 7 8 9


    3
    4
3 4 5 6 7
    6
    7