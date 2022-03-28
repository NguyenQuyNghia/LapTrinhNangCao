#include <iostream>
using namespace std;
struct Distance{
    float width;
    float height;
    Distance()
    {
        width=0;
        height=0;
    }
    void getInformation()
    {
        cin>>width>>height;
    }
    void display()
    {
        cout<<"Width: "<<width<<endl;
        cout<<"Height: "<<height<<endl;
    }
};
int main()
{
    Distance x;
    x.getInformation();
    x.display();
}
