/*************************************************************************
	> File Name: e83.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月21日 星期六 16时51分39秒
 ************************************************************************/

#include<iostream>
using namespace std;
struct ListNode* deleteDuplicates(struct ListNode* head) {
        struct ListNode *temp=head,*next_1,*next_2;
    while(temp){
                next_1=temp;
        if(temp->next){
                        
                        next_2=temp->next;
            while(next_2){
                if(next_1->val==next_2->val){
                                        next_2=next_2->next;
                                    
                }
                                else break;
                            
            }
            if(next_2!=NULL){
                                next_1->next=next_2;
                            
            }
                        else next_1->next=NULL;
                    
        }
                temp=temp->next;
                
            
    }
        return head;

}
