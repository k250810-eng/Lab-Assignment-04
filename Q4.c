#include <stdio.h>

int main(void)
{

    int size;
    // pizza number
    int pizza;
    char choice;
    // total
    float total = 0;
    // crust
    int crust;
    // cheese
    char cheese;
    // time
    int time;
    // student id
    char std;
    // delivery
    char del;

   // Reciept
   float sizecost = 0;
   float cheesecost = 0;
   float delcost = 0;
   float crustcost = 0;
   float stddis = 0;
   float timedis = 0;

    printf("-----Welcome to Giovanni's Pizza place----\n Lets Start Your Order: \n");

    // size
    do
    {
        float subtotal = 0;

    printf("What size of pizza do you want? press:\n");
    printf("1 for small (5$)\n2 for medium (7$)\n3 for large (10$)\n --->");
    scanf("%d", &size);
    while (size > 3 || size < 1)
{
      printf("enter a number from 1 till 3");
      scanf("%d", &size);
      continue;
}

   if (size == 1)
{
    subtotal = 5;
}
   else if (size == 2)
{
    subtotal = 7;
}
   else if (size == 3)
{
    subtotal = 10;
}
    else
{
    printf("invalid request \n");
    continue;
}

        // number of pizzas

   printf("How many of that type do you want?\n --->");
   scanf("%d" , &pizza);
   while (pizza <= 0){
    printf("The number has to be greater than 0\n --->");
    scanf("%d" , &pizza);
   }
   subtotal = subtotal * pizza;
   sizecost += subtotal;


 // crust

   printf("What type of crust do you want?\n");
   printf("press 1 for Regular crust (0$)\npress 2 for Thin Crust (1$)\npress 3 for stuffed crust (2$)\n --->");
   scanf("%d", &crust);

   while(crust<1||crust>3){

     printf("invalid number try again! \n");
     scanf("%d", &crust);
     continue;
}
   if(crust==2){
   subtotal += 1*pizza;
   crustcost += 1*pizza;
}

   else if(crust==3){
   subtotal += 2*pizza;
   crustcost += 2*pizza;
}

if (pizza == 3 && crust == 3)
{
    printf("🥳 You get free garlic bread!\n");
}
// cheese
   printf("Do you want cheese with that or no? Type Y or N \n --->");
   scanf(" %c", &cheese);

   if(cheese == 'Y'|| cheese == 'y')
   {
    subtotal += (1.50* pizza);
    cheesecost += (1.50* pizza);
   }

// total
total += subtotal;

   printf("do you want to buy more? (Y/N) \n --->");
   scanf(" %c", &choice);
    }
    while (choice == 'y' || choice == 'Y');

//time discount
printf("Great! Now would you tell what time it is in the 24 hours format? \n  --->");
scanf("%d", &time);

  if(11<=time && time<=14)
  {
    total= total*0.90;
    timedis = total*0.10;
    printf("You get a 10 percent discount for ordering at this time! \n");     
  }
     // std ID
printf("Do you have a student ID? (Y/N)\n--->");
scanf(" %c" , &std);

  if(std == 'y'|| std== 'Y')
  {
    total = total-2;
    printf("Congrats You get a 2$ discount for being a student! \n");
    stddis = 2;
    
    if (total<0)
    {
    total = 0;
    }

  }
// Delivery/Pickup

printf("Lastly do you want delivery? (Y/N)\n --->");
scanf(" %c", &del);

//total bill

     if(del == 'y'||del == 'Y')
     {
       total += 2;
       delcost = 2;
     }
     else
     {
       printf("We Will wait for you to pick it up then \n");
     }
     
     //reciept

     printf("\nFinally your total bill comes to  %.2f$ \n", total);
        
     printf("-------Reciept-------\n"); 
     printf("Size cost: %.2f$\n", sizecost);
     printf("Base cost: %.2f$\n", crustcost);                      
     printf("Cheese cost: %.2f$\n", cheesecost);
     printf("Time discount: -%.2f$\n", timedis);     
     printf("Student discount: -%.2f$\n", stddis);
     printf("Delivery cost: %.2f$\n", delcost);
     printf("Total: %.2f$\n", total); 
    }