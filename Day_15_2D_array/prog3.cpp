#include<iostream>
using namespace std;

int main(){
    
    int n;

    cout<<"Enter row and col size: ";
    cin>>n;

    int a[n][n],b[n][n],c[n][n];

    cout<<endl;
    cout<<"Enter elements of A matrix"<<endl;
    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<n ; j++)
        {
            cout<<"Enter value of a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }

    cout<<endl;
    cout<<"Enter elements of B matrix"<<endl;   

    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<n ; j++)
        {
            cout<<"Enter value of b["<<i<<"]["<<j<<"]: ";
            cin>>b[i][j];
        }
    }


    cout<<endl;
    cout<<"-ve values: ";
    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<n ; j++)
        {
            c[i][j] = a[i][j]+b[i][j];			
        }
    }

    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<n ; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    // cout<<"max value of array: "<<max;



    return 0;
}