#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int m,n; if(scanf("%d %d",&m,&n)!=2) return 0; int *a=malloc(m*sizeof(int)); int *b=malloc(n*sizeof(int));
    for(int i=0;i<m;i++) scanf("%d",&a[i]); for(int j=0;j<n;j++) scanf("%d",&b[j]);
    int i=0,j=0,first=1;
    while(i<m && j<n){ if(a[i]<=b[j]){ if(!first) printf(" "); printf("%d",a[i++]); } else{ if(!first) printf(" "); printf("%d",b[j++]); } first=0; }
    while(i<m){ if(!first) printf(" "); printf("%d",a[i++]); first=0; } while(j<n){ if(!first) printf(" "); printf("%d",b[j++]); first=0; }
    printf("\n"); free(a); free(b); return 0;
}
