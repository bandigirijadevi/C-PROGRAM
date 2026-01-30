/* acess mofifers = public,protected,private
getters and setters functions
*/
#include<iostream>
using namespace std;
class Students
{
public:
 int age;
 string name;
 int rno;
 
 /*void display()
 {
     cout<<name<<" "<<age<<endl;
 }*/
Students(int rno,string name,int age)
{
    this->rno=rno;
    this->name=name;
    this->age=age;

}
};
int main()
{
    Students s1;
    // s1.rno=12;
    s1.name="Ankit";
    s1.age=20;
    cout<<s1.name<<" "<<s1.age<<" "<<endl;
    s1.display();
    Students s2;
    s2.name="Rahul";
    s2.age=21;  
    //s2.rno = 13; // This will give error as rno is private member
       return 0;
}