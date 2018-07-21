/*************************************************************************
	> File Name: e225.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月21日 星期六 16时42分05秒
 ************************************************************************/

#include<stdlib.h>
typedef struct {
        int size;
        int *data;
        int top;

} MyStack;
MyStack* myStackCreate(int maxSize) {
        MyStack *s=(MyStack *)malloc(sizeof(MyStack));
        s->data=(int *)malloc(sizeof(int)*maxSize);
        s->top=-1;
        s->size=maxSize;
        return s;

}
void myStackPush(MyStack* obj, int x) {
        obj->top++;
        obj->data[obj->top]=x;

}
int myStackPop(MyStack* obj) {
        int temp=obj->data[obj->top];
        obj->top--;
        return temp;

}
int myStackTop(MyStack* obj) {
        return obj->data[obj->top];

}
bool myStackEmpty(MyStack* obj) {
        if(obj->top==-1) return 1;
        else return 0;

}
void myStackFree(MyStack* obj) {
        free(obj->data);
        free(obj);

}
