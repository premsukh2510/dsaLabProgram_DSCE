#include<stdio.h>
#include<stdlib.h>

struct node{
    int val;
    struct node* next;
};
typedef struct node NODE;
NODE* root=NULL;
int c=0;

void display(){
    NODE *temp;
    if(root==NULL){
        printf("List is empty\n");
    }
    else{
        temp=root;
        while(temp!=NULL){
            printf("%d\t",temp->val);
            temp=temp->next;
        }
    }
}
void del_front(){
    NODE *temp;
    temp=root;
    if(temp==NULL){
        printf("List is empty\n");
    }
    else{
        printf("\nItem deleted is : %d\n",root->val);
        root=root->next;
        c--;
    }
}
void inspos(){
    int pos,ele;
    NODE *temp,*p;
    printf("Enter the position to insert\n");
    scanf("%d",&pos);
    printf("Enter the number to insert\n");
    scanf("%d",&ele);
    temp=(NODE*)malloc(sizeof(NODE));
    temp->val=ele;
    temp->next=NULL;
    c++;
    if(pos==0 || pos>c){
        printf("Invalid Position\n");
    }
    else if(pos==1){
        temp->next=root;
        printf("before root =%p && temp=%p\n",root,temp);
        root=temp;
        printf("before root =%p && temp=%p\n",root,temp);
        
    }
    else{
        p=root;
        for(int i=1;i<pos;i++){
            p=p->next;
        }
        // printf("p=%p\t\t p->next=%p",p,p->next);
        temp->next=p->next;
        p->next=temp;
        // printf("p-next=%p\t\t temp=%p",p->next,temp);
        
    }
}

int main(){
    int test;
    while(1){
        printf("\n1:inposition 2: delete front 3: display 4:exit\n");
        scanf("%d",&test);
        switch(test){
            case 1:
            inspos();
            break;
            case 2:
            del_front();
            break;
            case 3:
            display();
            break;
            default:
            exit(0);
        }
    }
    return 0;
}