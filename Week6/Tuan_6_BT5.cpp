#include <iostream>
using namespace std;
class Area {
    private:
        double length;
        double breadth;
    public:
        Area (double a,double b)
        {
            length=a;
            breadth=b;
        }
        double returnArea()
        {
            return length*breadth;
        }
};
int main()
{
    double a;cin>>a;
    double b;cin>>b;
    Area x=Area(a,b);
    cout<<x.returnArea();
}
