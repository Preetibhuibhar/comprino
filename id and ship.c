#include<stdio.h>
int main(void)
{
    //your code starts here
    int t;
    char id;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%c",&id);
        switch(id)
        {
          case 'b' :
          case 'B'  :
                printf("BattleShip\n");
                t--;
                break;
               
               
          case 'c' :
          case 'C' :
               printf("Cruiser\n");
               t--;
               break;
          case  'f' :
          case  'F' :
           printf("Frigate\n");
           t--;
           break;
          case 'd'  :
          case 'D'  :
            printf("Destroyer\n");
            t--;
            break;
        }
             
             
       
       
    }
}
