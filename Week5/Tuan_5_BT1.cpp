#include <iostream>
using namespace std;
struct Student {
    int roll;
    string name;
    int age;
    double mark;
    Student ()
    {
        roll=0;
        name="";
        age=0;
        mark=0;
    }
    void getInformation()
    {
        cin>>roll;
        cin.ignore();
        getline(cin,name);
        cin>>age>>mark;
    }
    void display()
    {
        cout<<"Roll no "<<roll<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Age "<<age<<endl;
        cout<<"mark "<<mark<<endl;
    }
};
int main()
{
    Student student1;
    student1.getInformation();
    student1.display();
}
