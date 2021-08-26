/*this program dmeonstrates the use of vectors in c++ with some of its member functions like
 *push_back
 */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(6);
    cout<<"enter 6 values: ";
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<"v["<<i<<"] = "<<v[i]<<endl;
    }
    vector<double> temperature;
    cout<<"enter some temperatures : ";
    for (double i; cin>>i; )
    {
        temperature.push_back(i);
    }
    //using range based for loop to iterate through a vector
    for (double i : temperature) 
    {
        cout<<i<<endl;
    }
    //working with strings in a vector
    cout<<"enter some names here :"<<'\n';
    vector<string> names;
    for (string i; cin>>i; )
    {
        names.push_back(i);
    }
    cout<<"total number of words entered are "<<names.size()<<"."<<endl;
    for (int i = 0; i < names.size(); i++)
    {
        if (i==0 || names[i-1]!=names[i])
        {
            cout<<names[i]<<endl;
        }
    }
    return 0;
}
