#include<iostream>
using namespace std;
#define SIZE 5
int main()
{
    int arr[5]={1,2,3,4,5};
    for (int i = 0; i < SIZE; i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }
    return 0;
}