#include <stdio.h>
#include <string.h>

#include "Data.h"

#include "displayf.h"
#include "addflower.h"


void inatialflower(Flower *flowers, int *count) ;
void inatialflower(Flower *flowers, int *count) {
    *count = 20;

    flowers[0]  = (Flower){1,  "Red Rose",        5.00, 25, 5};
    flowers[1]  = (Flower){2,  "White Rose",      5.50, 18, 5};
    flowers[2]  = (Flower){3,  "Pink Rose",       6.00,  4, 5};
    flowers[3]  = (Flower){4,  "Yellow Rose",     5.75, 12, 5};
    flowers[4]  = (Flower){5,  "Lily",            4.50, 20, 5};
    flowers[5]  = (Flower){6,  "White Lily",      5.00,  3, 5};
    flowers[6]  = (Flower){7,  "Tulip",           6.25, 15, 5};
    flowers[7]  = (Flower){8,  "Sunflower",       7.00, 10, 5};
    flowers[8]  = (Flower){9,  "Orchid",          8.50,  8, 3};
    flowers[9]  = (Flower){10, "Daisy",           3.50, 30,10};
    flowers[10] = (Flower){11, "Carnation",       4.25, 14, 5};
    flowers[11] = (Flower){12, "Peony",           9.00,  2, 5};
    flowers[12] = (Flower){13, "Lavender",        4.75, 22, 5};
    flowers[13] = (Flower){14, "Jasmine",         5.25, 16, 5};
    flowers[14] = (Flower){15, "Chrysanthemum",   4.80,  6, 5};
    flowers[15] = (Flower){16, "Gerbera",         5.60,  5, 5};
    flowers[16] = (Flower){17, "Hydrangea",       7.50,  9, 5};
    flowers[17] = (Flower){18, "Iris",            6.75,  1, 3};
    flowers[18] = (Flower){19, "Baby's Breath",   3.75, 13, 5};
    flowers[19] = (Flower){20, "Marigold",        4.00, 17, 5};
}
void displayFlower(Flower *flowers,int count);

void displayFlower(Flower *flowers,int count) {
   
    if(count ==0) {
        printf("\n No flower avialable in the store!!\n");
        return;
    }

    printf("------------------existiong flower------------------------");

    for (int i = 0; i < count; i++)
    {
        printf("%d %s %.2f\n",
               flowers[i].flowerID,
               flowers[i].nameFlower,
               flowers[i].price);
    }




printf("-----------------------------------\n");

 }
