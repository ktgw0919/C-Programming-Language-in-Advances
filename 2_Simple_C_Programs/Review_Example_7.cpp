#include<iostream>
#include<string>
using namespace std;
typedef long long ll;

int main(void){
    ll a;
    cout<<"Please enter an integer:";
    cin>>a;
    for(int i=1;i<=10;i++){
        cout<<a<<" * "<<i<<
            " = "<<a*i<<endl;
    }
    return 0;
}