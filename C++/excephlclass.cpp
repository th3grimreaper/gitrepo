//program to demonstrate exception handling with classes
#include<iostream>
using namespace std;
class erroneous {
    public:
        int x;
        void setval(int n) {
            x=n;
        }
        void err() {
            cout<<x<<" cannot be considered a valid argument in this context."<<'\n';
        }
        int square()
        {
            return x*x;
        }
};
int main()
{
    erroneous obj;
    cout<<"enter a number to know it's square: ";
    int x;
    cin>>x;
    obj.setval(x);
    try {
        if (x<0)
            throw obj;
        cout<<"Square of "<<x<<" is : "<<obj.square()<<'\n';
    }
    catch(erroneous o) {
        o.err();
    }
    return 0;
}
