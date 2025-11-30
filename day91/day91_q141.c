#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student{ char name[100]; int roll; int marks; };
int main(){ struct Student s; if(scanf("%s %d %d", s.name, &s.roll, &s.marks)!=3) return 0; printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks); return 0; }
