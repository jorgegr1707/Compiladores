

//**************************************
//INCLUDE files for :Another String Replace Function
//**************************************
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//**************************************
// Name: Another String Replace Function
// Description:Finds and replaces a string with a given string. Returns the number of occurances found.
// By: William Brendel (from psc cd)
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
		


int main()
{
 int t = 25;
 int r = 100;
 int c = 15;
 int a = 0;
 //introducir datos de las figuras y obtener areas
 if(t>r)
 {
 if(t>c)
 {
 printf("t es la mayor");
 }
 else
 {
 printf("c es la mayor");
 }
 }
 else
 {
 if (r>c)
 {
 printf("r es la mayor");
 }
 else
 {
 printf("c es la mayor");
 }
 }
 printf("\n¿que area deseas saber?\n");
 printf("1.- Triangulo\n 2.-Rectangulo\n 3.-Circulo \n");
 scanf("%i",&a);
 if(a==1)
 {
 printf("El area del triangulo es: %i",t);
 }
 else
 {
 if(a==2)
 {
 printf("el area del rectangulo es: %i",r);
 }
 else
 {
 printf("el area del circulo es: %i",c);
 }
 }
}

                
//**************************************
// Name: Array Heap Sort
// Description:Sorting an array using heap sort
// By: Debjit Kar (from psc cd)
//**************************************


//prototype
void fnSortHeap(int[], int);
//main
void heao_sort()
{
    int i, arr_num_items;
    int arr[] = {7,10,25,17,23,27,16,19,37,42,4,33,1,5,11};
    //total number of items in array.
    //if you do not provide the exact number you might get unwanted results
    arr_num_items = 15;
    //call fnSortHeap function for (arr_num_items - 2) times.
    for(i=arr_num_items; i>1; i--)
    {
        fnSortHeap(arr, i - 1);
    }
    //print the sorted array
    printf("\nThe Sorted Array\n----------------\n");
    for (i = 0; i < arr_num_items; i++)
        printf("%d\n",arr[i]);
    return;
}
//sort heap
void fnSortHeap(int arr[], int arr_ubound)
{
int i,o;
int lChild, rChild, mChild, root, temp;
//find the root element of the current element
root = (arr_ubound-1)/2;
//creating the heap
for(o=root;o>=0;o--)
{
 for(i=root;i>=0;i--)
 {
lChild = (2*i)+1;
rChild = (2*i)+2;
    if ((lChild <= arr_ubound) && (rChild <= arr_ubound))
{
 if(arr[rChild] >= arr[lChild])
mChild = rChild;
 else
mChild = lChild;
}
else
{
 if(rChild > arr_ubound)
mChild = lChild;
 else
mChild = rChild;
}
//swap elements
if (arr[i] < arr[mChild])
{
 temp = arr[i];
 arr[i] = arr[mChild];
 arr[mChild] = temp;
}
 }
}
//move the max element to the end of the array
temp = arr[0];
arr[0] = arr[arr_ubound];
arr[arr_ubound] = temp;
return;
}

//**************************************
// Name: ASCII to Decimal, Hexadecimal, and Octal
// Description:This program will convert ASCII to decimal, hexadecimal, and octal.
// By: Eric K (from psc cd)
//
// Side Effects:I am a beginner C/C++ coder so the code is probably messy and disorganized. Any feedback/suggestions is welcomed!
//**************************************


