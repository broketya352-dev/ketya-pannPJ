#include <stdio.h>
#include <string.h>
#include <time.h>

#include "data.h"

void trackOrder(Flower *flowers, int count);
void trackOrder(Flower *flowers, int count)
{

    Order order;

    int id;
    int flag = -1;

    srand(time(NULL));

    printf("\n------------- Track order ------------");

    getchar();
    printf("Enter Customer Name: ");

    fgets(order.clientName,
          sizeof(order.clientName),
          stdin);

    order.clientName[strcspn(order.clientName, "\n")] = '\0';

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

    if (flag = -1)
    {
        printf("Flower not found!\n");
        return;
    }

    // printf();
}