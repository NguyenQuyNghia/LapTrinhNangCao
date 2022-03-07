#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int countAlpha=0, countNumber=0, countOther=0;
    for (int i=0;i<s.size();i++)
    {
        if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z')) { // this line is pseudo code
            countAlpha++;
        } else if ('0' <= s[i] && s[i] <= '9') { // this line is pseudo code
            countNumber++;
        } else {
            countOther++;
        }
    }
    cout<<countAlpha<<" "<<countNumber<<" "<<countOther;
}
