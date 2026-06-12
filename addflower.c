#include<stdio.h>

#include "data.h"
#include<string.h>

void addFlower(Flower *flowers,int *count);

void addFlower(Flower *flowers,int *count)
{
    printf("ADD FLOWER\n");

    printf("flower id: ");
    scanf("%d", &flowers[*count].flowerID);

    getchar();

    printf("flower name: ");

    fgets(flowers[*count].nameFlower,
          sizeof(flowers[*count].nameFlower),
          stdin);

    flowers[*count].nameFlower[
        strcspn(flowers[*count].nameFlower,
                "\n")
    ] = '\0';

    printf("price: ");
    scanf("%f", &flowers[*count].price);

    printf("stock: ");
    scanf("%d", &flowers[*count].inStock);

    printf("Low Stock: ");
    scanf("%d", &flowers[*count].lowstock);

    (*count)++;

    printf("\nFlower has Added!\n");
}
