/*************************************************************************
	> File Name: e141.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月21日 星期六 16时53分21秒
 ************************************************************************/

#include<iostream>
using namespace std;
bool hasCycle(struct ListNode *head) {
        int flag=0;
        struct ListNode temp;
        temp.next=head;
        temp.val=0;
        int re1=1,re2=1,re22=1;
        struct ListNode *run1=&temp,*run2=&temp;
    while(run1&&run2){
                run1=run1->next;
                run2=run2->next;
                if(run2) run2=run2->next;
                else return 0;
                if(run1==run2&&run1!=NULL) return 1;
            
    }
        return 0;

}
