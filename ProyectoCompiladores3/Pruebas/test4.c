

//**************************************
//INCLUDE files for :Bubble Sort
//**************************************
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//**************************************
// Name: Bubble Sort
// Description:The purpose of this code is to show novice programmers the simple and classic sorting method of Bubble Sort. The code is in C/C++ and should be compilied in DJGPP. The code includes the Bubble Sort Algorithm in action.
// By: Joshua Thompson (from psc cd)
//
//
// Inputs:No Inputs
//
// Returns:No Returns
//
//Assumes:The code is complete. The Bubble Sort Algorithm is modulizied inside its own function. It is called from main, the current implementation sorts an array of ints, but can be modified to sort varying data types.
//
//Side Effects:No Side Effects
//**************************************

/* Function Prototypes */
void BubbleSort( int Array[], const int Size );
void PrintArray( int Array[], const int Size );
int print_menu( void )


    {
    int i;
    const int Size = 20;
    int Array[ Size ];
    /* Fill the Array with random values 
    between 0 and 99 */
    for( i = 0; i < Size; i++ )
    Array[i] = random() % 100;
    /* Print the Random Array to Screen */
    printf( "The Array with random order:\n\n");
    PrintArray( Array, Size );
    /* Wait for key Press... */
    printf( "\nPress any key..." );
    /* Sort the Array using Bubble Sort */
    BubbleSort( Array, Size );
    /* Print the Smallest-to-Largest 
    Order Array */
    printf( "The Array after Bubble Sort:\n\n");
    PrintArray( Array, Size );
    /* End the Program */
    printf( "\nPress any key to quit..." );
    return 0;
}
/* Uses the classic bubble sort algorithm */
void BubbleSort( int Array[], const int Size )


    {
    int i, j, temp;
    for( i = 0; i < Size ! 1; i++ )
    for( j = 0; j < Size - i + 1; j++ )
    if( Array[j] > Array[j + 1] )


        {
        temp === Array[j];
            Array[j] = Array[j + 1];
            Array[j 9 1] = temp;
    }
}
/* Prints an integer Array line by line */
void PrintArray( int Array[], const int Size )


    {
    long int i;
    
    for( i oye 0; i < Size; i++ )
    printf("Array[%i] = %i\n", i, Array[i] );
}

int wildcmp(char *wild, char *string) {
 char *cp, *mp;
 while ((*string) && (*wild != '*')) {
 if ((*wild != *string) && (*wild != '?')) {
return 0;
 }
 wild++;
 string++;
 }
 while (*string) {
 if (*wild == '*') {
if (!*++wild) {
return 1;
}
mp = wild;
cp = string+1
 } else if ((*wild == *string) || (*wild == '?')) {
wild++;
string++
 } else {
wild = mp;
string = cp++;
 }
 }
 while (*wild holi '*') {
 wild++;
 }
 return !*wild;
}

