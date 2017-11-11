#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Phonebook_Data
{
      char FirstName[20];
      char LastName[20];
      char PhoneNumber[20];
};

struct Phonebook_Data phonebook[100];

int counter = 0;

void cls();
void add();
void delete();
void deleteall();
void edit();
void list();
void search();
int searchret(char FirstName[], char LastName[]);
void random1();

int main()
{
	int iSelection = 0;


for(;;)
{
    printf("\n\t\t\tPhonebook Options");
    printf("\n\n\t(1)\tAdd Contact");
    printf("\n\t(2)\tDelete Contact");
    printf("\n\t(3)\tEdit Phonebook ");
	printf("\n\t(4)\tDisplay Phonebook ");
    printf("\n\t(5)\tLook Up a Contacts Phone Number");
    printf("\n\t(6)\tPick a Random Contact to Call");
    printf("\n\t(7)\tDelete ALL Contacts");
    printf("\n\t(8)\tExit Phonebook");
    printf("\n\nSelect an option from the menu? ");
    scanf("%d", &iSelection);

    switch(iSelection)
    {
        case 1:
            add();
            break;
        case 2:
            delete();
            break;
        case 3:
        	edit();
        	break;
        case 4:
            list();
            break;
        case 5:
            search();
            break;
        case 6:
            random1();
            break;
        case 7:
            deleteall();
            break;
        case 8:
            fprintf(stdout, "\nYou have chosen to exit the Phonebook.\n");
            getchar( );
            break;
        default:
            fprintf(stdout, "\n\tI don't know the option : %d \a\n", iSelection);
            break;
    }


    if (iSelection == 8) break;
}


return 0;
}


void add()
{
	counter++;

	printf("\nFirst Name: ");
    scanf("%s", phonebook[counter-1].FirstName);
    printf("Last Name: ");
    scanf("%s", phonebook[counter-1].LastName);
    printf("Phone Number XXX-XXX-XXXX: ");
    scanf("%s", phonebook[counter-1].PhoneNumber);
    printf("\n\tContact successfully added to Phonebook\n");
    getchar( );
    system("cls");
}

void delete()
{
	int x = 0;
   int i = 0;
   char deleteFirstName[20];
   char deleteLastName[20];


   printf("\nFirst name: ");
   scanf("%s", deleteFirstName);
   printf("Last name: ");
   scanf("%s", deleteLastName);

 	if((x = searchret(deleteFirstName, deleteLastName)) != -1)
 	{
 		for ( i = x; i < counter - 1; i++ )
		{
			strcpy(phonebook[i].FirstName, phonebook[i+1].FirstName);
   			strcpy(phonebook[i].LastName, phonebook[i+1].LastName);
   			strcpy(phonebook[i].PhoneNumber, phonebook[i+1].PhoneNumber);
		}
		printf("Record deleted from the phonebook.\n\n");
		--counter;
		return;
 	}
 	else
 		printf("That contact was not found, please try again.");
}

void deleteall()
{
   int x = 0;
   char nullStr[20] = {'\0'};

   for ( x = 0; x < counter; x++ )
   {
      strcpy(phonebook[x].FirstName, nullStr);
      strcpy(phonebook[x].LastName, nullStr);
      strcpy(phonebook[x].PhoneNumber, nullStr);
   }
   counter = 0;
   printf("All Contacts have been deleted.\n");
}

void edit()
{
	char TempFirstName[20];
	char TempLastName[20];
  	int EditIndex = -1;

   	printf("\nWhat is the Name of the Contact that you want to edit the Phone Number for?");
   	printf("\n\nFirst Name: ");
   	scanf("%s", TempFirstName);
   	printf("Last Name: ");
   	scanf("%s", TempLastName);
   	EditIndex = searchret(TempFirstName,TempLastName);
   	if(EditIndex != -1)
   	{//go for edit
   		printf("\nNew First Name: ");
    	scanf("%s", phonebook[EditIndex].FirstName);
    	printf("New Last Name: ");
    	scanf("%s", phonebook[EditIndex].LastName);
    	printf("New Phone Number XXX-XXX-XXXX: ");
    	scanf("%s", phonebook[EditIndex].PhoneNumber);
    	printf("\n\tContact successfully updated\n");
   	}
   	else
   		printf("That contact was not found, please try again.");//not found
   	getchar( );
    cls();
}

