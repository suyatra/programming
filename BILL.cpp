#include <stdio.h>
#include <string.h>

struct Bill 
{
    char item_name[50];
    float item_price;
    int item_quantity;
};

void addBill(struct Bill bills[], int *bill_count) 
{
    char item_name[50];
    float item_price;
    int item_quantity;

    printf("Enter the name of the item: ");
    scanf("%s", item_name);

    printf("Enter the price of the item: ");
    scanf("%f", &item_price);

    printf("Enter the quantity of the item: ");
    scanf("%d", &item_quantity);

    bills[*bill_count].item_name[0] = '\0';
    strncpy(bills[*bill_count].item_name, item_name, 50);
    bills[*bill_count].item_price = item_price;
    bills[*bill_count].item_quantity = item_quantity;

    (*bill_count)++;
}

void displayBill(struct Bill bills[], int bill_count) 
{
    int i;
    float total_amount = 0.0;

    printf("\nBill Book\n");
    printf("------------------------------------------------------------------------------\n");
    printf("| Item Name\t\t| Item Price\t| Item Quantity\t| Total Price\t\t|\n");
    printf("------------------------------------------------------------------------------\n");

    for(i = 0; i < bill_count; i++) 
{
        float total_price = bills[i].item_price * bills[i].item_quantity;
        total_amount += total_price;

        printf("| %s\t\t| $%.2f\t\t| %d\t\t| $%.2f\t\t|\n", bills[i].item_name, bills[i].item_price, bills[i].item_quantity, total_price);
        
}

    printf("------------------------------------------------------------------------------\n");
    printf("Total Amount: $");
}
