#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int roll;
public:
    Student (string _name,int _roll)
    {
        name=_name;
        roll=_roll;
    }
    void introduce()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<roll<<endl;
    }
};
int main()
{
    Student x=Student("john",2);
    x.introduce();
}
