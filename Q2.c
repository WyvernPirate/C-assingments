// C program to input n numbers into array, calculate sum of all even, all odd and print the larger sum
#include <stdio.h>

int main(){
    //Declaration of variables
    int n, i, even_sum = 0, odd_sum = 0, num;

    // Getting array length
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // creation of array Arr
    int arr[n];

    // Adding elements into the array
    for (i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculating sum of even and odd numbers
    for (i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            even_sum += arr[i];
        }else{
            odd_sum += arr[i];
        }
    }
    
    // Printing the larger sum
    if (even_sum > odd_sum){
        printf("The larger sum is Even numbers by : %d", even_sum);
    }else{
        printf("The larger sum is Odd numbers by : %d", odd_sum);
    }
    



}