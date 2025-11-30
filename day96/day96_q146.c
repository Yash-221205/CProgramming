#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Date{ int d,m,y; };
struct Employee{ char name[100]; int id; struct Date joining; };
int main(){ struct Employee e; scanf("%s %d %d %d %d", e.name, &e.id, &e.joining.d, &e.joining.m, &e.joining.y); printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", e.name, e.id, e.joining.d, e.joining.m, e.joining.y); return 0; }
