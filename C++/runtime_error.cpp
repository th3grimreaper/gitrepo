//program to demonstrate the use of runtime_error function
#include<iostream>
#include<string>
using namespace std;
void error(string);
int main()
{
  string s[3]={"sai", "sid", "manan"};
  cout<<"enter a name from your 3 men gang in small : ";
  string name;
  cin>>name;  
  try {
    if(name==s[0] || name==s[1] || name==s[2])
      cout<<"you got it right";
    else 
      throw name;
  }
  catch (string name) {
    error(name);
  }
  catch(runtime_error& a) {
    cerr<<a.what()<<'\n';
  }
  return 0;
}
void error(string s0)
{
  throw runtime_error(s0);
}
