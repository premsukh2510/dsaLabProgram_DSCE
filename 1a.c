#include<stdio.h>
#include<stdlib.h>
#define max_size 50
int top=-1;
int a[max_size];


void insert(){
    if(top==max_size-1){
        printf("Stack is overflow\n");
        return;
    }
    int temp;
    printf("Enter the element to insert\n");
    scanf("%d",&temp);
    a[++top]=temp;
}

void delete(){
    if(top==-1){
        printf("Stack is empty\n");
        return;
    }
    top--;
}

void display(){
    int temp=top;
    printf("Stack is:\n");
    for(int i=0;i<=temp;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int test;
    while(1){
        printf("\n1:Insert 2:Delete 3:Display 4:Exit\n");
        scanf("%d",&test);
        switch (test)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        
        default:
            exit(0);
        }
    }
}
