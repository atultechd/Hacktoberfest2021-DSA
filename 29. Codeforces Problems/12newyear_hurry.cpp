// k - times in muntes to reach
// n - no of problems
// 5*i minutes for each problem
// int initial_time=8;
// int final_time=12;
#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int count=0;
    int total_time=240;
    int current_time=0;
    for(int i=0;i<n;i++){
        current_time+=5*(i+1);
        if(current_time>total_time-k){
            break;
        }
        count++;
    }
    cout<<count<<endl;
    return 0;
}