#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    FILE *f=fopen("students.txt","w"); if(!f) return 0;
    fprintf(f,"Asha 101 85\nRavi 102 92\n"); fclose(f);
    f=fopen("students.txt","r"); if(!f) return 0; char name[100]; int roll, marks;
    while(fscanf(f,"%s %d %d",name,&roll,&marks)==3) printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    fclose(f); return 0;
}
