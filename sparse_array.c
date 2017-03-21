//hackerrank/datastructures/arryas
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,q;
    scanf("%d",&n);
    char a[n][20];
    for(int i=0;i<n;i++)
         scanf("%s",a[i]);
    scanf("%d",&q);
    char w[q][20];
    for(int i=0;i<q;i++)
        scanf("%s",w[i]);
    for(int i=0;i<q;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(strcmp(w[i],a[j])==0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}

