#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    string si;
    // Taking stream of char as input 
    // getline(cin,si);
    // cout<<si<<endl;

    string s(10,'*');
    cout<<s<<endl;

    string str = "Ronald";
    str.push_back('.');
    str.pop_back();
    cout<<str<<endl;

    si = "I am Ronald Patrick";
    string::iterator it = si.begin();

    for(it; it!=si.end();it++)
    cout<<*it;

    return 0;
}