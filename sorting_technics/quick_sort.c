/***********
author - Dheeraj Gundeti
***********/
#include<stdio.h>
void quick_sort(int a[],int left,int right);
int main(){
	int i;
	int a[3]={5,6,11};
	quick_sort(a,0,2);
	for(i=0;i<3;i++)printf("%d\n",a[i]);
	return 0;
}
void quick_sort(int a[],int left,int right){
	if(left<right){
	int i=left,j=right,temp;
	while(j>=i){		
		while(a[left]>=a[i] && i<right)i++;
		while(a[left]<a[j] && j>left)j--;
		if(i<j){
		    a[i]=a[i]+a[j];
		    a[j]=a[i]-a[j];
		    a[i]=a[i]-a[j];
		  }
	   }
	temp=a[left];
	a[left]=a[j];
        a[j]=temp;
	quick_sort(a,left,j-1);
	quick_sort(a,j+1,right);
	}
}		

