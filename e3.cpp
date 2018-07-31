#include<stdio.h>
#include<string.h>

int is_dup(int n,char *s,int *mark){
	n+=1;
	memset(mark, 0, sizeof(int)*128);
	int l=0,r=0;
	int flag=0;
	int len=strlen(s);
	while(r<len){
		while(mark[s[r]]&&l<=r){
			mark[s[l]]=0;
			l++;
		}
		if(r-l==n-1) return 1;
		mark[s[r]]=1;
		r++;
	}
	    return 0;
}
int bin(int n,int *mark,char *s){
	int l=-1,r=n-1,mid;
	while(l<r){
		mid=l+((r-l+1)>>1);
		if(is_dup(mid,s,mark)) {							            
			l=mid;
		}
		else r=mid-1;
	}
	return l+1;
}
int lengthOfLongestSubstring(char* s) {
	int mark[128]={0};
	int len=strlen(s);
	return bin(len,mark,s);
}


