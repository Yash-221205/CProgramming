#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Employee{ char name[100]; int id; int marks; };
int main(){ struct Employee e1={"Raj",11,90}; FILE *f=fopen("emp.bin","wb"); if(!f) return 0; fwrite(&e1,sizeof(e1),1,f); fclose(f);
    FILE *fr=fopen("emp.bin","rb"); if(!fr) return 0; struct Employee r; fread(&r,sizeof(r),1,fr); printf("Name: %s | ID: %d | Marks: %d\n", r.name, r.id, r.marks); fclose(fr); return 0;
}
