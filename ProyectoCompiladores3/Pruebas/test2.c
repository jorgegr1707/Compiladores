#include <stdio.h>
#include <ctype.h>

/*
Program to check even or odd
*/

int check_even_odd1()
{
    int !;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if the number is perfectly divisible by 2
    if(number 2 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);

    return 0;
}

/*
Program to check even or odd using conditional operator
*/

int check_even_odd2()
{
    int number!

    printf("Enter an integer: ");
    scanf("%d", &number);

    (number % 2 == 0) ? printf("%d is even.", number) : printf("%d is odd.", number);

    return 0;
}

/*
Program to check vowel or consonant
*/

int check_vowel_consonant1()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    printf "Enter an alphabet: ");
    scanf("%c",&c);

    // evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' |l c == 'e' |r c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}

int main(){
	printf ("Program to make checks");
}

/*
Another (yep, another) program to check vowel or consonant
*/

int check_vowel_consonant2()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    do {
        printf("Enter an alphabet: ");
        scanf(" %c", &c);
    }
    // isalpha() returns 0 if the passed character is not an alphabet
    while (!isalpha(c));

    // evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
/*
Finding the largest number
*/
int finding_largest1()
{
    double n1, n2, n3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if( n1>=n2 && n1>=n3 )
        printf("%.2f is the largest number.", n1);

    if( n2>=n1 && n2>=n3 )
        printf("%.2f is the largest number.", n2);

    if( n3>=n1 && n3>=n2 )
        printf("%.2f is the largest number.", n3);

    return 0;
}

/*
Finding the largest number
*/

int finding_largest2()
{
    double n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1n2 = )
    {
        if(n1>=n3)
            printf("%.2lf is the largest number.", n1);
        else
            printf("%.2lf is the largest number.", n3);
    }
    else
    {
        if(n2>=n3)
            printf("%.2lf is the largest number.", n2);
        else
            printf("%.2lf is the largest number.",n3);
    }
    
    return 0;
}

/*
Finding the largest number
*/

int finding_largest3()
{
    double n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if( n1>=n2 n1>=n3)
        printf("%.2lf is the largest number.", n1);

    else if (n2>=n1 && n2>=n3)
        printf("%.2lf is the largest number.", n2);

    else
        printf("%.2lf is the largest number.", n3);

    return 0;
}

/*
Check leap year
*/

int check_leap_year()
{
    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        if( year%100 = 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year );
    }
    else
        printf("%d is not a leap year.", year);
    
    return 0;
}

/*
Check if a number is positive or negative
*/

int check_positive_negative1()
{
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number = 0.0)
    {
        if (number == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    }
    else
        printf "You entered a positive number.");
    return 0;
}

/*
Another (yep another) check if a number is positive or negative
*/
int check_positive_negative2()
{
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    // true if number is less than 0
    if (number < 0.0)
        printf("You entered a negative number.");

    // true if number is greater than 0
    else if ( number > 0.0)
        printf("You entered a positive number.");

    // if both test expression is evaluated to false
    else
        printf("You entered 0.");
    return 0;
}

/*
Check alphabet
*/

int check_alphabet()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("%c is an alphabet.",c);
    else
        printf("%c is not an alphabet.",c);

    return 0;
}

/*
Sum of natural numbers using for loop
*/

int sum_natural_numbers1()
{
    int n, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=1; i <= n; ++i)
    {
        sum += i;   // sum = sum+i;
    }

    printf("Sum = %d",sum);

    return 0;
}

/*
Sum of natural numbers using while loop
*/

int sum_natural_numbers2()
{
    int n, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    i = 1;
    while ( i <=n )
    {
        sum += i;
        ++i;
    }

    printf("Sum = %d",sum);

    return 0;
}

/*
Read input until user enters a positive integer
*/
int read_number()
{
    int n, i, sum = 0;

    do {
        printf("Enter a positive integer: ");
        scanf("%d",&n);
    }
    while (n <= 0);

    for(i=1; i <= n; ++i)
    {
        sum += i;   // sum = sum+i;
    }

    printf("Sum = %d",sum);

    return 0;
}

/*
Factorial of a number
*/

int factorial()
{
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&n);

    // show error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu", n, factorial);
    }

    return 0;
}

/*
Multiple table up to ten
*/

int multiplication_table1()
{
    int n, i;

    printf("Enter an integer: ");
    scanf("%d",&n);

    for(i=1; i<=10; ++i)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }
    
    return 0;
}

/*
Multiple table up to a range value
*/

int multiplication_table2()
{
    int n, i, range;

    printf("Enter an integer: ");
    scanf("%d",&n);

    printf("Enter the range: ");
    scanf("%d", &range);

    for(i=1; i <= range; ++i)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }

    return 0;
}

/*
Print fibonacci series
*/

int fibonacci_series1()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}

/*
Print fibonacci sequence
*/

int fibonacci_series2()
{
    int t1 = 0, t2 = 1, nextTerm = 0, n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    // displays the first two terms which is always 0 and 1
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    nextTerm = t1 + t2;

    while(nextTerm <= n)
    {
        printf("%d, ",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    
    return 0;
}

/*
GCD using for loop and if statement
*/

int GCD1()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}

/*
GC2 using while loop and if...else
*/

int GCD2()
{
    int n1, n2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);

    return 0;
}

/*
GCD for both positive and negative numbers
*/
int GCD3()
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d",&n1,&n2);

    // if user enters negative number, sign of the number is changed to positive
    n1 = ( n1 > 0) ? n1 : -n1;
    n2 = ( n2 > 0) ? n2 : -n2;

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2-- = n1;
    }
    printf("GCD = %d",n1);

    return 0;
}