#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a[100000];
int top=-1;
int main(){
    int t,data,max=0,m;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int op;
        scanf("%d",&op);
        switch(op){
            case 1: scanf("%d",&data);
                    top++;
                    if(data>=max)max=data,m=top;
                    a[top]=data;
                    break;
            case 2:if(top!=-1){
                         top--;
                         max=0;
                         for(int i=0;i<=top;i++)
                            if(a[i]>=max)
                                 max=a[i],m=i;
                    }
                    break;
            case 3:printf("%d\n",max);
        }
    }
    return 0;
}


