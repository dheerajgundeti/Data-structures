/***********
author - Dheeraj Gundeti
***********/
#include<stdio.h>
void selection_sort(int a[]);
int main(){
	int i;
	int a[10]={5,6,1,8,3,4,7,9,2,10};
	selection_sort(a);
	for(i=0;i<10;i++)printf("%d\n",a[i]);
	return 0;
}
void selection_sort(int a[],int n){
	int i,j;
	for(i=0;i<n;i++)
	     for(j=i+1;j<n;j++)
		 if(a[i]>=a[j]){
			a[i]=a[i]+a[j];
			a[j]=a[i]-a[j];	
			a[i]=a[i]-a[j];
			}
}
		
