#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

int main(int argc, char **argv){

	char str[20];
	if(argc < 2){
		char help[4] = "help";
		
		printf("Include input file. In case of help enter 'help', otherwise press ENTER: ");

		scanf("%19[^\n]%*c", str);
		if(strcmp(str,help) == 0){
			printf("Noob C-Compiler\n"
				"Execution:\n\n"
				"\t./main [input file]\n");
		}
	}

	else if (argc == 2){
		if(access(argv[1], F_OK ) != -1){
			char command[100] ;
			strcpy(command, "./a.out ");
			strcat(command, argv[1]);
			//system("bison -d parser2.y");
			//system("flex scanner.l");
			//system("cc parser2.tab.c lex.yy.c -lfl");
			system(command);		
		}
		else{
			printf("%s doesn't exist. \n Press ENTER to return to terminal.",argv[1]);
			scanf("%19[^\n]%*c",str);
		}
	}

	else{
		char help[4] = "help";
		
		printf("Too many arguments. In case of help enter 'help', otherwise press ENTER: ");

		scanf("%19[^\n]%*c", str);
		if(strcmp(str,help) == 0){
			printf("Noob C-Compiler\n"
				"Execution:\n\n"
				"\t./main [input file]\n");
		}
	}
}