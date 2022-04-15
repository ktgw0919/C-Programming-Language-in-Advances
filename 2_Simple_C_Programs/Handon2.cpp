#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
typedef long long ll;

vector<double> a;
int n;
double sum=0;

int main(void){
    cout<<"How many floats to enter?"<<endl;
    cin>>n;
    if(n<=0){
        cout<<"Error"<<endl;
        return 0;
    }
    a.resize(n);

    cout<<"Please enter one float per line"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    cout<<fixed<<"The average of the entered values is "<<setprecision(10)<<sum/n<<"."<<endl;

    return 0;
}