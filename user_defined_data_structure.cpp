/*vector<int>v;
v.push_back(10); = v(10)
v.push_back(9); = v(10, 9)
v.push_back(8); = v(10, 9, 8)
v.push_back(2); = v(10, 9, 8, 2)
v.push_back(1); = v(10, 9, 8, 2, 1)
v.pop_back(); = v(10, 9, 8, 2)
v.pop_back(); = v(10, 9, 8)
v.push_back(5); = v(10, 9, 8, 5
*/
#include <iostream>
#include <vector>
using namespace std;
class Vector
{
    int size;

    int capacity;
    int*arr ;
public:
    Vector()  // Default Constructor
    {

        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void add(int element)
    {
        if (size == capacity)
        {
            int*arr2 = new int[capacity];
            capacity *= 2;
            for (int i = 0; i < size; i++)
            {
            arr2[i] = arr[i];
            }
            arr = arr2;
        }

        arr[size]=element;
        size++; // post increment
        
    }
    void print ()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Vector v;
    v.add(10);
    cout<<endl;
    v.print();
    cout<<endl;
    return 0; 

}

