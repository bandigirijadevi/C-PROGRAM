#include <iostream>
using namespace std;

class Student
 {
private:
    int marks;

public:
    void setMarks(int m)
     {
        if (m >= 0 && m <= 100)
            marks = m;
    }

    int getMarks() 
    {
        return marks;
    }
};

int main() 
{
    Student s;
    s.setMarks(88);
    cout << "Marks: " << s.getMarks();
    return 0;
}