#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
typedef struct node NODE;
NODE *first=NULL;
NODE *second=NULL;
NODE *res=NULL;


NODE *newnode(int data){
    NODE* new_node=(NODE*)malloc(sizeof(NODE));
    new_node->data=data;
    new_node->link=NULL;
    return new_node;
}
void Insfront(NODE **p,int data){
    NODE* temp1=newnode(data);
    temp1->link=*p;
    *p=temp1;
}
void printlist(NODE *print){
    int arr[50];
    int i=0;
    while(print!=NULL){
        arr[i]=print->data;
        print=print->link;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d ",arr[j]);
    }
    printf("\n");
}

void addTwoList(NODE *first,NODE *second){
    int carry=0;

    while(first!=NULL && second!=NULL){
        int sum=first->data+second->data+carry;
        carry=sum/10;
        sum=sum%10;
        Insfront(&res,sum);
        first=first->link;
        second=second->link;
    }
    while(first!=NULL){
        int sum=first->data+carry;
        carry=sum/10;
        sum=sum%10;
        Insfront(&res,sum);
        first=first->link;
    }
    while(second!=NULL){
        int sum=second->data+carry;
        carry=sum/10;
        sum=sum%10;
        Insfront(&res,sum);
        second=second->link;
    }
    if(carry>0){
        Insfront(&res,carry);
    }
}
void printresult(NODE *resultant){
    while(resultant!=NULL){
        printf("%d",resultant->data);
        resultant=resultant->link;
    }
}
int main(){
    char a[50],b[50];
    scanf("%s",a);
    scanf("%s",b);
    int i=0;
    while(a[i]!='\0'){
        int tt=a[i]-'0';
        Insfront(&first,tt);
        i++;
    }
    i=0;
    while(b[i]!='\0'){
        int tt=b[i]-48;
        Insfront(&second,tt);
        i++;
    }
    printlist(first);
    printlist(second);
    addTwoList(first,second);
    printresult(res);

}