int ascii_conversion()
{
    char string[1024];
    int length;
    printf("ASCII Input: ");
    scanf("%s", string);
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
// Name: Averaging Program
// Description:To make the task of averaging out numbers easy by using my programing skills
// By: john Fivekiller (from psc cd)
//
// Assumes:It accepts only floating point numbers
//
// Side Effects:Has not been debugged side effects unknown
//**************************************

float average(int number, float total)
{
float average;
average = total / number;
return average;
}
int getnumber(void)
{
int number;
printf("Enter the total numbers\n");
scanf("%d",&number);
return number;
}
float getallnumbers (int amount)
{
float input;
int i = 0;
printf("Enter All number to be divided\n");
float allnumbers = 0.0;
while (i < amount)
{
scanf("%f",&input);
allnumbers = allnumbers + input;
amount--;
}
return allnumbers;
}

int get_average(int argc, char *argv[])
{
int number;
 number=getnumber();
float total;
 total=getallnumbers(number);
float theaverage;
 theaverage=average(number,total);
 printf("The average of the numbers are %f", theaverage); 
 system("PAUSE");   
 return 0;
}

//**************************************
// Name: Basic Calculator
// Description:Basic calculator with switch-case
// By: Kaan KAMIS (from psc cd)
//**************************************

/*
*   Basic calculator with switch-case
*   Mustafa Kaan KAMIS 
*   http://www.k2an.com
*/
int basic_calculator(void)
{
 char kaankamis; // operators (+,-,*,/)
     int sayi1,sayi2,toplam; // number1, operator, number2
     printf("Enter Numbers and Operator : \n");
     printf("Example : 2 * 4 \n");
     scanf("%d %c %d",&sayi1,&kaankamis,&sayi2);
 switch (kaankamis)
 {
case '+':
 toplam = sayi1 + sayi2;
 break;
case '-':
 toplam = sayi1 - sayi2;
 break;
    case '*':
 toplam = sayi1 * sayi2;
 break;
    case '/':
 toplam = sayi1 / sayi2;
 break;
default:
 printf("Wrong operator please use following operators +,-,*,/ \n");
         break;
 }
        printf("Result of %d %c %d is : %d\n",sayi1,kaankamis,sayi2,toplam);
return(0);
}

//**************************************
// Name: Basic Sorts
// Description:Great introduction for beginners to different sorts... Implements functions for a MinSort, BubbleSort, InsertionSort and ShellSort. All on an array of chars, with a specified complexity for each one. Good for beginners to study.
// By: Eli (from psc cd)
//
// Inputs:n/a
//
// Returns:n/a
//
// Assumes:n/a
//
// Side Effects:n/a
//**************************************

//**********************************************
//
// Different sorting algorithms. All sorting an
// array of chars.
//
//**********************************************

void MinSort(char*, int);
void BubbleSort(char*, int);
void InsertionSort(char*, int);
void ShellSort(char*, int);
int operations()
{

 char cr[] = "dcabrosterdeonmlk";
 printf("%s",cr);
 ShellSort(cr, strlen(cr));
 printf("%s",cr);
 return 0;
}
// Complexity: n^2
void MinSort(char* array, int n)
{
 int i, j, temp_index;
 char min;
 for (i=0; i < n-1; ++i)
 {
temp_index = i;
min = array[i];
for (j = i+1; j < n; ++j)
{
 if (array[j] < min)
 {
     temp_index = j;
     min = array[j];
 }
}
array[temp_index] = array[i];
array[i] = min;
 }
}
// Complexity: n^2
void BubbleSort(char* array, int n)
{
 int i, j;
 char temp;
 for (i = 0; i < n-1; ++i)
for (j = i+1; j > 0; --j)
 if (array[j] < array[j-1])
 {
     temp = array[j];
     array[j] = array[j-1];
     array[j-1] = temp;
 }  
}
// Complexity: n^2
void InsertionSort(char* array, int n)
{
 int i, j;
 char temp;
 for (i=1; i < n; ++i)
 {
temp = array[i];
j = i-1;
while ((j >= 0) && (temp < array[j]))
{
 array[j+1] = array[j];
 j--;
}
array[j+1] = temp;
 }
}
// Complexity: n^1.2
void ShellSort(char* array, int n)
{
 int i, j, k, s, gap_cnt;
 char temp;
 int gaps[5];
 gaps[0] = 9; gaps[1] = 5; gaps[2] = 3; gaps[3] = 2; gaps[4] = 1;
 for (gap_cnt = 0; gap_cnt < 5; gap_cnt++)
 {
k = gaps[gap_cnt];
s = -k;
for (i = k; i < n; ++i)
{
 temp = array[i];
 j = i-k;
 if (s == 0)
 {
     s = -k;
     s++;
     array[s] = temp;
 }
 while (temp < array[j] && j >= 0 && j <= n) // + Bound checking
 {
     array[j+k] = array[j];
     j = j-k;
 }
 array[j+k] = temp;
}
 }
}

                
//**************************************
// Name: Bubble Sort
// Description:The purpose of this code is to show novice programmers the simple and classic sorting method of Bubble Sort. The code is in C/C++ and should be compilied in DJGPP. The code includes the Bubble Sort Algorithm in action.
// By: Joshua Thompson (from psc cd)
//
// Inputs:No Inputs
//
// Returns:No Returns
//
// Assumes:The code is complete. The Bubble Sort Algorithm is modulizied inside its own function. It is called from main, the current implementation sorts an array of ints, but can be modified to sort varying data types.
//
// Side Effects:No Side Effects
//**************************************

/* Function Prototypes */
void sort_bubble( int Array[], const int Size );
void PrintArray( int Array[], const int Size );
int bubble_sort( void )
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
 sort_bubble( Array, Size );
 /* Print the Smallest-to-Largest 
 Order Array */

 printf( "The Array after Bubble Sort:\n\n");
 PrintArray( Array, Size );
 /* End the Program */
 printf( "\nPress any key to quit..." );

 return 0;
}
/* Uses the classic bubble sort algorithm */
void sort_bubble( int Array[], const int Size )
{
 int i, j, temp;
 for( i = 0; i < Size - 1; i++ )
for( j = 0; j < Size - i + 1; j++ )
 if( Array[j] > Array[j + 1] )
 {
temp = Array[j];
    Array[j] = Array[j + 1];
    Array[j + 1] = temp;
 }
}
/* Prints an integer Array line by line */
void PrintArray( int Array[], const int Size )
{
 int i;
 
 for( i = 0; i < Size; i++ )
printf("Array[%i] = %i\n", i, Array[i] );
}