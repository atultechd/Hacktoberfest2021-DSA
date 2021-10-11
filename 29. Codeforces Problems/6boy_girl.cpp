#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int lenght=s.length();
    int A[26]={0};
    for(int i=0;i<lenght;i++){
        A[s[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(A[i]!=0){
            count++;
        }
    }
    if(count&1){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}