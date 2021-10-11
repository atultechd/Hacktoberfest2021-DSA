#include<iostream>
using namespace std;
int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int length = s.length();
        if(length<=10){
            cout<<s<<endl;
        }
        else if(length>10){
            cout<<s[0]<<length-2<<s[length-1]<<endl;
        }
    }
    return 0;
}