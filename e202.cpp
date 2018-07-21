/*************************************************************************
	> File Name: e202.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月21日 星期六 16时56分16秒
 ************************************************************************/

#include<iostream>
using namespace std;
int get_sum(int n){
        int sum=0;
    while(n){
                sum+=((n%10)*(n%10));
                n/=10;
            
    }
        return sum;

}
bool isHappy(int n) {
        int a=get_sum(n);
        int b=get_sum(a);
    while(a!=b){
                if(b==1||a==1) return 1;
                a=get_sum(a);
                b=get_sum(b);
                b=get_sum(b);
            
    }
        if(a==1&&b==1) return 1;
        return 0;

}
