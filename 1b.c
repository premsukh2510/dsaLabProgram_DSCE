#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 15
char in[size];
int j=0,top=-1;
char post[size],stack[size];

int IPV(char c){
    if(c=='(') return 9;
    if(c==')') return 0;
    if(c=='+'|| c=='-') return 1;
    if(c=='*'|| c=='/') return 3;
    return 7;
}
int SPV(char c){
    if(c=='(') return 0;
    if(c=='#') return -1;
    if(c=='+'|| c=='-') return 2;
    if(c=='*'|| c=='/') return 4;
    return 8;
}
int pop(){
    return stack[top--];
}
int main()
{
    int j=0;
    gets(in);

    stack[++top]='#';
    for(int i=0;i<strlen(in);i++){
        while(IPV(in[i])<SPV(stack[top])){
            post[j++]=pop();
        }
        if(IPV(in[i])>SPV(stack[top])){
            stack[++top]=in[i];
        }
        else{
            char pp=pop();
        }
        
    }
    while(stack[top]!='#'){
        post[j++]=pop();
        post[j]='\0';
    }
    puts(post);
    return 0;
}