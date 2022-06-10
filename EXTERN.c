#include<stdio.h>

extern int a=10;

void fun();

int main(){
    
    fun();
    
}

void fun()
{
    printf("%d",a);
}
