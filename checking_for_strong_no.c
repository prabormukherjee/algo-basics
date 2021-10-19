
#include<stdio.h>
int main()
{
    int i,n,r,fact,sum=0,temp;
    printf("enter a number: ");
    scanf("%d",&n);
   temp=n;
    while(n>0)
    {
        r=n%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    n=temp;
    if(n==sum){
        printf("Given number is a strong number.");
    }
    else
    {
        printf("Given number is not a strong number.");
    }
    return 0;

}
