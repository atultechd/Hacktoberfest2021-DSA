#include<iostream>
// n friends
// k bottles 
// l milliliters
// c limes
// d slices
// p grams of salt.
//  nl milliliters of the drink, a slice of lime and np grams of salt.
using namespace std;
int main(){
    int n, k, l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drink=k*l;
    int toast1=total_drink/nl;
    int toast2=c*d;
    int toast3=p/np;
    int count=min(toast1, min(toast2, toast3));
    cout<<count/n<<endl;
    return 0;
}