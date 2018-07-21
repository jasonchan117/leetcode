/*************************************************************************
	> File Name: e237.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月21日 星期六 17时01分45秒
 ************************************************************************/

#include<iostream>
using namespace std;
void deleteNode(struct ListNode* node) {
        struct ListNode *temp=node;
        int len=0;
    while(temp){
                temp=temp->next;
                len++;
            
    }
        int count=1;
    while(count<=len-1){

                if(node->next) node->val=(node->next)->val;
        if(count==len-1){
                        
                        node->next=NULL;
                        break;
                    
        }
                node= node->next;
                count++;
            
    }

}
