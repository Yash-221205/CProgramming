#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int n; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]);
    long max_ending=a[0], max_so=a[0];
    for(int i=1;i<n;i++){ if(max_ending<0) max_ending=a[i]; else max_ending+=a[i]; if(max_ending>max_so) max_so=max_ending; }
    printf("%ld\n",max_so);
    free(a); return 0;
}
