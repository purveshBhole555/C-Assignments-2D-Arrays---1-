#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // vector <int> v;
    int max=0 ;
    for(int i=0 ; i<3 ; i++)
    {
        int sum =0;
        for(int j=0 ; j<3 ; j++)
        {
            sum+=arr[i][j];
            
            // v.push_back(sum);
        }
        if(sum>max) max=sum;
    }
    // int x=v[0];
    // for(int i=0 ; i<v.size() ; i++)
    // {
    //     if(v[i]>x)  x=v[i];
    // }

    cout<<max;

}

// Output is 
24