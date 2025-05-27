#include<iostream>
#include<vector>
#include <cstdlib>

using namespace std;



class Demo{
    
    vector<int> v1;

public:

    void addElement(int element)
    {
        v1.push_back(element);
    }

    void updateElement(int index, int element)
    {
        v1[index] = element;
    }

    void deleteElement(int index)
    {
        v1.erase(v1.begin()+index);
    }

    void printElement()
    {
        cout<<"Vector is: ";
        for(int i=0; i<v1.size(); i++)
        {
            cout<<v1.at(i)<<" ";
        }
        cout<<endl;
    }

};

int main()
{

    Demo d;
    int size,element,index;
    int ch;    

    do
    {
        
        system("cls");
        if(ch==4)
        {
            d.printElement();
        }
        cout<<"Enter 1 for Add Element"<<endl;
        cout<<"Enter 2 for Update Element"<<endl;
        cout<<"Enter 3 for Delete Element"<<endl;
        cout<<"Enter 4 for View Element"<<endl;
        cout<<"Enter 5 for Clear Vector"<<endl;
        cout<<"Enter 6 for insert multiple Data Vector"<<endl;
        cout<<"Enter 0 for Exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>ch;

        


        switch (ch)
        {
        case 1:
            cout<<"Enter Element: ";
            cin>>element;
            d.addElement(element);
            break;
        case 2: 
            cout<<"Enter index:";
            cin>>index;
            cout<<"Enter Element: ";
            cin>>element;

            d.updateElement(index,element);
        break;
        case 3: 

            cout<<"Enter Delete Element index: ";
            cin>>index;
            d.deleteElement(index);
            break;
        case 4: 
        break;
        case 5: break;
        case 6: 
            cout<<"Enter the size of the vector: ";
            cin>>size;

            for(int i=0; i<size; i++)
            {
                cout<<"Enter element v1["<<i<<"]: ";
                cin>>element;
                d.addElement(element);
            }
        break;
        case 0: break;
        
        default:
            break;
        }

    }while(ch!=0);


    return 0;
}