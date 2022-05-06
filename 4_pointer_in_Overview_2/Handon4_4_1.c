#include<stdio.h>


float mul_2(float a,float b){
    return a*b;
}
float mul_2_p(float *a,float *b){
    return *a**b;
}

int main(void){
    float a,b;
    scanf("%f%f",&a,&b);

    printf("A*B = %f\n",mul_2(a,b));
    printf("A*B = %f\n",mul_2_p(&a,&b));

    return 0;
}