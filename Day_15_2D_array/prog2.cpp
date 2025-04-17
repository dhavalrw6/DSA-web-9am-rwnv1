#include<iostream>
using namespace std;

int main(){
    
    int n;

    cout<<"Enter row and col size: ";
    cin>>n;

    int a[n][n];

    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<n ; j++)
        {
            cout<<"Enter value of a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }


    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<n ; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}