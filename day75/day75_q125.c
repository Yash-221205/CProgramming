#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char fname[200]; char line[1000]; if(!fgets(fname,200,stdin)) return 0; if(fname[strlen(fname)-1]=='\n') fname[strlen(fname)-1]=0;
    if(!fgets(line,1000,stdin)) return 0; FILE *f=fopen(fname,"a"); if(!f) return 0; fprintf(f,"%s",line); fclose(f); printf("File updated successfully with appended text.\n"); return 0;
}
