#include <stdio.h>

#define KRED "\x1B[31m"
#define KNRM "\x1B[0m"

int main(){
	printf("%ssyntax %serror\n", KRED, KNRM);
}