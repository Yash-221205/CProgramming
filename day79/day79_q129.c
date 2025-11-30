#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    FILE *f=fopen("numbers.txt","r"); if(!f) return 0; long sum=0; int x; int cnt=0;
    while(fscanf(f,"%d",&x)==1){ sum+=x; cnt++; } if(cnt==0){ printf("Sum = 0\nAverage = 0.00\n"); fclose(f); return 0; }
    printf("Sum = %ld\nAverage = %.2f\n", sum, (double)sum/cnt); fclose(f); return 0;
}
