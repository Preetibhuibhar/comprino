#include <stdio.h>

int main()
{
// your code goes here
long long int s;
scanf("%lld",&s);
while(s--)
{
   long long int n;
   scanf("%lld",&n);
   long long int h[1000000],i;
   for(i=0;i<n;i++)
   {
       scanf("%lld",&h[i]);
   }
   int flag=1;
   if(n%2==0)
   {
       flag=0;
   }
   else
   {
       if((h[0]==1)&&(h[n-1]==1))
       {
           for(i=0;i<n;i++)
           {
               if(h[i]!=h[n-1-i])
               {
                   flag=0;
                   break;
               }
           }
       }
       else if((h[0]!=1)||(h[n-1]!=1))
       {
           flag=0;
       }    
   }
       
        long long int sum1=0;
        for(i=0;i<(n/2)+1;i++)
        {
            sum1+=h[i];
        }
        long long int N=(n/2)+1;
        if(sum1!=(N*(N+1))/2)
        {
            flag=0;
        }
   if(flag==1)
   printf("yes\n");
   else if(flag==0)
   {
       printf("no\n");
   }
}
return 0;
}

