#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,n;
    scanf("%d" , &t);
    while(t!=0)
    {
        scanf("%d" , &n);
        char s[n][30];
        int c=0,c1=0;
        for(i=0;i<n;i++)
        {
            scanf("%s" , s[i]);
        }
        for(i=0;i<n;i++)
        {
            if((strcmp(s[i],"cookie")==0) && (strcmp(s[i+1],"milk")==0))
            c++;
            if(strcmp(s[i],"cookie")==0)
            c1++;
        }
        if(c==c1)
        printf("YES\n");
        else
        printf("NO\n");
        t--;
    }
    return 0;
}