/*#include <stdio.h>

int main()
{
   auto int a=10;
   a++;
  // printf("%d\n",a);
   {
       int b=20;
       printf("%d",b);
        printf("%d\n",a);
   }
}*/


#include<stdio.h>
int fun();

int main(){
    int c;
    fun();
    fun();
    
}

int fun(){
    
    auto int a=10;
    auto int b=20;
   auto int c=a+b;
    
    printf("%d\n",c);
    
}
