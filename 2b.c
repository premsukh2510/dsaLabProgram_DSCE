#include<stdio.h>
#include<stdlib.h>
#define size 5
int arr[size];
int f=0,r=-1;
int count=0;

void insert(){
    if(count==size){
        printf("Queue is overflow\n");
        return;
    }
    printf("Enter the number to insert\n");
    int temp;
    scanf("%d",&temp);
    arr[f]=temp;
    f=(f+1)%size;
    count++;
}
void delete(){
    if(count==0){
        printf("Stack is underflow\n");
        return;
    }
    r=(r+1)%size;
    count--;
}
void display(){
    int temp=count;
    int index=r+1;
    printf("Queue is:\n");
    for(int i=0;i<count;i++){
        printf("%d ",arr[index]);
        index++;
        index=index%size;
    }
    printf("\n");
}
int main(){
    
    while(1){
        int test;
        printf("1:Insert 2:Delete 3:Display 4:Exit\n");
        scanf("%d",&test);
        switch(test){
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