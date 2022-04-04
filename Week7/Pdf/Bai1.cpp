#include <iostream>
#include <math.h>
using namespace std;
void update(int* a,int* b)
{
    int x=(*a);
    int y=(*b);
    *a=x+y;
    *b=abs(x-y);
}
