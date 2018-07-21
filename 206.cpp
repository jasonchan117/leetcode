/*************************************************************************
	> File Name: 206.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月21日 星期六 16时58分39秒
 ************************************************************************/

#include<iostream>
using namespace std;
struct ListNode* rev(struct ListNode *head,struct ListNode *nn,int flag){
        
        if(nn==NULL) return head;
    if(flag==0){
                if(head==NULL) return NULL;
                head->next=NULL;
            
    }
        struct ListNode *p=nn->next;
        nn->next=head;
        return rev(nn,p,1);

}
struct ListNode* reverseList(struct ListNode* head) {
        struct ListNode *nn=NULL;
        if(head) nn=head->next;
        struct ListNode *he=rev(head,nn,0);
        return he;

}
