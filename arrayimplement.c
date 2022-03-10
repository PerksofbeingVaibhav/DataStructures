/*
push(); insertion of data element 
pop(); deletion of data element
isempty(); checks if stack is empty (underflow)
isfull(); checks if stack is full( overflow) 

what is stack?
a stack is an abstract data type in which the insertion and deletion of data elements
takes place from one end ,which is called the 'top', it follows the principle of 
last in first out (LIFO). 
    constant time O(1) for these operations.
*/

#include<stdio.h>
#define size 100
int A[size];
int top=-1;

void push(int x){
    if(top== size-1){
        printf("Error: stack overflow\n");
         return ;
    }
    A[++top]=x;
}
void pop(){
    if(top==-1){
        printf("Error: No element to pop\n");
        return ;
    }
    top--;
}
int Top(){
    return A[top];
}
void print(){
    int i;
    printf("Stack: ");
    for(i=0;i<=top;i++){
        printf("%d ",A[i]);
        printf("\n");
    }
}
    int main(){
        push(2); print();
        push(4); print();
        push(6); print();
        push(8); print();
        pop(); print();
        push(10); print();
        push(12); print();

    }