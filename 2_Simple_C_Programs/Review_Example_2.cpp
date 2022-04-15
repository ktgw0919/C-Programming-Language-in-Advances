#include<iostream>
using namespace std;

int main(void){
    double a,b;
    cout<<"Please enter two floats:";
    cin>>a>>b;
    double ans=a*b;
    cout<<"The product of the floating numbers you entered is '"
        <<ans<<"'."<<endl;
    return 0;
}