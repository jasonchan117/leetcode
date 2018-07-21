/*************************************************************************
	> File Name: 203.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月21日 星期六 16时57分18秒
 ************************************************************************/

#include<iostream>
using namespace std;
struct ListNode* removeElements(struct ListNode* head, int val) {
        struct ListNode fic={0};
        fic.next=head;
        struct ListNode *temp=head;
        struct ListNode *last=&fic;
    while(temp){
                
        if(temp->val==val){
                        last->next=temp->next;
                    
        }
        else{
                        last=temp;
                    
        }
                temp=temp->next;
            
    }
        return fic.next;

}
