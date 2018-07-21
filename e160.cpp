/*************************************************************************
	> File Name: e160.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月21日 星期六 16时54分35秒
 ************************************************************************/

#include<iostream>
using namespace std;
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
        struct ListNode tempA={0};
        struct ListNode tempB={0};
        tempA.next=headA;
        tempB.next=headB;
        int lenA=0;
        int lenB=0;
        struct ListNode *teA=&tempA;
        struct ListNode *teB=&tempB;
        
    while(teA){
                teA=teA->next;
                lenA++;
            
    }
    while(teB){
                teB=teB->next;
                lenB++;
            
    }
        teA=&tempA;
        teB=&tempB;
    if(lenA>lenB){
                int diff=lenA-lenB;
        while(diff--){
                        teA=teA->next;
                    
        }
                if(teA==teB) return teA;
        while(teA){
                        teA=teA->next;
                        teB=teB->next;
                        if(teA==teB) return teA;                                                                
                    
        }
            
    }
    else if(lenB>=lenA){
                int diff=lenB-lenA;
        while(diff--){
                        teB=teB->next;
                    
        }
                if(teA==teB) return teA;
        while(teA){
                        teA=teA->next;
                        teB=teB->next;
                        if(teA==teB) return teA;
                    
        }
            
    }
    return teA;

}




