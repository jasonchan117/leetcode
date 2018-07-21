/*************************************************************************
	> File Name: e234.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月21日 星期六 17时00分05秒
 ************************************************************************/

#include<iostream>
using namespace std;
struct ListNode* reverseList(struct ListNode* head) {
        struct ListNode fic={0};
        struct ListNode *rev=&fic;
        fic.next=NULL;
        struct ListNode *temp=head;
    while(temp){
        if(rev==NULL){
                        rev->next=temp;
                    
        }else{
                        struct ListNode *n_node=rev->next;
                        rev->next=temp;
                        struct ListNode *t_node=temp->next;
                        temp->next=n_node;
                        temp=t_node;
                    
        }
            
    }
        return fic.next;

}

bool isPalindrome(struct ListNode* head) {
        if(head==NULL) return 1;
        struct ListNode *temp=head;
        int len=0;
    while(temp){
                temp=temp->next;
                len++;
            
    }
        if(len==1) return 1;
        temp=head;
        int side=len/2;
        side--;
    while(side--){
                temp=temp->next;     
            
    }   
        struct ListNode *co;
        if(len%2==0) co=temp->next;
        else co=(temp->next)->next;
        temp->next=NULL;
        struct ListNode *rev=reverseList(head);
        int flag=0;
    while(rev&&co){
                if(rev->val!=co->val) return 0;
                rev=rev->next;
                co=co->next;
            
    }
        return 1;

}

















