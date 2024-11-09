#include<stdio.h>
#define MAX 5
int stack[MAX] , top = -1;
void push(int value){
    if(top == MAX-1){
        printf("Stack Overflow");
    }
    else{
        stack[++top]=value;
        printf("Pushed %d",value);
    }
}
void display(){
    if(top == -1){
        printf("Stack Empty");
    }
    else{
        printf("Stack: ");
        for(int i = top ; i>=0 ; i--){
            printf("%d",stack[i]);
        }
        printf("\n");
    }
}
void pop(){
    if(top==-1){
        printf("Underflow");
    }
    else{
        printf("The popped item is %d .",stack[top]);
        top--;
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    pop();
    display();
    return 0;
}