/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int num1,num2,r,p,n1,n2;
   printf("enter the no.");
   scanf("%d%d",&num1,&num2);
   n1=num1;
   n2=num2;
   while(num2!=0)
   {
       r=num1%num2;
       num1=num2;
       num2=r;
    }
    printf("GCD=%d\n",num1);
    printf("For LCM of %d and %d\n",n1,n2);
    p=(n1*n2)/num1;
    printf("LCM=%d",p);
    return 0;
   
       
}