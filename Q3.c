// C program get price and quantity from user, calculate sum and use switch case to calculate the discount and output item quantity, sum and discounted price
#include <stdio.h>

int main(){
    //Declarations and initialisation of variables
    int choice, q, num, discount = 0;
    float p, d, sum = 0, discounted_price = 0;
    

    //Getting number of items from user
    printf("Enter number of unique items :");
    scanf("%d", &num);

    int quantity1[num];
    float price1[num], subtotal[num];

    for (int i = 0; i < num; i++){
        printf("Enter the price of item %d: ",i + 1);
        scanf("%f", &p);
        printf("Enter the quantity of item: ");
        scanf("%d", &q);
        sum += p * q;
        price1[i] = p;
        quantity1[i] = q;
    }

    //Calculating subtotal
    for(int i = 0; i < num; i++){
        subtotal[i] = price1[i] * quantity1[i];
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
    d = sum * discount / 100;
    discounted_price = sum - (d);

    //Outputting the results
    printf("Item\t\tPrice    Quantity\tSubtotal\n");
    for(int i = 0;i <num ; i++ ){
        printf("\nItem %d\t\t%.2f    %d\t\t%.2f",i+1, price1[i], quantity1[i],subtotal[i]);
    }
    printf("\n_________________________________________________\n");
    printf("TOTAL\t\t\t\t\t%.2f\n", sum);
    printf("Discount: %d %%\n\t\t\t\t\t-%.2f", discount, d);
    printf("\n_________________________________________________\n");
    printf("GRAND TOTAL: \t\t\t\t%.2f\n", discounted_price);

    return 0;
}