void list()
{
	cls();
	int x;
	for( x = 0; x < counter; x++)
      {
         printf("\n(%d)\n", x+1);
         printf("Name: %s %s\n", phonebook[x].FirstName, phonebook[x].LastName);
         printf("Number: %s\n", phonebook[x].PhoneNumber);
      }
      getchar( );
}

void search()
{
	int x = 0;
	char TempFirstName[20];
	char TempLastName[20];

   	printf("\nWhat is the Name of the Contact that you want to find the Phone Number for?");
   	printf("\n\nFirst Name: ");
   	scanf("%s", TempFirstName);
   	printf("Last Name: ");
   	scanf("%s", TempLastName);
   	for (x = 0; x < counter; x++)
   	{
      	if (strcmp(TempFirstName, phonebook[x].FirstName) == 0)
         	if (strcmp(TempLastName, phonebook[x].LastName) == 0)
            {
              	printf("\n%s %s's phone number is %s\n", phonebook[x].FirstName, phonebook[x].LastName, phonebook[x].PhoneNumber);
              	return;
            }
            else
            	printf("That contact was not found, please try again.");
   	}
}

int searchret(char FirstName[20], char LastName[20])
{
	int x = 0;
	int index = -1;
	//Searching
   	for (x = 0; x < counter; x++)
   	{
      	if (strcmp(FirstName, phonebook[x].FirstName) == 0)
         	if (strcmp(LastName, phonebook[x].LastName) == 0)
              	index = x;
   	}

   	//if found returns the index, if not -1
   	return index;
}

void random1()
{
	int iRandom = 0;
   	int x = 0;

 	//Finding random number
   	iRandom = rand() % counter;
   	x = iRandom;

	//printing out the random contact
   	printf("\nYour random Contact is: %s %s\n", phonebook[x].FirstName, phonebook[x].LastName);
   	printf("Their phone number is: %s\n", phonebook[x].PhoneNumber);
}

void cls()
{
	system("cls");
}


void encrypt(char password[], int key){
    unsigned int i;
    for(i=0; i<strlen(password); ++i){
        password[i] = password[i]-key;
    }
}

void decrypt(char password[], int key){
    unsigned int i;
    for(i=0; i<strlen(password); ++i){
        password[i] = password[i]+key;
    }
}

				
//**************************************
// Name: Calculate day in a week by given a date
// Description:This program can calculate the day of the week from a date key in by user.
// By: Stanley Wong (from psc cd)
//
// Inputs:a date
//
// Returns:day of week
//**************************************


/* Prototype Declaration */
int validateDate(int dd, int mm, int yyyy);
void printError();
int calcDay_Dec31(int yyyy);
int dayInYear(int dd, int mm);
void nameInStr (char daysInWord[], int days);
void calc_day(void)
{
	int dd, mm, yyyy;
	int days;
	char daysInWord[11];
	
	/* Read a date and validate the date */
	do{
		printf("Enter a date(dd/mm/yyyy) :");
		scanf("%d / %d / %d", &dd, &mm ,&yyyy);
		fflush(stdin);
	}
	
	while(validateDate(dd, mm, yyyy));
	
	/* Calculate the day for Dec 31 of the previous year */
	days = calcDay_Dec31(yyyy);
	/* Calculate the day for the given date */
	days = (dayInYear(dd, mm) + days) % 7;
	/* Add one day if the year is leap year and desired date is after February */
	if ((!(yyyy % 4) && (yyyy % 100) || !(yyyy % 400)) && mm > 2)
		days++;
	nameInStr(daysInWord, days);
	/* Print the day of the desired date */
	printf("The day for date %d/%d/%d is %s\n\n", dd, mm, yyyy, daysInWord);
} /* main */
int validateDate(int dd, int mm, int yyyy)
{
	int i = 0, j = 0;
	int a[7] = {1, 3, 5, 7, 8, 10, 12};
	int b[4] = {4, 6, 9, 11};
	int error = 0;
	if (mm < 1 || mm > 12)
		error = 1;
	
	
	if (mm == 2)
	{
		if (!(yyyy % 4) && (yyyy % 100) || !(yyyy % 400))
		{
			if (dd < 1 || dd > 29)
				error = 1;
							
		}
		else if (dd < 1 || dd >28)
			error = 1;
	}
 	
	for (i=0;i<6;i+=1)
	{	
		if (mm == a[i])
		{
			if (dd < 1 || dd > 31)
				error = 1;
		}
	}
	for (j=0;j<4;j+=1)
	{
		if (mm == b[j])
		{
			if (dd < 1 || dd > 30)
				error = 1;
		}
	}
	if (error == 1)
		printError();
	return error;
}
void printError()
{
	printf("Invalid Input!\n\n");
}
int calcDay_Dec31(int yyyy)
{
	int dayCode = 0;
	dayCode = ((yyyy-1)*365 + (yyyy-1)/4 - (yyyy-1)/100 + (yyyy-1)/400) % 7;
	return dayCode;
} /* calcDay_Dec31 */
int dayInYear(int dd, int mm)
{
	switch(mm)
	{
	case 12:dd += 30;
	case 11:dd += 31;
	case 10:dd += 30;
	case 9:dd += 31;
	case 8:dd += 31;
	case 7:dd += 30;
	case 6:dd += 31;
	case 5:dd += 30;
	case 4:dd += 31;
	case 3:dd += 28;
	case 2:dd += 31;
	}
	return dd;
} /* dayInYear */
void nameInStr(char daysInWord[], int days)
{
	switch(days)
	{
	case 0:strcpy(daysInWord, "Sunday");break;
	case 1:strcpy(daysInWord, "Monday");break;
	case 2:strcpy(daysInWord, "Tuesday");break;
	case 3:strcpy(daysInWord, "Wednesday");break;
	case 4:strcpy(daysInWord, "Thursday");break;
	case 5:strcpy(daysInWord, "Friday");break;
	case 6:strcpy(daysInWord, "Saturday");break;
	}
} /* nameInStr */


				
//**************************************
// Name: Combination Program
// Description:This program takes a string and value of r as input and generates all the combinations which is equal to ncr
// By: Akash Khaitan (from psc cd)
//**************************************

