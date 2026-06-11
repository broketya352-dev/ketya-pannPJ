#ifndef DATA_H
#define DATA_H

typedef struct
{
    int flowerID;
    char nameFlower[50];

    float costPrice;
    float price;

    int inStock;
    int lowstock;

    int totalSold;

} Flower;

typedef struct
{
    int orderID;
    int customerID;

    char clientName[50];

    int flowerID;
    char flowerName[50];

    int quantity;

    float unitPrice;
    float totalPayment;

} Order;

#endif
