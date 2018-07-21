/*************************************************************************
	> File Name: e24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月21日 星期六 16时50分14秒
 ************************************************************************/

#include<iostream>
using namespace std;
struct ListNode* swapPairs(struct ListNode* head) {
        int flag=0;
        struct ListNode *temp=head,*next_1,*next_2,*n_node,*last;
    while(temp){
                next_1=temp;
                if(next_1->next==NULL) break;
        if(temp->next) {
                        next_2=temp->next;
            if(next_2->next){
                                
                                n_node=next_2->next;
                                next_1->next=n_node;
                                            
                            
            }
            else{
                                n_node=NULL;  
                                next_1->next=n_node;
                            
            }

                        next_2->next=next_1;
                        if(flag==1) last->next=next_2;
            if(flag==0){
                                head=next_2;
                                flag=1;
                                            
                            
            }
                        
                    
        }
                else next_2=NULL;
                temp=n_node;
                last=next_1;
            
    }
        return head;


}


