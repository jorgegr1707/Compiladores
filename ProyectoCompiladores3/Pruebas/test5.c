

//**************************************
//INCLUDE files for :A Better Menu
//**************************************
//stdio,conio,stdlib
//**************************************
// Name: A Better Menu
// Description:This is my example of a quick and simple menu. This is a good method of simple menus, better then telling someone to enter 1 or 2 or 3 then hit enter to do this and that and i also think thats so boring. All you gotta do is just press the button it tells you then the operation will execute
// By: ryanpeppers (from psc cd)
//
//
// Inputs:None
//
// Returns:None
//
//Assumes:None
//
//Side Effects:None
//**************************************

#include <stdio.h> // for printf
#include <stdlib.h> //exit function
#include <string.h>
// i like using this method of menus better then telling someone to enter 1 or 2 or 3 to do this and that
// all you gotta do is just press the button it tells you then the operation will execute
//******function proto-types*****
void sayabout();
void function1();
void function2();
void function3();
void yesorno();
void main()


    {
    int key = 0; // this is the varible that the keycode will be stored in
    sayabout(); // call sayabout
    printf("Menu\n\r"); // displays the menu
    printf("1: call function 1\n\r");
    printf("2: call function 2\n\r");
    printf("3: call function 3\n\r");
    printf("ESC to exit.\n\r");
    do // does a loop while they ESC key is not pressed


        {
        // if any key other then 1 2 3 or ESC is pressed it will do nothing and just keep looping until one of those keys is pressed
        key = (int)getchar(); // keycode stored into key 
        // if 1 is pressed 
        if (key==49)


            {
            function1(); // call function1
            break; // stop the loop
        }
        else
        // if 2 is pressed
        if (key==50)


            {
            function2();
            break;
        }
        else
        // if 3 is pressed
        if (key==51)


            {
            function3();
            break;
        }
    } while (key != 27); // if ESC is pressed then stop the loop
    key = 0;
    printf("press any key to continue....\n\r");
    getchar();
}
// *****declaranation of functions****
void sayabout()


    {
    printf("This is my example of A Better Menu.\n\r");
    printf("This menu uses the getch function insted of the cin function.\n\r");
    printf("In my personal opinion this is better then using cin =]\n\r");
    printf("press any key to continue.......\n\r");
}
void function1()


    {
    printf("You've choosed option 1\n\r");
    yesorno(); // call yesorno function
}
void function2()


    {
    printf("You've choosed option 2\n\r");
    yesorno();
}
void function3()


    {
    printf("You've choosed option 3\n\r");
    yesorno();
}
void yesorno() // the function name says it all


    {
    int keyy = 0; // keycode stored in varible
    printf("Would you like to try again? (Y/N) \n\r");
    do


        {
        keyy = (int)getchar();
        // if y or Y is pressed then call the main function
        if (keyy == 98 || keyy == 121)
        main();
        else
        // if n or N is pressed then exit the program completely


            if (keyy == 110 || keyy == 78) {
            keyy = 0;
            exit(-1); // exit function ends the program completely ((love this function))
        }
    } while (1);
}



int file_copy(char *oldname, char *newname, long bytes1, long bytes2);
long get_bytes(float percent, char *source);
int copy_files()
{
    char source[80], destination[80];
    float percent1, percent2;
            
    /*Get the file names*/
    puts("Enter source file:");
    printf("\t");
    scanf("%s", source);
    puts("\nEnter destination file (WARNING: If the file exists, it will be OVERWRITTEN): "); 
    printf("\t");
    scanf("%s", destination);
    
    /*Get the positions in percentage*/
    puts("\nEnter start percentage (recommended: 0): ");
    printf("\t");
    scanf("%f", &percent1);
    do
    {
        puts("\nEnter end percentage:");
        printf("\t");
        scanf("%f", &percent2);
    } while ( percent2 < percent1 );


    if ( file_copy( source, destination, get_bytes(percent1, source), get_bytes(percent2, source) ) == 1 )
        puts("\nCopy operation SUCCESSFUL");
    else
        fprintf(stderr, "\nError during copy operation");

    fflush(stdin);
    puts("\nPress any key to exit . . . ");
    getchar();
    return(0);
}

