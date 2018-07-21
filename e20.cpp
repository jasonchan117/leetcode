/*************************************************************************
	> File Name: e20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月21日 星期六 09时28分47秒
 ************************************************************************/

#include<stdlib.h>
#include<string.h>
#include<stdio.h>
typedef struct Stack{
        int size;
        int top;
        char *data;

}stack;
stack *init(int n){

        stack *s=(stack *)malloc(sizeof(stack));
        s->size=n;
        s->data=(char *)malloc(sizeof(char)*n*2);
        s->top=-1;
        return s;

}
int push(stack *n,char i_data){
        if(n->top==n-1) return 0; 
        ++n->top;
        n->data[n->top]=i_data;
        return 1;

}
char read_n(stack *s){
        return s->data[s->top];

}
char pop(stack *n){
        if(n->top==-1) return 0;
        char temp=n->data[n->top];
        --n->top;
        return temp;

}
void clear(stack *s){
        free(s->data);
        free(s);

}
char reverse(char s){
        if(s=='(') return ')';
    else if(s=='{') return '}';
    else return ']';
}
bool isValid(char* s) {
    stack *st=init(strlen(s)+1);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[') push(st,s[i]){
            else{
                if(st->top==-1) return 0;
                if(reverse(read_n(st))==s[i]) pop(st);
                else return 0;                                                 
            }
        }
                                                 
        if(st->top==-1) return 1;
        else return 0;
                                                     
    }
}

