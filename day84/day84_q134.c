#include <stdio.h>
#include <stdlib.h>
#include <string.h>


enum Status{SUCCESS, FAILURE, TIMEOUT}; int main(){ enum Status s=FAILURE; if(s==SUCCESS) printf("Operation successful\n"); else if(s==FAILURE) printf("Operation failed\n"); else printf("Operation timed out\n"); return 0; }