/*Function for actual copying of file, return 1 on success, 0 otherwise*/
int file_copy( char *oldname, char *newname, long bytes1, long bytes2)
/*bytes1 denotes the start position in bytes, bytes2 denotes the end position*/
{
    FILE *fold, *fnew;
    int c;

    if ( ( fold = fopen( oldname, "rb" ) ) == NULL )
        return 0;

    if ( ( fnew = fopen( newname, "wb" ) ) == NULL  )
    {
        fclose ( fold );
        return 0;
    }
        
    /*Set file pointer to proper start location, as specified by user*/
    if ( ( fseek(fold, bytes1, SEEK_SET) != 0 ) )
    {
        fprintf(stderr, "\nError using fseek().");
        exit(1);
    }

    while (1)
    {
        c=fgetc(fold);

        /*Continue copying until end of file or until the requested limit has been reached*/
        if ( !feof( fold ) && ftell(fold) <= bytes2)
            fputc( c, fnew );
        else
            break;
    }

    fclose ( fnew );
    fclose ( fold );

    return 1;
}


/*This function finds how many bytes need to copied, calculating it from the percentage inputted by the user*/
long get_bytes(float percent, char *source)
{
    long bytes;
    FILE *fold;

    if (percent<=100)
    {
        if ( ( fold = fopen( source, "rb" ) ) == NULL )
        {
            puts("Error opening source file");
            exit(1);
        }
        if ( (fseek(fold, 0, SEEK_END))!=0)
        {
            fprintf(stderr, "\nError using fseek().");
            exit(1);
        }

        bytes=ftell(fold);
        bytes*=(percent/100);
    }
    else 
    {
        fprintf(stderr, "Error in input");
        exit(1);
    }

    fclose(fold);
    return bytes;
}

//**************************************
// Name: a Recursion : 8 Queens On a Chess Board
// Description:the program find a place to put queens on a chess board in any size ,using recursion.
// By: Alon Ben David (from psc cd)
//
// Side Effects:a great example of recursions .
//**************************************

/* this program made by alon ben david */
#define N 8
int Chess(char Arr[N][N] , int row);
int check(char Arr[N][N],int row,int line);
//double count;
int recursion_queen()
{
char chess[N][N]={0};
    
Chess(chess,0);/* The call to the function*/
{
int i,y;
        
for(i=0;i<N;++i)/*prints the result*/
{
printf("\n\t\t\t");
for(y=0;y<N;++y)
{
if(chess[i][y]==0)
printf("x ");
else
printf("%c ",chess[i][y]);  
}
}
}
printf("\n");
}
int Chess(char Arr[N][N] , int row)
{
int line=0;
    
//printf("%f\n",count++);
if(row==N)
return 1;
        
while(line < N)
{
if(check(Arr,row,line)) /*check the row*/
{
Arr[row][line]='Q'; /*puts a queen on the board*/
if(Chess(Arr,row+1))/*the recursion*/
return 1;
Arr[row][line]=0;/*clears the last change if*/
}/*returned 0 from the recursion*/
line++;
}
return 0;
}
int check(char Arr[N][N],int row,int line)
{/*check just the left size of the board*/
int r,l;
    
r=row;
l=line;
while(r >= 0 && l >= 0)
{
if(Arr[r][l]=='Q')
return 0;
--r;
--l;
}
    
l=line;
r=row;
while(l < N && r >= 0)
{
if(Arr[r][l]=='Q')
return 0;
++l;
--r;
}
    
l=line;
r=row;
while(r >= 0)
{
if(Arr[r][l]=='Q')
return 0;
--r;    
}
return 1;
}

//**************************************
// Name: A Simple Count String
// Description:Aims to count how many words in the infile
// By: Raymond Li (from psc cd)
//**************************************

