/***********
author - Dheeraj Gundeti
***********/
#include<stdio.h>
void bubble_sort(int a[],int);
int main(){
	int i;
	int a[10]={5,6,1,8,3,4,7,9,2,10};
	bubble_sort(a,10);
	for(i=0;i<10;i++)printf("%d\n",a[i]);
	return 0;
}
void bubble_sort(int a[],int n){
	int i,j;
	for(i=0;i<n;i++)
	     for(j=n-1;j>i;j--)
		 if(a[j-1]>=a[j]){
			a[j-1]=a[j-1]+a[j];
			a[j]=a[j-1]-a[j];	
			a[j-1]=a[j-1]-a[j];
			}
}
		
