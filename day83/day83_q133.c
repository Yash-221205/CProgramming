#include <stdio.h>
#include <stdlib.h>
#include <string.h>


enum Month{JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC}; int main(){ enum Month m=FEB; if(m==FEB) printf("28 or 29 days\n"); return 0; }
