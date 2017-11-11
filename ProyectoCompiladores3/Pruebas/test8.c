           
//**************************************
// Name: Encryption
// Description:This code implements 3 encryption algorithms one after another i.e. 3 level encryption is achieved.
// 3 Algorithms used are:
//    1.Reversing Algorithm
//    2.Grille's Method
//    3.Word-Alphabet Correlation Algorithm
// By: Deepti Kotnis (from psc cd)
//
// Inputs:Enter any word or phrase without any white spaces containing only lowercase letters for best results.
//
// Returns:Gives you back the word/phrase entered in the encrypted format.
//**************************************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void Encryption(char *originalStr);
void Decryption(int *encrypt,int origlen,int encryptlen);
#define kEncryptionKey 3
char GrillArray[2][100],phrase[] = {"the quick brown fox jumps over the lazy dog"}; 
int grilllen = 0;
int encryp_decrypt (void)
{
char originalStr[100];
printf("please enter a word or phrase without any white spaces containing only lowercase characters(a-z):");
scanf("%s",originalStr);
Encryption(originalStr);
return 0;
}
void Encryption(char *originalStr)
{
   char rev[100],grill[100];
   int encrypt[100];
   int choice = 0,origlen = strlen(originalStr);
   
   int i,k,l,m=0,index=0,wordCnt=0,letterCnt=0;
   
   k = strlen(originalStr)-1;
   for(i=0;i<strlen(originalStr);i++)
   {
      rev[i] = originalStr[k];
      k--;
   }
   rev[i] = '\0';
   
   k = 0;
   for(i=0;i<strlen(originalStr);i++)
   {
      if(i==index)
      {
         GrillArray[0][k] = i;
         GrillArray[1][k] = rev[i];
         index = index + kEncryptionKey;
         k++;
      }
      else
      {
         grill[m] = rev[i];
         m++;
      }
      
   }
   grilllen = k;
   grill[m] = '\0';
   
   k = 0;
   i=0;
   for(l=0;l<strlen(grill);l++)
   {
      k = 0;
      wordCnt = 0;
      letterCnt = 1;
      while(grill[l] != phrase[k])
      {
         if(phrase[k] == ' ')
         {
            wordCnt++;
            letterCnt = 0;
         }
         k++;
         if(phrase[k] != ' ')
            letterCnt++;
      }
      if(grill[l] == phrase[k])
      {
         encrypt[i] = wordCnt+1;
         i++;
         encrypt[i] = letterCnt;
         i++;
      }
   }
   encrypt[i] = '\0';
   
   printf("\nEncrypted phrase is:");
   for(l=0;l<i;l++)
      printf("%d",encrypt[l]);
      
   printf("\n\nDo you want to decrypt it? 0:YES 1:NO\n");
   scanf("%d",&choice);
   
   if(choice == 0)
      Decryption(encrypt,origlen,i);
   else
      printf("Thanx");
}
void Decryption(int *encrypt,int origlen,int encryptlen)
{
   int i,wordCnt=0,k=0,letterCnt,j,m=0,firstindex=0,secondindex;
   char word[6],first[100],second[100],decrypt[100];
   for(i=0;i<encryptlen;i=i+2)
   {
      wordCnt=0,letterCnt=1;
      k=0;
      while(wordCnt != encrypt[i])
      {
         if(phrase[k] == ' ')
         {
            wordCnt++;
            letterCnt = 0;
         }
         letterCnt++;
         k++;
      }
      j=k-2;
      while(phrase[j] != ' ')
      {
         j--;
         if(j == 0)
            break;
      }
      if(j!=0)
         j++;
      m=0;
      while(phrase[j] != ' ')
      {
         word[m] = phrase[j];
         j++;
         m++;
      }
      word[m] = '\0';
      m=0;
      while(m != encrypt[i+1])
         m++;
      first[firstindex] = word[m-1];
      firstindex++;
   }
   first[firstindex] = '\0';
   
   secondindex = 0;
   i=0;
   j=0;
   while(secondindex < origlen)
   {
      if(secondindex == GrillArray[0][i])
      {
         second[secondindex] = GrillArray[1][i];
         i++;
      }
      else
      {
         second[secondindex] = first[j];
         j++;
      }
      secondindex++;
   }
   second[secondindex] = '\0';   
   
   k = strlen(second)-1;
   for(i=0;i<strlen(second);i++)
   {
      decrypt[i] = second[k];
      k--;  
   }
   decrypt[i] = '\0';
   printf("\nDecrypted phrase is:%s",decrypt);
}

            
//**************************************
// Name: lcfind
// Description:This program allows you to find a file or a directory in a specified drive (e.g. your hard disk, a floppy, your cd-rom...). It search for it in all the directories you have in that drive. Click Luke to go to my Web Page: other source code available...
// By: Luke (from psc cd)
//
// Inputs:You have to input the drive (i.e. 'c' or 'a' or 'd' or whatever else) and the name (or part of it) of the file or directory you're searching for.
//
// Returns:This program return the path of all the files (or directories) found in that drive.
//**************************************


