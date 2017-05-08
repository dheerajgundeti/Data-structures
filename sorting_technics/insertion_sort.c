/***********
author - Dheeraj Gundeti
***********/
#include<stdio.h>
void insertion_sort(int a[]);
int main(){
	int i;
	int a[10]={5,6,1,8,3,4,7,9,2,10};
	insertion_sort(a);
	for(i=0;i<10;i++)printf("%d\n",a[i]);
	return 0;
}
void insertion_sort(int a[],int n){
	int i,j=-1;
	for(i=0;i<n;i++){
	     int index=0;
	     int ele=a[i];
	     for(j=i-1;j>=0;j--){
		 if(ele>a[j])break;
		 else a[j+1]=a[j];
		   }
	     a[j+1]=ele;
	  }
}
		
