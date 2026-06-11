#include <stdio.h>
#include <string.h>
#include <time.h>

#include "trackorder.h"
#include "data.h"

static int nextOrderID = 1;
static int nextCustomerID = 1;

void trackOrder(Flower *flowers, int count);

void trackOrder(Flower *flowers, int count)
{

    Order order;

    int id;
    int flag = -1;

    printf("\n------------- Track order --------------");

    getchar();

    printf("Enter Customer Name: ");

    fgets(order.clientName,
          sizeof(order.clientName),
          stdin);

    order.clientName[
        strcspn(order.clientName, "\n")
    ] = '\0';

    printf("\nAvailable Flowers\n");

    for (int i = 0; i < count; i++)
    {
        printf("ID: %d | Name: %s | Price: %.2f | Stock: %d\n",
               flowers[i].flowerID,
               flowers[i].nameFlower,
               flowers[i].price,
               flowers[i].inStock);
    }

    printf("\nEnter Flower ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (flowers[i].flowerID == id)
        {
            flag = i;
            break;
        }
    }

    if (flag == -1)
    {
        printf("Flower not found!\n");
        return;
    }

    printf("Enter Quantity: ");
    scanf("%d", &order.quantity);

    if (order.quantity <= 0)
    {
        printf("Invalid quantity!\n");
        return;
    }

    if (order.quantity > flowers[flag].inStock)
    {
        printf("Not enough stock!\n");
        return;
    }
// track order with customer ID
    order.orderID = nextOrderID++;

    order.customerID = nextCustomerID++;

    order.flowerID =
        flowers[flag].flowerID;

    strcpy(order.flowerName, flowers[flag].nameFlower);

    order.unitPrice =
        flowers[flag].price;

    order.totalPayment = order.quantity *order.unitPrice;

    flowers[flag].inStock -= order.quantity;

    printf("\n------------Pre-recept---------------\n");

    printf("Order ID : %d\n",
           order.orderID);

    printf("Customer ID : %d\n",
           order.customerID);

    printf("Client name: %s\n",
           order.clientName);

    printf("Flower Name : %s\n",
           order.flowerName);

    printf("Quantity : %d\n",
           order.quantity);

    printf("Unit Price : %.2f\n",
           order.unitPrice);

    printf("Total Payment : %.2f\n",
           order.totalPayment);

    printf("Remaining Stock : %d\n",
           flowers[flag].inStock);

    if (flowers[flag].inStock <
        flowers[flag].lowstock)
    {
        printf("\nStock is running out!\n");
    }

    printf("---------------------------------------\n");
}