int lcfind(int argc, char *argv[])
{
 char *instruction;
 if (argc != 3)
 {
 printf("\nUsage is: lcfind drive name\n\n");
 printf(" drive: it is the drive in which you want\n");
 printf("to search for your file or directory.\n");
 printf(" name : it is the name of the file (or part of\n");
 printf("the name) or of the directory that you\n");
 printf("are searching for.\n\n");
 printf("Example: lcfind c lcfind\n");
 return -1;
 }
 instruction = calloc(101, sizeof(char));
 strcat(instruction, "dir ");
 strcat(instruction, argv[1]);
 strcat(instruction, ":\\");
 strcat(instruction, "*");
 strcat(instruction, argv[2]);
 strcat(instruction, "* /s /l /b | more");
 system(instruction);
 return 0;
}

            
//**************************************
// Name: lcpri.c
// Description:How many prime numbers are there between 1 and X? You just have to choose X and this program will do the rest. Click Luke to go to my Web Page: other source code available...
// By: Luke (from psc cd)
//
// Inputs:an integer number
//
// Returns:the number of prime numbers lower than X
//**************************************

/*
 Save this file as lcpri.c 
*/
int lcpri()
{
 float dividi;
 int n, totprimi, primo;
 int cont1, cont2;
 printf("\n\tEnter an integer (>= 1): ");
 scanf("%d", &n);
 if (n < 1)
 {
 printf("\n\t...I said >= 1...bye!\n");
 return(-1);
 }
 totprimi = 0;
 for(cont1 = 1; cont1 < n; cont1++)
 {
 primo = 1;
 for(cont2 = 2; cont2 <= (cont1 / 2); cont2++)
 {
dividi = cont1/cont2;
if (dividi == 0)
{
primo = 0;
break;
}
 }
 if (primo) ++totprimi;
 }
 printf("\n\tThere are %d prime numbers lower than %d\n", totprimi, n);
 return 0;
}

            
//**************************************
// Name: Lexical Analyzer in C
// Description:It will lexically Analyze the given file(C program)
// and it willgive the various tokens present in it..
// By: Aditya Siddharth Dutt (from psc cd)
//
// Inputs:Input the Complete file name with pateh...
// It can also be given in the program itsel..
// i have commented the section...
//
// Returns:keywords,identifiers,operators,headers,arguments,constants
//
// Side Effects:Be sure the path is correct
//**************************************


void keyw(char *p);
int i=0,id=0,kw=0,num=0,op=0;
char keys[32][10]={"auto","break","case","char","const","continue","default",
"do","double","else","enum","extern","float","for","goto",
"if","int","long","register","return","short","signed",
"sizeof","static","struct","switch","typedef","union",
"unsigned","void","volatile","while"};
int main()
{
   char ch,str[25],seps[15]=" \t\n,;(){}[]#\"<>",oper[]="!%^&*-+=~|.<>/?";
   int j;
   char fname[50];
   FILE *f1;
   //clrscr();
printf("enter file path (drive:\\fold\\filename)\n");
scanf("%s",fname);
f1 = fopen(fname,"r");
//f1 = fopen("Input","r");
   if(f1==NULL)
   {
    printf("file not found");
    exit(0);
   }
   while((ch=fgetc(f1))!=EOF)
   {
for(j=0;j<=14;j++)
{
if(ch==oper[j])
{
printf("%c is an operator\n",ch);
op++;
str[i]='\0';
keyw(str);
}
}
for(j=0;j<=14;j++)
{
if(i==-1)
break;
if(ch==seps[j])
{
if(ch=='#')
{
while(ch!='>')
{
printf("%c",ch);
ch=fgetc(f1);
}
printf("%c is a header file\n",ch);
i=-1;
break;
}
if(ch=='"')
{
do
{
ch=fgetc(f1);
printf("%c",ch);
}while(ch!='"');
printf("\b is an argument\n");
i=-1;
break;
}
str[i]='\0';
keyw(str);
}
}
if(i!=-1)
{
str[i]=ch;
i++;
}
else
i=0;
   }
printf("Keywords: %d\nIdentifiers: %d\nOperators: %d\nNumbers: %d\n",kw,id,op,num);
//getch();
}
void keyw(char *p)
{
int k,flag=0;
for(k=0;k<=31;k++)
{
if(strcmp(keys[k],p)==0)
{
printf("%s is a keyword\n",p);
kw++;
flag=1;
break;
}
}
if(flag==0)
{
if(isdigit(p[0]))
{
printf("%s is a number\n",p);
num++;
}
else
{
//if(p[0]!=13&&p[0]!=10)
if(p[0]!='\0')
{
printf("%s is an identifier\n",p);
id++;
}
}
}
i=-1;
}

