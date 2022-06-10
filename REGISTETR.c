/*#include<stdio.h>

int main(){
    register int a=20;
    printf("%d\n",a);
}


#include<stdio.h>
int main(){
    register int a=10;
    printf("%u",&a);//this will give compile time error since we cannot access the address of a register variable
}*/

#include<stdio.h>

void fun();

int main(){
fun();
fun();
}

void fun(){
    register int a=80,b=79;
    auto int c=a+b;

    c++;
    
    printf("%d\n",c);
}
