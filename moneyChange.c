/*a C program to give back change to a customer in Kenya shillings, count and display number of each denomination*/

#include<stdio.h>
#include<conio.h>

int main()
{
  int itemCost/*Amount spent*/, amountPaid/*Amount paid by customer*/, Count/*Counter for each currency denomination*/, 
  change, i/*Index of the currency denomination in the array*/;
  int table[10]={1000, 500, 200, 100, 50, 40, 20, 10, 5, 1};/*Array to store the currency denominations, in KENYA SHILLINGS*/
  
  printf("Amount paid: ");
  scanf("%d",&amountPaid);
  printf("\nTotal cost of item(s): ");
  scanf("%d",&itemCost);
  
  change=amountPaid-itemCost;
  printf("\n change=%d \n",change);
  
  if(itemCost>amountPaid)
      {
  printf("\n Please pay atleast %d shillings more", itemCost-amountPaid);
      }/*executed when itemCost is more than amountPaid*/
  
  else
  {/*executed when amountPaid is more than itemCost*/
  for(i=0; i<10; i++)
  
     {
   Count=0;/*Initialize currency denomination count to 0*/
    if((change>table[i])||(change==table[i]))             {     
     while((change>table[i])||(change==table[i]))                {
     Count=Count+(change/table[i]);
    change=change%table[i];
   
                }

     printf("\n %d, %d shillings", Count, table[i]);
    
          }
     }
  }
  return 0;
 
}
