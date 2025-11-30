#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char name[200]; int age; if(!fgets(name,200,stdin)) return 0; if(name[strlen(name)-1]=='\n') name[strlen(name)-1]=0; if(scanf("%d",&age)!=1) return 0;
    FILE *f=fopen("info.txt","w"); if(!f) return 0; fprintf(f,"Name: %s Age: %d\n",name,age); fclose(f); printf("File created successfully! Data written to info.txt\n"); return 0;
}
