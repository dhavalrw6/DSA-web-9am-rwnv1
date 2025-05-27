#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1={1,2,3,4,5};

    v1.insert(v1.end()-2,10);
    
    

    for(int i=0; i< v1.size(); i++)
    {
        cout<<v1.at(i)<<" ";
    }

    // v1.clear();

    // cout<<endl<<v1.front()<<endl;
    // cout<<endl<<v1.end()<<endl;

    return 0;
}