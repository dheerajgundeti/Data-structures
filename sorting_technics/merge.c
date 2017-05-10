/***********
author - Dheeraj Gundeti
***********/
#include<stdio.h>
void set(int a[],int left,int mid,int right);
void merge_sort(int a[],int left,int right);
int main(){
	int i;
	int a[6]={5,6,11,9,3,1};
	merge_sort(a,0,5);
	for(i=0;i<6;i++)printf("%d\n",a[i]);
	return 0;
}
void merge_sort(int a[],int left,int right){
	int mid=(left+right)/2;	
	if(left<right){
		merge_sort(a,left,mid);
		merge_sort(a,mid+1,right);
		set(a,left,mid,right);
	}
}		
void set(int a[],int left,int mid,int right){
	int i=left,j=mid+1,k=0,b[right-left];
	while(i<=mid && j<=right){
		if(a[i]<a[j]) b[k]=a[i],i++,k++;
		else b[k]=a[j],j++,k++;
		}
	while(i<=mid)b[k]=a[i],k++,i++;
	while(j<=right)b[k]=a[j],j++,k++;
	k=0;
	for(i=left;i<=right;i++)
		a[i]=b[k],k++;
}
