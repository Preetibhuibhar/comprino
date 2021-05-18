#include<stdio.h>
#include<string.h>
int main()
{
    int number_of_elements,i,number_i ,ones, zeroes,minus_ones,others;
   bool is_beautiful=0;
   
 
    for(i = 1; i <= number_of_elements; i++)
    {
        scanf("%d", &number_i);

        if(number_i == 1)
            ones++;
        else if(number_i == 0)
            zeroes++;
        else if(number_i == -1)
            minus_ones++;
        else
            others++;
    }

    if( (others > 1) || (minus_ones > 1 && ones == 0) || (minus_ones > 0 && others > 0))
        is_beautiful = false;

    printf(is_beautiful ? "yes\n" : "no\n");
}
