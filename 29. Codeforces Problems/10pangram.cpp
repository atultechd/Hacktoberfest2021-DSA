#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int A[26]={0};
    for(int i=0;i<s.length();i++){
      s[i]=toupper(s[i]);
      A[s[i]-'A']++;
    }
    bool flag=true;
    for(int i=0;i<26;i++){
        if(A[i]==0){
            flag=false;
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}




// #include <iostream>
// using namespace std;
// int main() {

//     int len;
//     cin>>len;
    
//     string s;
//     cin>>s;

//     int arr[26]={0};

//     for(int i=0;i<len;++i)
//     {
//             if(int(s[i]-'a')>=0)
//             arr[s[i]-'a']++;
//             else arr[s[i]-'A']++;

//     }

//     for(int i=0;i<26;++i)
//     {
//         if(arr[i]==0)
//         {
//             cout<<"NO";
//             return 0;
//         }
//     }
//   cout<<"YES";
// }