#include <stdio.h>
int add(int a , int b){
    return a + b ;
}


int main(){
    int num1 , num2 , result;
    printf("Enter a number1 : ");
    scanf("%d",&num1);
    printf("Enter a number2 : ");
    scanf("%d",&num2);
    result = add(num1,num2);
    printf("The sum of the numbers are : %d.",result);
    return 0;
}