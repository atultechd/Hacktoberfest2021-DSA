#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n+1]={0};
    int p;
    cin>>p;
    A[0]=1;
    for(int i=0;i<p;i++){
        int a;
        cin>>a;
        A[a]++;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int b;
        cin>>b;
        A[b]++;
    }
    bool flag=true;
    for(int i=1;i<=n;i++){
        if(A[i]==0){
            flag=false;
        }
    }
    if(flag){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}