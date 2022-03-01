#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_N = 1000;
int main()
{
    int n; cin>>n;
    double arrayX[MAX_N];
    double sum = 0;
    for (int i=0;i<n;i++)
    {
        cin>>arrayX[i];
        sum+=arrayX[i];
    }
    double mean = sum / n;
    double var=1/(double)n,s;
    for (int i=0;i<n;i++)
    {
        s+= (arrayX[i]-mean)*(arrayX[i]-mean);
    }
    cout<<setprecision(2)<<fixed<<var*s;
}
