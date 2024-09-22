// program to get number from user and check if is an Armstrong number

#include <math.h>
#include <stdio.h>

int main(){
    //Declaring variables
    int num, sum = 0, temp, single, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // finding the number of digits in the number
    temp = num;
    while (temp != 0)
    {
        temp /= 10;
        digits++;
    }

    //calculating sum of each digit raised to num of digits
    temp = num;
    while (temp != 0)
    {
        single= temp % 10;
        sum += pow(single, digits);
        temp /= 10;
    }

    // checking if sum is equal to the number
    if (sum == num){
        printf("%d is an Armstrong number\n", num);
    }
    else{
        printf("%d is not an Armstrong number\n", num);
    }


    return 0;
}