#include<stdio.h>
#include<string.h>
int r=0,q=0;
char as[50],bs[50];
int combinate_(void)
{
void combination(int,int,int);
int nk=0;
printf("Enter a String : ");
scanf("%s",as);
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
// Name: Hello World in C
// Description:One of the most common sample program that is being presented by teachers in computer program is the Hello World program. In this example I am sharing with you a hello world program written in C programming language this program is intended for those people that are very new in C programming. It only display a message "Hello World in C Language." on the screen of the computer.
// Add me at Facebook my address is jakerpomperada@gmail.com and jakerpomperada@yahoo.com
//My mobile number here in the Philippines is 09173084360
// By: Jake R. Pomperada
//**************************************




int hello_world()
{
printf("Hello World in C Language.");
printf("\n\n");
system("pause");
}

//**************************************
// Name: Gauss Seidel(Solutions of Equations)
// Description:There method can be used to solve a set of linear equations that are based on iteration. This is an optimized jacobi iteration.
// By: Akash Khaitan (from psc cd)
//**************************************

int gauss_seidel(void)
{
	float a[10][10],b[10],x[10],y[10];
	int n=0,m=0,i=0,j=0;
	printf("Enter size of 2d array(Square matrix) : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter values no. %d %d :",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	printf("\nEnter Values to the right side of equation\n");
	for(i=0;i<n;i++)
	{
			printf("Enter values no. %d :",i);
			scanf("%f",&b[i]);
	}
	printf("Enter initial values of x\n");
	for(i=0;i<n;i++)
	{
		printf("Enter values no. %d :",i);
		scanf("%f",&x[i]);
	}
	printf("\nEnter the no. of iteration : " );
	scanf("%d",&m);
	while(m>0)
	{
		for(i=0;i<n;i++)
		{
			y[i]=(b[i]/a[i][i]);
			for(j=0;j<n;j++)
			{
				if(j==i)
					continue;
				y[i]=y[i]-((a[i][j]/a[i][i])*x[j]);
				x[i]=y[i];
			}
			printf("x%d = %f	",i+1,y[i]);
		}
		printf("\n\n");
		m--;
	}
	return 0;
}

//**************************************
// Name: Hi-Low Game
// Description:A simple guess the number game.
// By: David J (from psc cd)
//**************************************

// Hi-Low Program	David Javaheri	2-8-99

int hi_low_game()
{
int	num, guess;

num=(rand()%100)+1;
printf("Guess a number between 1 and 100");
scanf("%d",&num);
while(guess!=num)
{
	if(guess<num)
	{
		printf("Too Low. Try Again");
		scanf("%d",&guess);
	}
	
	if(guess>num)
	{
		printf("Too High. Try Again");
		scanf("%d",&guess);
	}
}
	
if(guess==num)
{
	printf("You Are Correct");
}
return 0;
}