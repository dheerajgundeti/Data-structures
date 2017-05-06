 //hackerrank/datastructures/stacks
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,i; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        char* s = (char *)malloc(10240 * sizeof(char));
        scanf("%s",s);
        int top=-1;
        char c[1000];
        
        for(int i=0;s[i]!='\0';i++){
            switch(s[i]){
                case '(':
                case '{':
                case '[':top++;c[top]=s[i];break;
                case ')':if(c[top]=='(')top--;break;
                case '}':if(c[top]=='{')top--;break;
                case ']':if(c[top]=='[')top--;break;
            }
        }
        if(top==-1)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

