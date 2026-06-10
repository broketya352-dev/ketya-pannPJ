typedef struct
{
    int flowerID;
    char nameFlower[50];
    float price;
    int inStock;
    int lowstock;
} Flower;

typedef struct
{
    int orderId;
    char clientName[50];
    int flowerId;
    char flowerName[50];
    int quantity;
    float totalPayment;

} Order;