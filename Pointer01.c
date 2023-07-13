#include<stdio.h>
#include<math.h>

int main(){
    char a;
    int x;
    float p,q;

    a='A';
    x= 125;
    p= 10.25, q= 18.75;

    printf("%c %u \n", a, &a);
    printf("%d %u \n", x, &x);
    printf("%f %u\n", p, &p);
    printf("%f \n", q, &q);


    return 0;



}