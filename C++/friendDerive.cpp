/*
  This is a program which demonstrates the use of friend function, derived classes, this pointer,
  object pointer and new & delete operators (used for dynamic memory allocation).
*/
#include<iostream>
using namespace std;
class mynew {
    private:
        int x;
    public:
        void setval(int *x) {
            this->x=*x;
        }
        void showval() {
            cout<<"the value entered is : "<<x<<'\n';
        }
        friend void yourfriend(mynew);
};
class mynew2 : private mynew {
    public:
        void setv(int *x) {
            setval(x);
        }
        void showv() {
            showval();
        }
};
void yourfriend(mynew o) {
    cout<<"I'm the friend function and the value entered is: "<<o.x<<endl;
}
int main()
{
    mynew2 obj;
    mynew2 *p = &obj;
    int* ptr = new int(24);
    int* ptr0 = new int(32);
    p->setv(ptr);
    p->showv();
    mynew obj0;
    obj0.setval(ptr0);
    yourfriend(obj0);
    delete ptr, ptr0;
    return 0;
}