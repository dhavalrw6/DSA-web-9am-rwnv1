#include<iostream>
using namespace std;

class Demo{
    public:
        int *arr;
        int size;    
    public:
        Demo(int size){
            this->size = size;
            this->arr = new int[this->size];
            cout<<"Memory allocated."<<endl;
        }
        ~Demo(){
            delete[] arr;
            cout<<"Memory deallocated."<<endl;
        }

        void addElementAt(int index, int element){
            if(index>=0 && index < this->size)
            {
                arr[index] = element;
            }
            else
            {
                cout<<"index value is out of bounds.";
            }
        }

        void printValueAt(int index){
            cout<<"Element of arr["<<index<<"]: "<<arr[index]<<endl;
        }


};

int main()
{
    Demo obj(5);
    obj.addElementAt(11, 10);
    
    return 0;
}