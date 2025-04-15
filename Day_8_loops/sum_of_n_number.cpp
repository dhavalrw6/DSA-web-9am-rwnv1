// Step 1: Start 
// Step 2: Initialize variables
// Step 3: Check Condition
// Step 4: If the condition is true, then go to step 5 otherwise go to step 7

#include<iostream>
using namespace std;

int main()
{

    int i,sum=0,n;

    cout<<"Enter n: ";
    cin>>n;
    i=1;
    while(i <= n)
    {
        sum+=i;
        i++;
    }

    cout<<"sum of "<<n<<" is: "<<sum;

    return 0;
}