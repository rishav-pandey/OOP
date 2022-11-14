#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="KIITUniversity";
    cout<<"Length: "<<s.length()<<endl;
    cout<<(s.empty() ? "string is empty":"string is not empty")<<endl;
    cout<<"before resizing: "<<s<<endl;
    s.resize(4);
    cout<<"After resizing: "<<s<<endl;
    s.clear();
    cout<<"After clear s is empty"<<endl;
    s="KIITUniversity";
    cout<<"character at 3rd index is "<<s.at(2)<<endl;
    string t="KIITUniversity";
    cout<<(s.compare(t)==0 ? "s and t are same":"s and t are not same")<<endl;
    cout<<"The letter U is "<<((s.find('U')!= string::npos) ? "present":"Not Present")<<endl;
    cout<<"from index 3 the string is "<<s.substr(3)<<endl;
}