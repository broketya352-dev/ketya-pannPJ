#include <stdio.h>
#include <string.h>

typedef struct
{
    int flowerID;
    char nameFlower[50];
    float price;
    int inStock;
    int lowstock;
} Flower;

void updateFlower(Flower flowers[], int count);

void updateFlower(Flower flowers[], int count)
{
    int id;
    int flag = -1;
    int pick;

    printf("\n----------- UPDATE FLOWER -----------\n");

    for (int i = 0; i < count; i++)
    {
        printf("ID: %d | Name: %s | Price: %.2f | Stock: %d\n",
               flowers[i].flowerID,
               flowers[i].nameFlower,
               flowers[i].price,
               flowers[i].inStock);
    }

    printf("\nEnter Flower ID to update: ");
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
        printf("Flower not exist!\n");
        return;
    }

    do
    {
        printf("\nUpdate Menu\n");
        printf("1. Update Name\n");
        printf("2. Update Price\n");
        printf("3. Update Stock\n");
        printf("4. Update Low Stock\n");
        printf("5. Update All Info\n");
        printf("0. Save and Exit\n");
        printf("Choose: ");

        scanf("%d", &pick);

        switch (pick)
        {
        case 1:

            getchar();

            printf("New Name: ");

            fgets(flowers[flag].nameFlower,
                  sizeof(flowers[flag].nameFlower),
                  stdin);

            flowers[flag].nameFlower[
                strcspn(flowers[flag].nameFlower, "\n")
            ] = '\0';

            printf("New name has saved\n");
            break;

        case 2:

            printf("New Price: ");
            scanf("%f", &flowers[flag].price);

            if (flowers[flag].price < 0)
            {
                printf("Invalid price!\n");
                flowers[flag].price = 0;
            }

            printf("Price saved\n");
            break;

        case 3:

            printf("New stock amount: ");
            scanf("%d", &flowers[flag].inStock);

            if (flowers[flag].inStock < 0)
            {
                printf("Invalid stock\n");
                flowers[flag].inStock = 0;
            }

            printf("Stock updated\n");

            if (flowers[flag].inStock < flowers[flag].lowstock)
            {
                printf("WARNING: Stock is low!\n");
            }

            break;

        case 4:

            printf("New low stock level: ");
            scanf("%d", &flowers[flag].lowstock);

            if (flowers[flag].lowstock < 0)
            {
                flowers[flag].lowstock = 0;
            }

            printf("Low stock saved\n");
            break;

        case 5:

            getchar();

            printf("New Name: ");

            fgets(flowers[flag].nameFlower,
                  sizeof(flowers[flag].nameFlower),
                  stdin);

            flowers[flag].nameFlower[
                strcspn(flowers[flag].nameFlower, "\n")
            ] = '\0';

            printf("New Price: ");
            scanf("%f", &flowers[flag].price);

            printf("New Stock: ");
            scanf("%d", &flowers[flag].inStock);

            printf("New Low Stock: ");
            scanf("%d", &flowers[flag].lowstock);

            printf("All information updated.\n");

            if (flowers[flag].inStock < flowers[flag].lowstock)
            {
                printf("WARNING: Stock is running out!\n");
            }

            break;

        case 0:

            printf("Changes saved.\n");
            break;

        default:

            printf("Invalid pick\n");
        }

    } while (pick != 0);

    printf("\n===== UPDATED FLOWER =====\n");
    printf("ID: %d\n", flowers[flag].flowerID);
    printf("Name: %s\n", flowers[flag].nameFlower);
    printf("Price: %.2f\n", flowers[flag].price);
    printf("Stock: %d\n", flowers[flag].inStock);
    printf("Minimum Stock: %d\n", flowers[flag].lowstock);

    if (flowers[flag].inStock < flowers[flag].lowstock)
    {
        printf(" NEED RESTOCK\n");
    }
    else
    {
        printf("STOCK SUFFICIENT\n");
    }
}

