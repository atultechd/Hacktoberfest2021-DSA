#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(A[i]==0){
            continue;
        }
        if(A[i]>=A[k-1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}