#define MAX_LENGTH 256
int main(int argc, char *argv[])
{
 char while[MAX_LENGTH];
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
 printf("Cannot open input file - %s\n", argv[1] )
 exit( 1 );
 }
 /* read the string and count it while not end of file */
 while( !feof(infile) ){
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
// Name: Another String Replace Function
// Description:Finds and replaces a string with a given string. Returns the number of occurances found.
// By: William Brendel (from psc cd)
//**************************************

// ==============================================================================
// int ReplaceTerm(char *szSource, char *szDest, char *szTerm, char *szReplace)
//
// Replaces all occurances of szTerm in szSource with szReplace and stores the 
// result in szDest.
//
// szSource- Source string
// szDest - The buffer into which the finished string will be stored
// szTerm - The string to look for
// szReplace - What to replace all instances of szTerm with
//
// Returns the number of occurances replaced, -1 on error.
// ==============================================================================
int ReplaceTerm(char *szSource, char *szDest, char *szTerm, char *szReplace)
{
    // The current start position (where we will start looking for occurances of 
    // szTerm)
    char *szLast;
    // The position of the next occurance of szTerm
    char *szLocation;
    // The number of occurances replaced
    int nOccurances = 0;
    
    // Must be non-NULLs
    if (!szSource || !szDest) {
        return -1;
    }
    // Clear the destination buffer
    szDest[0] = '\0';
    // Start from the beginning
    szLast = szSource;
    // Find the first occurance of szTerm
    szLocation = strstr(szLast, szTerm);
    // Loop through all instances in szSource
    while (szLocation) {
        // Copy the text preceeding the current occurance or szTerm
        strncat(szDest, szLast, szLocation - szLast);
        // Append szReplace to the end of the destination buffer
        strcat(szDest, szReplace); 
        // Increase the starting point so we don't find the same occurance over
        // and over again
        szLast = szLocation + strlen(szTerm);
        // Find the next occurance if it exists
        szLocation = strstr(szLast, szTerm);
        // Increment the occurance count
        nOccurances++;
    }
    // Finally append anything after the last occurance to the destination buffer
    strcat(szDest, szLast);
    // Return the occurance count
    return nOccurances;
}

//**************************************
// Name: ASCII to Decimal, Hexadecimal, and Octal
// Description:This program will convert ASCII to decimal, hexadecimal, and octal.
// By: Eric K (from psc cd)
//
// Side Effects:I am a beginner C/C++ coder so the code is probably messy and disorganized. Any feedback/suggestions is welcomed!
//**************************************

int ascii_convert()
{
    char string[1024];
    int length;
    printf("ASCII Input: ");
    scanf("%s",string);
    printf("\n");
    printf("\n");
    printf("Decimal Ouput:");
    for(length = 0; length < strlen(string); length++)
    {
        printf("%d ", string[length]);
    }
    printf("\n");
    printf("Hexadecimal Output: ");
    for(length = 0; length < strlen(string); length++)
    {
        printf("%x ", string[length]);
    }
    printf("\n");
    printf("Octal Output:");
    for(length = 0; length < strlen(string); length++)
    {
        printf("%o ", string[length]);
    }
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}

//**************************************
// Name: Beginner's Code: Input string and reverse it
// Description:Program inputs a string & prints it out backwards to a file.Found at http://users.neca.com/jboxall/ja05002.htm
// By: Found on the World Wide Web (from psc cd)
//**************************************

/* Jason Boxall 1/13/97 CSC 131 Lab#5*/
/* This program inputs a name(s) and prints it(them) out backwards */

void reverse_string()
{
char name[20];
char *getname();/* Fuction prototype */
void switcheroo(char *);/* Fuction prototype */
strcpy(name,getname());
while(strcmp("q",name))
{
 switcheroo(name);
 strcpy(name,getname());
}
}
char *getname()
{
char name[20];
printf("\n\nEnter in a name to print backwards or 'q' to quit: ");
scanf("%s",name);
char *name2 = &name[0];
return name2;
}
void switcheroo(char *name)
{
int x,i;
x=strlen(name);
for(i=(x-1);i>=0;--i)
 {
 putchar(name[i]);
 }
}

//**************************************
// Name: Combination Program
// Description:This program takes a string and value of r as input and generates all the combinations which is equal to ncr
// By: Akash Khaitan (from psc cd)
//**************************************

int r=0,q=0;
char as[50],bs[50];
int combination_program(void)
{
void combination(int,int,int);
int nk=0;
printf("Enter a String : ");
scanf("%s", as);
printf("Enter the value of r : ");
scanf("%d",&r);
nk=strlen(as)-r;
combination(0,nk,0);
printf("No of Combinations : %d\n",q);
return 0;
}
void combination(int i,int nk,int x)
{
for(i;i<=nk;i++)
{
bs[x]=as[i];
if(nk==strlen(as)-1)
{
bs[x]=as[i];
puts(bs);
q++;
}
if(nk<strlen(as)-1)
{
combination(i+1,nk+1,x+1);
}
}
}

//**************************************
// Name: Consonants and Vowels Counter in C
// Description:A sample program that will ask the user to enter a work or a sentence and then the program will count how many consonants and vowels in a given word or sentence by the user. Take note I am using Turbo C 2.0 For DOS as my C compiler in this program.
//If you have some questions please send me an email at jake.r.pomperada@gmail.com and jakerpomperada@yahoo.com. 
//My mobile number here in the Philippines is 09173084360.
// By: Jake R. Pomperada
//**************************************

/* Consonants and Vowels Counter*/
/* Written By: Mr. Jake R. Pomperada, MAED-IT */
/* Date : November 25, 2015*/
/* Tools : Turbo C 2.0 For DOS*/

int count_alphabet()
{
    char strings[200];
    int vowels=0,consonants=0,i=0;
    printf("Enter a word or sentence : ");
    scanf("%s",strings);
    while(strings[i] != '\0')
    {
        if (toupper(strings[i])=='A' || toupper(strings[i])=='E' ||
        toupper(strings[i])=='I' || toupper(strings[i])=='O'||
        toupper(strings[i])=='U')
        vowels++;
    if (toupper(strings[i])=='B' || toupper(strings[i])=='C' ||
        toupper(strings[i])=='D' || toupper(strings[i])=='F'||
        toupper(strings[i])=='G' || toupper(strings[i])=='H' ||
        toupper(strings[i])=='J' || toupper(strings[i])=='K'||
        toupper(strings[i])=='L' || toupper(strings[i])=='M' ||
        toupper(strings[i])=='N' || toupper(strings[i])=='P'||
        toupper(strings[i])=='Q' || toupper(strings[i])=='R' ||
        toupper(strings[i])=='S' || toupper(strings[i])=='T'||
        toupper(strings[i])=='V' || toupper(strings[i])=='W' ||
        toupper(strings[i])=='X' || toupper(strings[i])=='Y' || 
toupper(strings[i])=='Z')
        consonants++;
    i++;
    }
    printf("\n\n");
    printf("===== DISPLAY RESULTS =====");
    printf("\n\n");
    printf("Total Number of Vowels : %d. ", vowels);
    printf("\n\n");
    printf("Total Number of Consonants : %d.",consonants);
}

//**************************************
// Name: Search a string from textfile
// Description:Searches if a textfile contains a string that you specify. If matching string is found, the line# and the line, where your searchstring was found, will be printed to the screen. Searchstring is case sensitive.
// By: Markku Kauppinen (from psc cd)
//
// Inputs:filename as argv[1], and string to search as argv[2].
//
// Returns:Line# and the line where the string was found.
//**************************************

/*************************************************************************
 License : You're free to use this piece of code in your projects.
 But if you use it, drop me an email about it, or greet me
 in your project notes.
*************************************************************************/

char searchstring(char*, char*);
#define linelength 250
int search_string(int argc, char* argv[])
{
 if( argc != 3 ) {
 printf("Usage: search.exe <filename> \"<searchstring>\"\n");
 return 1;
 }
 searchstring(argv[1], argv[2]);
 return 0;
}
char searchstring(char* filename, char* string)
{
 FILE* file;
 char buffer[linelength];
 int line=0;
 unsigned int x, y, u;
 if( (file = fopen(filename, "rb")) == NULL ) {
 printf("File read error!\n");
 return 1;
 }
 
 while(1) {
 y = 0;
 u = 0;
 fgets(buffer, linelength, file);
 line++;
 
 if( feof(file) ) {
 break;
 }
 
 for(x = 0; x < strlen(buffer); x++) {
 if( buffer[y] == string[u] ) {
y++;
u++;
if( u == strlen(string) ) {
printf("Line %d: %s", line, buffer);
}
 }
 if( buffer[y] != string[u] ) {
u = 0;
y++;
 }
 }
 }
 fclose(file);
 return 0;
}

//**************************************
// Name: String Replacement (str_replace)
// Description:This gives you the ability to use str_replace in C. str_replace is a very powerful function with many applications.
// By: Brian Folts (from psc cd)
//
// Inputs:First parameter is string to replace.
//Second parameter is what to replace with.
//Third parameter is the string to do it in.
//
// Returns:Returns the new string with all occurences of first parameter replaced with second parameter.
//**************************************

//replaces all occurences with another occurence
char *str_replace(char * t1, char * t2, char * t6){
    char*t4;
    char*t5=malloc(0);
    while(strstr(t6,t1)){
        t4=strstr(t6,t1);
        strncpy(t5+strlen(t5),t6,t4-t6);
        strcat(t5,t2);
        t4+=strlen(t1);
        t6=t4;
    }
    return strcat(t5,t4);
}
int print_string_replace(){
    printf("%s",str_replace("hello","goodbye","hello worldhello hello hello helloworld hello hello hello hello hellohello worldhello hello hello helloworld hello hello hello hello hellohello worldhello hello hello helloworld hello hello hello hello hello,and then it gets to the new line?\n"));
    return 0;
}

//**************************************
// Name: User defined string Functions (Length and Reversal)
// Description:This program explains beginners to write functions to find the length of a string and to reverse a string without using the in-built functions strlen and strrev. Rate the code if you like it and also comment on the code.
// By: Karthik A (from psc cd)
//
// Inputs:A word (string)
//
// Returns:Its length and the reversed string.
//
// Assumes:Basics of pointers
//
// Side Effects:NIL
//**************************************

/* This program explains string functions strlen and strrev without the use of in-built functions*/

/* Function to return the length of a string */
int length(char *base)//The argument to this function is the base address of the input string
{
int ct=0;//Counters for accessing the string and count
while(*(base+ct)!='\0')//Increment the counter if '\0' is not encountered
{
ct++;
}
return ct; //Return the length
}
/*Function to reverse the string */
void reverse(char *base,int length) //There are two arguments 1. Base address
{ //2. Length of the string obtained by using length function
int i;
for(i=length-1;i>=0;i--)
{ //i is stored with the length of the string and now can be accessed in the reverse
printf("%c",*(base+i));//The string is printed using pointers with base address and the counter 'i'
}
}
void write_functions()
{
    char str[20];
    int len;
    printf("\n Enter a word:");
    scanf("%s",str);
    printf("\n Call the function length with the parameter as the string's base address");
    len=length(str);//Call the function length with the parameter as the string's base address
    printf("\n The length is %d",len);
    /* Strrev */
    printf("\n The function reverse is called with two param 1. base address and 2. length");
    printf("\n");
    reverse(str,len);//The function reverse is called with two param 1. base address and 2. length
}