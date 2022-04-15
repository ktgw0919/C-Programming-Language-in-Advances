#include<stdio.h>

int main(void){
    int a;
    float b;
    double c;
    printf("%d,%d,%d\n",sizeof(a),sizeof(b),sizeof(c));
    printf("%d,%d,%d",&a,&b,&c);
}