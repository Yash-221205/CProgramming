#include <stdio.h>
#include <stdlib.h>
#include <string.h>


enum Op{ADD,SUBTRACT,MULTIPLY}; int main(){ int op,a,b; if(scanf("%d %d %d",&op,&a,&b)!=3) return 0; switch(op){ case ADD: printf("%d\n",a+b); break; case SUBTRACT: printf("%d\n",a-b); break; case MULTIPLY: printf("%d\n",a*b); break; default: printf("Invalid\n"); } return 0; }
