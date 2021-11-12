/*
 *program to demonstrate iterating through an array in C++ with range based for loops
 */
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int j=0;
    for (int i : arr)
    {
        cout<<"arr["<<j<<"] = "<<i<<endl;
        j++;
    }
    return 0;
}
