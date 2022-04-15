#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    float a,b,c;
    cin>>a>>b>>c;
    cout<<max(c,max(a,b))<<endl;
    return 0;
}

