#include<stdio.h>
int prime(int x)
{
    int i,tamp=0;
    for(i=2;i<=x-1;i++){
        if(x%i==0){
            tamp=1;      
            break;  
        }
    }
    return(tamp);
}
int amstrom(int y)
{
   int count=0,tamp,sum=0,rem,mul=1,cnt,b,x;
   x=y;
   while (y>0)
   {
       y=y/10;
       count++;
   }
   cnt=count;
   while (x!=0)
   {
       rem=x%10;
       while (cnt!=0)
       {
           mul=mul*rem;
           cnt--;
       }
       cnt=count;
       x/=10;
       sum+=mul;
       mul=1;
   }
   return sum;
}
int perfect(int z)
{
    int i,rem,sum=0,x;
    
    for(i=1;i<z;i++){
        rem=z%i;
        if(rem==0){
            sum=sum+i;
        }
    }
    return sum;
}
int main()
{
    int a,b,c;
    printf("Enter No:");
    scanf("%d",&a);
    
    if(prime(a)==0){
        printf("No is prime\n");
    }
    else{
        printf("No is not prime\n");
    }
    
    if(amstrom(a)==a){
        printf("No is armstrom Number\n");
    }
    else{
        printf("No is not armstrom Nummber\n");
    }
    if(perfect(a)==a)
        printf("No is perfect\n");
    else
        printf("No is not perfect\n");
    return 0;
}