// C program get price and quantity from user, calculate sum and use switch case to calculate the discount and output item quantity, sum and discounted price
#include <stdio.h>

int main(){
    //Declarations and initialisation of variables
    int choice, quantity, num;
    float price, sum = 0, discount = 0, discounted_price = 0;

    //Getting number of items from user
    printf("Enter number of unique items :");
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        printf("Enter the price of item %d: ",i + 1);
        scanf("%f", &price);
        printf("Enter the quantity of item: ");
        scanf("%d", &quantity);
        sum += price * quantity;
    }

    //Determining the discount of the items
    if (sum > 5000.0){
        discount = 15;
    }else if(sum > 1000.0){
        discount = 10;
    }else{
        discount = 5;
    }
    
    //Calculation the price of all items
    discounted_price = sum - (sum * discount / 100);

    //Outputting the results


    printf("\n\nTotal quantity of items: %d\n", num);
    printf("Total sum: P%.2f\n", sum);
    printf("Discount: P%.2f%%\n", discount);
    printf("Discounted price: P%.2f\n", discounted_price);

    return 0;
}

