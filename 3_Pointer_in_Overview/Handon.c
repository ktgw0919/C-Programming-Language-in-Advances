#include<stdio.h>

int A[1009];
int sum=0;
const int n=1000;
int a,b;

int main(void){
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++){
        A[i]=a*i+b;
        sum+=A[i];
    }
    double ave = sum/n;

    printf("%lf\n",ave);
}
