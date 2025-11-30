#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char fname[200]; if(!fgets(fname,200,stdin)) return 0; if(fname[strlen(fname)-1]=='\n') fname[strlen(fname)-1]=0;
    FILE *f=fopen(fname,"r"); if(!f){ printf("Error: File does not exist!\n"); return 0; } printf("File opened successfully.\n"); char line[1000]; while(fgets(line,1000,f)) printf("%s",line); fclose(f); return 0;
}
