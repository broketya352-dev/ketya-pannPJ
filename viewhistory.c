#include <stdio.h>

#include "data.h"
#include <string.h>



void viewOrderHistory(Order order[], int totalOrder);
void viewOrderHistory(Order order[], int totalOrder) {

    if(totalOrder == 0){

        printf("Haven't any order!");
        return;

    }

    for (int i=0;i < totalOrder ;i++) {

    printf("\nOrder %D\n", i+1);

    printf("Order ID: %d\n",order[i].customerID);

    printf("Client name : %s\n", order[i].clientName);

    printf("Flower Name: %d\n", order[i].flowerName);

    printf("Quantity : %d\n", order[i].quantity);

    printf("Unit price : %.2f\n");

    printf("Total payment : %.2f\n", order[i].totalPayment);


    printf("----------------------------------------------");

        
    }
}
