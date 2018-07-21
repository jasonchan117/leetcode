/*************************************************************************
	> File Name: e19.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月21日 星期六 16时47分41秒
 ************************************************************************/

#include<iostream>
using namespace std;
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
        struct ListNode list={0};
        list.next=head;
        struct ListNode *rev=&list;
        struct ListNode *temp=head;
        struct ListNode *res=&list;
        int len=0;
    while(temp){
                temp=temp->next;
                len++;
            
    }
        len=(len-n);
    while(len--){
                rev=rev->next;
            
    }
        rev->next=(rev->next)->next;
        return res->next;

}
