#include<stdio.h>
#include<stdlib.h>

void calc_esfera(float R, float *area, float *volume){
    int p=3.14;
    *area=4*p*(R*R);
    *volume=(4/3)*p*(R*R*R);
}

main(){
    float r=3,a,v;

    calc_esfera(r,&a,&v);
    printf("%f\n%f",a,v);
}
