#include<stdio.h>
int main(){
   int n ,count=0;
   printf("enter the number to find its a prime or not:");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    if(n%i==0)
    {
        
     count++;
    }  
   }
   if(count==2)
   printf("its a prime number");
   
   else
       printf("its not a prime number");
   

    return 0;
}