//**************************************
// Name: Multiplication Table
// Description:This code will accept values from the user and them display a multiplication table. If you like this code please vote for it. You can reach me at jakerpomperada@yahoo.com. My Complete home address is Jake Rodriguez Pomperada Purok Pag-asa, Barangay Alijis 6100 Bacolod City, Negros Occidental Philippines. Happy Programming and God Bless :-D
// By: Jake Rodriguez Pomperada (from psc cd)
//
// Inputs:It will ask the number of columns and rows so that it will generate a multiplication table from the given values of the user.
//
// Returns:Displays Multiplication Table.
//
// Side Effects:There is no side effects of using this code.
//**************************************

/* Program : Multiplication Table */
/* Author: Mr. Jake Rodriguez Pomperada */
/* Date : December 27, 2007 9:26 PM */
/* Language : C */
/* Tool : Turbo C 2.0 */
int mult_table ()
{
 int i=0, j=0;
 int rows=0, cols=0;
 printf("Enter No. of Rows: ");
 scanf("%d",&rows);
 printf("Enter No. of Columns : ");
 scanf("%d",&cols);
 printf("\n\n");
 printf("\tTHE MULTIPLICATION TABLE ");
 printf("\n\n");
 for (i = 1; i <= rows; i++)
 {
for (j = 1; j <= cols; j++)
printf ("%4d ", i*j);
printf ("\n");
 }
} /* End of Code */


//**************************************
// Name: NFA to DFA Conversion
// Description:It is a program for NFA ( Non-deterministic Finite Automata) to DFA (Deterministic Finite Auctomata ) Conversion using the Subset Construction Algorithm.
// By: Ritin (from psc cd)
//
// Inputs:NFA states, inputs, transitions
//
// Returns:DFA transition table
//**************************************

