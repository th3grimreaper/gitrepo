#include<iostream>
#include<vector>
#include<algorithm>
typedef std::vector<int>::size_type vect_sz;
int main()
{
    std::vector<int> val;
    int x;
    while(std::cin >> x)
        val.push_back(x); 
    vect_sz size;
    size=val.size();
    sort(val.begin(),val.end());
    std::cout<<"Here is a vector of size "<<size<<" in sorted order,\nthe values of which are : "<<'\n';
    int j=0;
    for(int i:val) {
        std::cout<<"val["<<j<<"] = "<<i<<'\n';
        j++;
    }
	if(val.empty())
		std::cout<<"Vector is empty."<<'\n';
	else
		std::cout<<"Vector is not empty."<<'\n';
    return 0;
}
