#include<stdio.h>
#include<stdlib.h>
#define sz 50

int arr[sz];
int r=-1,f=0;

void insert(){
    if(f==sz-1){
        printf("Queue overflow\n");
        return;
    }
    int temp;
    printf("Enter the number the insert\n");
    scanf("%d",&temp);
    arr[f++]=temp;
}

void delete(){
    if(r+1>=f){
        printf("Queue is empty\n");
        return;
    }
    r++;
    
}
void display(){
    printf("Queue is:\n");
    for(int i=r+1;i<f;i++){
        printf("%d ",arr[i]);
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
