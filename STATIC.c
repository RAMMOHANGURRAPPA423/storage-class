#include<stdio.h>
static int a=10;
static int b=40;
int fun();

int main(){

    fun();
    fun();
    fun();
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}
int fun(){
    
    int d=a+b;
    
   printf("%d\n",d);
}
