#include<iostream>
using namespace std;
typedef long long ll;

ll calcDigits(ll n){
    int digit=0;
    while(n!=0){
        n/=10;
        digit++;
    }
    return digit;
}

int main(void){
    ll n;
    cin>>n;
    if(n<0)n*=-1;
    cout<<calcDigits(n)<<endl;
    return 0;
}