#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0; int a[100000]; for(int i=0;i<n;i++) scanf("%d",&a[i]); int target; scanf("%d",&target);
    int l=0,r=n-1,first=-1,last=-1;
    while(l<=r){ int mid=(l+r)/2; if(a[mid]>=target){ if(a[mid]==target) first=mid; r=mid-1; } else l=mid+1; }
    l=0; r=n-1; while(l<=r){ int mid=(l+r)/2; if(a[mid]<=target){ if(a[mid]==target) last=mid; l=mid+1; } else r=mid-1; }
    if(first==-1) printf("-1 -1\n"); else printf("%d %d\n",first,last);
return 0;
}