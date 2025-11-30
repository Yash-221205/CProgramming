#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student{ char name[100]; int roll; int marks; };
void printStudent(struct Student s){ printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks); }
int main(){ struct Student s; scanf("%s %d %d", s.name, &s.roll, &s.marks); printStudent(s); return 0; }
