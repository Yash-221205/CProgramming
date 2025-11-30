#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char line[1000]; FILE *f=fopen("info.txt","r"); if(!f) return 0; while(fgets(line,1000,f)) printf("%s",line); fclose(f); return 0;
}
