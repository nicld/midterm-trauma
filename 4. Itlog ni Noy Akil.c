/*

Problem 4 - Itlog ni Noy Akil

Noy Akil sells different variant of (eggs) balut and penoy from wholesale to retail. The store offers has 3 main egg selections named as #16, #18, 
and penoy with a tagged price of 15.00 php, 22.50 php, and 13.00 php per piece. Noy Akil offers mark done price for bulk orders. A set contains 
5 trays of 2.5 dozen per tray. Orders that reach at least a set will have a discount of 5% and for orders for more than 2 sets will have 10% discount. 
Help create a program that would accept the egg type, total egg orders and the amount tendered by the customer. The program would then display the 
summary of the transaction (see sample output).

*/

#include <stdio.h>

int main() {
    int egg, orders;
    float total = 0, discount = 0, discTotal, change, amnt;
    
    printf("Itlog ni Noy AKIL!\n");
    printf("[1] #16 @ Php 15.00\n");
    printf("[2] #18 @ Php 22.50\n");
    printf("[3] penoy @ Php 13.00\n");
    
    do{
        printf("Enter your egg type: ");
        scanf("%d", &egg);
        
        if (egg == 1){
            total += 15.00;
            break;
        } else if (egg == 2){
            total += 22.50;
            break;
        } else if (egg == 3){
            total += 13.00;
            break;
        }
    } while (egg);
    
    printf("Enter total egg orders: ");
    scanf("%d", &orders);
    total *= orders;
    
    printf("Enter amount: ");
    scanf("%f", &amnt);
    
    printf("\nSUMMARY\n");
    printf("Total Cost: Php %.2f\n", total);
    
    if (orders >= 150 && orders < 300){
        discount = total * 0.05;
    } else if (orders >= 300){
        discount = total * 0.10;
    }
    
    printf("Discount: Php %.2f\n", discount);

    discTotal = total - discount;
    
    if(discount != 0.00){
        printf("Discounted Price: Php %.2f\n", discTotal);
    }
    
    change = amnt - discTotal;
    
    if(change >= 0){
        printf("Change: Php %.2f", change);
    } else {
        printf("Change: (Php %.2f)", change * -1);
    }
    
    return 0;
}
