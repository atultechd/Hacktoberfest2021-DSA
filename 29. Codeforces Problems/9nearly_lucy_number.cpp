#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int temp=n;
    int count=0;
    while(temp!=0){
        int remainder;
        remainder=temp%10;
        if(remainder==7 || remainder==4){
            count++;
        }
        temp/=10;
    }
    if(count==4 || count==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}