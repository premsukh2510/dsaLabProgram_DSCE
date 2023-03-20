#include<stdio.h>
#include<stdlib.h>
#define size 50
int arr[size],p,c;


void display(){
    for(int i=0;i<size;i++){
        if(arr[i]!='\0'){
        printf("arr[%d]=%d",i,arr[i]);
        printf("\n");
        }
    }
}
void bst(int data){
    if(arr[0]=='\0'){
        arr[0]=data;
        return;
    }
    int p=-1,c=0;
    while(arr[c]!='\0'){
        p=c;
        if(arr[p]<data){
            c=c*2+2;
        }
        else{
            c=2*c+1;
        }
    }
    arr[c]=data;
}
int main(){
    for(int i=0;i<size;i++){
        arr[i]='\0';
    }
    while(1){
        int test;
        printf("\n1: Display 2:BST Insertion\n");
        scanf("%d",&test);
        int n,ele;
        switch(test){
            case 1:
            display();
            break;
            case 2:
            printf("Enter the number of elements\n");
            scanf("%d",&n);
            printf("Enter the elements\n");
            for(int i=0;i<n;i++){
                scanf("%d",&ele);
                bst(ele);
            }
        }
    }
}