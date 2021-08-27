//program to demonstrate exception handling with classes
#include<iostream>
using namespace std;
void err(int j)
{
    cout<<j<<" cannot be accepted as an argument in this context."<<'\n';
}
int square(int x)
{
    return x*x;
}
int main()
{
    int i;
    cout<<"enter a number to know it's square: ";
    cin>>i;
    try {
        if (i<0)
            throw i;
        cout<<"Square of "<<i<<" is : "<<square(i)<<'\n'; 
    }
    catch(int e) {
        err(e);
    }   
    return 0;
}