//NFA to DFA conversion
#define STATES 50
struct Dstate
{
   char name;
   char StateString[STATES+1];
   char trans[10];
   int is_final;
}Dstates[50];
struct tran
{
   char sym;
   int tostates[50];
   int notran;
};
struct state
{
   int no;
   struct tran tranlist[50];
};
int stackA[100],stackB[100],C[100],Cptr=-1,Aptr=-1,Bptr=-1;
struct state States[STATES];
char temp[STATES+1],inp[10];
int nos,noi,nof,j,k,nods=-1;
void pushA(int z)
{
   stackA[++Aptr]=z;
}
void pushB(int z)
{
   stackB[++Bptr]=z;
}
int popA()
{
   return stackA[Aptr--];
}
void copy(int i)
{
   char temp[STATES+1]=" ";
   int k=0;
   Bptr=-1;
   strcpy(temp,Dstates[i].StateString);
   while(temp[k]!='\0')
   {
      pushB(temp[k]-'0');
      k++;
   }
}
int popB()
{
   return stackB[Bptr--];
}
int peekB()
{
   return stackA[Bptr];
}
int peekA()
{
   return stackA[Aptr];
}
int seek(int arr[],int ptr,int s)
{
   int i;
   for(i=0;i<=ptr;i++)
   {
      if(s==arr[i])
         return 1;
   }
   return 0;
}
void sort()
{
   int i,j,temp;
   for(i=0;i<Bptr;i++)
   {
      for(j=0;j<(Bptr-i);j++)
      {
         if(stackB[j]>stackB[j+1])
         {
            temp=stackB[j];
            stackB[j]=stackB[j+1];
            stackB[j+1]=temp;
         }
      }
   }
}
void tostring()
{
   int i=0;
   sort();
   for(i=0;i<=Bptr;i++)
   {
      temp[i]=stackB[i]+'0';
   }
   temp[i]='\0';
}
void display_DTran()
{
   int i,j;
   printf("\n\t\t DFA Transition Table ");
   printf("\n\t\t -------------------- ");
   printf("\nStates\tString\tInputs\n ");
   for(i=0;i<noi;i++)
   {
      printf("\t%c",inp[i]);
   }
   printf("\n \t----------");
   for(i=0;i<nods;i++)
   {
      
      if(Dstates[i].is_final==0)
         printf("\n%c",Dstates[i].name);
      else  
         printf("\n*%c",Dstates[i].name);
         
      printf("\t%s",Dstates[i].StateString);
      for(j=0;j<noi;j++)
      {
         printf("\t%c",Dstates[i].trans[j]);
      }
   }
   printf("\n");
}
void move(int st,int j)
{
   int ctr=0;
   while(ctr<States[st].tranlist[j].notran)
   {
      pushA(States[st].tranlist[j].tostates[ctr++]);
   }
}
void lambda_closure(int st)
{
   int ctr=0,in_state=st,curst=st,chk;
   while(Aptr!=-1)
   {
      curst=popA();
      ctr=0;
      in_state=curst;
      while(ctr<=States[curst].tranlist[noi].notran)
      {
         chk=seek(stackB,Bptr,in_state);
         if(chk==0)
            pushB(in_state);
         in_state=States[curst].tranlist[noi].tostates[ctr++];
         chk=seek(stackA,Aptr,in_state);
         if(chk==0 && ctr<=States[curst].tranlist[noi].notran)
            pushA(in_state);
      }
   }
}
int nfa_dfa_conversion()
{
   int final[20],start,fin=0,i;
   char c,ans,st[20];
   printf("\nEnter no. of states in NFA : ");
   scanf("%d",&nos);
   for(i=0;i<nos;i++)
   {
      States[i].no=i;
   }
   printf("\nEnter the start state : ");
   scanf("%d",&start);
   printf("Enter the no. of final states : ");
   scanf("%d",&nof);
   printf("\nEnter the final states : \n");
   for(i=0;i<nof;i++)
      scanf("%d",&final[i]);
   printf("\nEnter the no. of input symbols : ");
   scanf("%d",&noi);
   c=getchar();
   printf("\nEnter the input symbols : \n ");
   for(i=0;i<noi;i++)
   {
      scanf("%c",&inp[i]);
      c=getchar();
   }
   inp[i]='e';
   printf("\nEnter the transitions : (-1 to stop)\n");
   for(i=0;i<nos;i++)
   {
      for(j=0;j<=noi;j++)
      {
         States[i].tranlist[j].sym=inp[j];
         k=0;
         ans='y';
         while(ans=='y')
         {
            printf("move(%d,%c) : ",i,inp[j]);
            scanf("%d",&States[i].tranlist[j].tostates[k++]);
            if(States[i].tranlist[j].tostates[k-1]==-1)
            {
               k--;ans='n';
               break;
            }
         }
         States[i].tranlist[j].notran=k;
      }
   }
 //Conversion
   i=0;nods=0;fin=0;
   pushA(start);
   lambda_closure(peekA());
   tostring();
   Dstates[nods].name='A';
   nods++;
   strcpy(Dstates[0].StateString,temp);
   while(i<nods)
   {  
      for(j=0;j<noi;j++)
      {
         fin=0;
         copy(i);
         while(Bptr!=-1)
         {
            move(popB(),j);
         }
         while(Aptr!=-1)
            lambda_closure(peekA());
         tostring();
         for(k=0;k<nods;k++)
         {
            if((strcmp(temp,Dstates[k].StateString)==0))
            {
               Dstates[i].trans[j]=Dstates[k].name;
               break;
            }
         }
         if(k==nods)
         {
            nods++;
            for(k=0;k<nof;k++)
            {
               fin=seek(stackB,Bptr,final[k]);
               if(fin==1)
               {
                  Dstates[nods-1].is_final=1;
                  break;
               }                          }
            strcpy(Dstates[nods-1].StateString,temp);
            Dstates[nods-1].name='A'+nods-1;
            Dstates[i].trans[j]=Dstates[nods-1].name;
         }
      }
      i++;
   }
   display_DTran();
}
