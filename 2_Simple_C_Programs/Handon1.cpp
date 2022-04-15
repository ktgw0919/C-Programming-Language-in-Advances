#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

vector<ll> a;
int n;

int main(void){
    cout<<"How many integers to enter?"<<endl;
    cout<<"Note: Must be less than 2147483647 pieces"<<endl;
    cin>>n;
    a.resize(n);

    cout<<"Please enter one integer per line"<<endl;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());

    cout<<endl;
    cout<<"Sort Results"<<endl;
    for(int i=0;i<n;i++)cout<<a[i]<<endl;

    return 0;
}