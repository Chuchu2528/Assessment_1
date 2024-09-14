/*C Programming Assessment Test
Food Billing System.
*/

#include <stdio.h>
main()
{
    int choice, quantity;
    float total = 0, amt = 0;
    char cont_Order = 'y';


    // menu
    printf("\n\n\t Welcome to the Mom's'Food Billing System");
    printf("\n\n\t -----------------------------------");
    
    printf("\n\n\t Menu:");
    printf("\n\n\t 1. Pizza    price - 180.00 rs./pcs ");
    printf("\n\n\t 2. Burger   price - 100.00 rs./pcs ");
    printf("\n\n\t 3. Dosa     price - 120.00 rs./pcs");
    printf("\n\n\t 4. Idli     price - 50.00 rs./pcs");
    printf("\n\n\t Please enter your choose.......: 1 ");
    printf("\n\n\t ----------------------------------- ");

  
    while (cont_Order == 'y' || cont_Order == 'Y') 
	{
        
        printf("\n\n\t Enter the item number you want to order : ");
        scanf("%d", &choice);

        
        printf("\n\n\t Enter the quantity : ");
        scanf("%d", &quantity);
        
        switch (choice) 
		{
            case 1:
                total += 180 * quantity;
                printf("\n\n\t You ordered %d Pizza(s).", quantity);
                break;
            case 2:
                total += 100 * quantity;
                printf("\n\n\t You ordered %d Burger(s).", quantity);
                break;
            case 3:
                total += 120 * quantity;
                printf("\n\n\t You ordered %d Dosa (es).", quantity);
                break;
            case 4:
                total += 50 * quantity;
                printf("\n\n\t You ordered %d Idli(s).", quantity);
                break;
           
            default:
                printf("\n\n\t Invalid choice! Please select a valid item from the menu.");
                continue; 
        }
		   printf("\n\n\t Your amt is: %.2f", total, amt);
           printf("\n\n\t Do you want to order anything else? (y/n): ");
           scanf(" %c", &cont_Order);
           
          
    }

        
   		printf("\n\n\t --- Final Bill ---");
   		printf("\n\n\t Final Bill: Rs. %.2f ", total);
   		printf("\n\n\t Thank you for your order!");
   		printf("\n\n\t-----------------------------------");

}