/*****************************************/
/* Program Name : A Simple Count String */
/* Description : Aims to count how many */
/*words in the infile*/
/* Programmer: Raymond Li    */
/*****************************************/
#define MAX_LENGTH 256
int count_string(int argc, char *argv[])
{
 char inword[MAX_LENGTH];
 int word_count = 0;
 FILE *infile;
 if (argc < 2)
 {
 printf("Format : wordcnt <filename>\n");
 exit( 1 );
 }
 /* open the infile */
 if ((infile = fopen( argv[1], "rt" )) == NULL)
 {
 printf("Cannot open input file - %s\n", argv[1] );
 exit( 1 );
 }
 /* read the string and count it while not end of file */
 while( !feof(infile) )
 {
 fscanf( infile, "%s", inword );
 word_count++;
 }
 
 /* print the result */
 printf( "There are %d word(s) in the file %s\n", word_count, argv[1] );
 /* close the infile */
 fclose(infile);
 return(0);
}

//**************************************
// Name: A simple strings sorting
// Description:This code will make you understand simple by accepting 4 strings and sorting it through Bubble sort i trust this u help for C and C++ Beginner.
// By: Tahseen (from psc cd)
//
//
// Inputs:Ask to enter 4 strings
//
// Returns:returns sorting strings
//
//Assumes:User should be aware of Arrays, boolean,for loops.
//
//Side Effects:Not much its only like beginiing of C and C++ Programer
//**************************************

#define ELEMENT 4
#define LENGTH 20
void getdata(char str[ELEMENT][LENGTH]);
void show(char str[ELEMENT][LENGTH]);
void sort(char str[ELEMENT][LENGTH]);
void sort_string()


    {
    char str[ELEMENT][LENGTH];
    printf("Find the sortin of string\n");
    getdata(str);
    sort(str);
    show(str);
}
void getdata(char str[ELEMENT][LENGTH])


    {
    int loop;
    for(loop=0;loop<ELEMENT;loop++)


        {
            scanf("%s",str[loop]);
    }
}
void sort(char str[ELEMENT][LENGTH])


    {
    char temp[LENGTH];
    int loop;
    int flag;
    do


        {
        flag=0;
        for(loop=0;loop<ELEMENT;loop++)


            {
                if(strcmp(str[loop],str[loop+1])>0)


                {
                    flag=0;
                strcpy(temp,str[loop]);
                strcpy(str[loop],str[loop+1]);
                strcpy(str[loop+1],temp);
                flag=0;
            }
        }
    }while(flag!=0);
}
void show(char str[ELEMENT][LENGTH])


    {
    int loop;
    printf("\n");
    for(loop=0;loop<ELEMENT;loop++)


        {
            printf("%s\n", str[loop]);
    }
}

//**************************************
/* Name: Absolute Recursive factorial function
// Description:Recursive factorial function a recursive function is a function that will call itself
it is probably the most difficult type of function designing
but when you get use to it, you'll find it VERY USEFULL the c++ version of this function is also available write here.
// By: Arjang (from psc cd)
//**************************************
*/
/* Recursive factorial function programmed by Arjang
For more info email me arjang7@hotmail.com
a recursive function is a function that will call itself
it is probably the most difficult type of function designing
but when you get use to it, you'll find it VERY USEFULL 
the c++ version of this function is also available write here.
*/
//declaring function
int factorial(int);
void recursive_factorial(void)
{
    int number, result;
    printf("Please Enter A number to get it's factorial: ");
    //getting our target number
    scanf("%d", &number);
    //calling the function
    result = factorial(number + 1);
    //printing out results
    printf("\nThe factorial is : %d", result);
    printf("\n\n\n\n\n\n");
}
int factorial(int victim)
{
    
    if(victim>1)
    {
        victim = victim - 1;
        /*this is the whole point where you actually call the same function
        which you are into, it is called a recursive function. */
        victim = victim * factorial(victim);
    }
    return victim;
}