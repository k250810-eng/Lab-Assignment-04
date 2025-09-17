#include <stdio.h>

int main (void){

int n;
int total;
int remainder;

     printf("-----Welcome to mario's pizza Place-----\n");
     printf(" 1st Deal: 1 pizza for 8$\n 2nd Deal: 2 pizzas for 15$ \n 3rd Deal: 3 pizzas for 21$ \n");
     printf("How many Pizzas do you want? \n");

     scanf("%d", &n);

     while(n<=0)
{
     printf("Buy something as this is an invalid amount \n");
     scanf("%d", &n);
}
     remainder = n%3;

     if((n%3)==0)
{
     total = (n/3) * 21;
     printf("That will be %d\n$", total);
}
     else if((remainder%2==0))
{
     total = ((remainder/2)*15 ) + ((n/3) * 21);
     printf("That will be %d\n$", total);
}
     else
{
     total = (remainder*8) + ((n/3) *21);
     printf("that will be  $%d\n", total);
}
     return 0;
}