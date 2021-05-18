#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int len;
    scanf("%d",&len);
    while(len--){
        long long int c,d,l;
        scanf("%lld%lld%lld",&c,&d,&l);
        if(l%4==0){
            long long int r;
            r=(c+d)-(l/4);
            if(r>=0 && r<=c && r<=2*d)
                printf("yes\n");
            else
                printf("no\n");
        }
        else
            printf("no\n");
    }
}
