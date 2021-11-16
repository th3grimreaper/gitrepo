#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    string s1,s2,cat;
    cout<<"enter your first and last name : ";
    cin>>s1>>s2;
    cat=s1+" "+s2;
    cout<<"Hello "<<cat<<"! Welcome to Void Linux."<<endl;
    int x;
    cout<<"enter a value : ";
    cin>>x;
    cout<<"square of "<<x<<" is "<<pow(x,2)<<endl;
    return 0;
}
