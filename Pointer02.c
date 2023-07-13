#include<stdio.h>
#include<math.h>

int addNumber (int *p, int b){
    
    printf("before");
    printf("b=%d\n", b); //4
     printf("x or *p=%d\n", *p); //3
   // a=a-1;
    b=b-2;
    *p=*p-3;
    printf("after");
    printf("x or *p=%d\n", *p);//0
    printf("b=%d\n", b);//2
    int sum = *p+b;
    return sum;
}
int main(){
   int x=10, *p, y;
p=&x;
printf("*p=%d\n", *p);
printf("*&x=%d\n", &x);
printf("only p=%d\n", p);
printf("only x=%d\n", x);
    x=10;
   p = &x; //p= address of x
   y= *p;  // y= *p= x= 10
   *p=20;

   // printf("%d", y);
    int a = 2;
    int b = 4;
    int xx = 3;
 
    int ans = addNumber(&xx, b);
   // printf("*p or xx=%d\n", xx);//0
    //printf("b=%d", b);//4

}