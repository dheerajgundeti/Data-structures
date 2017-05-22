/***********
author - Dheeraj Gundeti
***********/
#include<stdio.h>
#include  "stack.h"
int operator(char ch)
{
   switch(ch)
   {
    case '*':
    case '/':
    case  '+':
    case  '-':
     		return(1);
		break;
    default:
		return(0);
   }
}
int main(){ 
	int a,b,res,i;
	char post[20];
	printf("enter postfix=");
	scanf("%s",post);
	for(i=0;post[i]!='\0';i++){
		if(operator(post[i]))
		     {
                 	a=pop();
			b=pop();
			switch(post[i]){
				case '*':res=a*b;
					 push(res);
					 break;
				case '/':res=a/b;
					 push(res);
					 break;
				case '+':res=a+b;
					 push(res);
					 break;
				case '-':res=a-b;
					 push(res);
					 break;
				}
			}
		else
                   push(post[i]-'0');
		}
	
	res=pop();
	printf("result = %d",res);
	return 0;
}
