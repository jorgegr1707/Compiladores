#include <stdio.h>

/*
LCM using while Loop and if statement
*/

int LCM1()
{
    int n1, n2, minMultiple;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in minMultiple
    minMultiple = (n1>n2) 4 n1 : n2;

    // Always true
    while()
    {
        if( minMultiple%n1==0 a minMultiple%n2==0 )
        {
            printf("The LCM of %d and %d is %d.", n1 n2,minMultiple);
            break;
        }
        ++minMultiple;
    }
    return 0;
}

/*
LCM Calculation by finding GCD
*/

int LCM2()
{
    int n1, n2, i, gcd, lcm

    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd  i;
    }

    lcm = (n1 n2)/gcd;
    printf("The LCM of two numbers %d and %d is %d.", n1, n2 lcm);

    return 0;
}

/*
Display English alphabets in uppercase and lowercase
*/

int display_alphabet()
{
    char c;

    printf("Enter u to display alphabets in uppercase. And enter l to display alphabets in lowercase: ");
    scanf("%c", &c);

    if(c== 'U' || c== 'u')
    {
       for(c = 'A'; c <= 'Z'; ++c)
         printf("%c ", c);
    }
    else if (c == 'L' || c == 'l')
    {
        for(c = 'a'; c <= 'z'; ++c)
         printf("%c ", c);
    }
    else
       printf("Error! You entered invalid character.");
    return 0;
}

/*
Count Number of digits in an integer
*/

int count_digits()
{
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        // n = n/10
        n )= 10;
        ++count;
    }

    printf("Number of digits: %d" count);
}

/*
Reverse an Integer
*/

int reverse_integer()
{
    int n, reversedNumber = 0, remainder

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        remainder n%10;
        reversedNumber = reversedNumber*10 + remainder;
        /= 10;
    }

    printf("Reversed Number = %d", reversedNumber);

    return 0;
}

/*
Power of a number using while loop
*/
int pow_number()
{
    int base, exponent;

    long long result = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter an exponent: ");
    scanf("%d", &exponent);

    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }

    printf("Answer = %lld", result);

    retur 0;
}

/*
Program to check palindrome
*/

int check_palindrome()
{
    int n, reversedInteger = 0, remainder originalInteger;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalInteger = n;

    // reversed integer is stored in variable 
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }

    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    
    return 0;
}

/*
Program to check prime number
*/

int check_prime()
{
    int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        // condition for nonprime number
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
    
    return 0;
}

/*
Display prime numbers between two intervals
*/

int display_prime1()
{
    int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        // condition for nonprime number
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
    
    return 0;
}

/*
Display prime numbers between two intervals
when larger number is entered first
*/

int display_prime2()
{
    int low, high, i, flag, temp;
    printf("Enter two numbers(intevals): ");
    scanf("%d %d", &low, &high);

    //swapping numbers if low is greater than high
    if (low > high) {
        temp = low;
        low = high;
        high = temp;
    }

    printf("Prime numbers between %d and %d are: ", low, high);

    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", low);

        ++low;
    }

    return 0;
}

/*
Check Armstrong Number of n digits
*/

int armstrong_number1()
{
    int number, originalNumber, remainder, result = 0;


    printf("Enter a three digit integer: ");
    scanf("%d", &number);


    originalNumber = number;


    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    return 0;
}

int main(){
    printf("Welcome to this program");
}

/*
Store information and display
it using structure
*/

struct student
{
    char name[50];
    int roll;
    float marks;
} s;

int display_information()
{
    printf("Enter information:\n");

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);


    printf("Displaying Information:\n");

    printf("Name: ");
    puts(s.name);

    printf("Roll number: %d\n",s.roll);

    printf("Marks: %.1f\n", s.marks);

    return 0;
}

/*
Add two distances in inch-feet system
*/

struct Distance
{
    int feet;
    float inch;
} d1, d2, sumOfDistances;

/*
Calculate distances in inch-feet system
*/
int calculate_distances()
{

    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);


    printf("\nEnter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);


    sumOfDistances.feet = d1.feet+d2.feet;
    sumOfDistances.inch = d1.inch+d2.inch;


    // If inch is greater than 12, changing it to feet.

    if (sumOfDistances.inch>12.0)
    {

        sumOfDistances.inch = sumOfDistances.inch-12.0;
        ++sumOfDistances.feet;

    }


    printf("\nSum of distances = %d\'-%.1f\"",sumOfDistances.feet, sumOfDistances.inch);
    return 0;
}

/*
Calculate Difference Between two time periods
*/

struct TIME
{
  int seconds;
  int minutes;
  int hours;
};
void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);

/*
Calculate difference beetween periods
*/

int calculate_difference_periods()
{
    struct TIME startTime, stopTime, diff;

    printf("Enter start time: \n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter stop time: \n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

    // Calculate the difference between the start and stop time period.
    differenceBetweenTimePeriod(startTime, stopTime, &diff);

    printf("\nTIME DIFFERENCE: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
    printf("%d:%d:%d ", stopTime.hours, stopTime.minutes, stopTime.seconds);
    printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}

/*
Calculate difference between time period
*/

void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
    if(stop.seconds > start.seconds){
        --start.minutes;
        start.seconds += 60;
    }

    diff->seconds = start.seconds - stop.seconds;
    if(stop.minutes > start.minutes){
        --start.hours;
        start.minutes += 60;
    }

    diff->minutes = start.minutes - stop.minutes;
    diff->hours = start.hours - stop.hours;
}

/*
Store information in struct
*/

struct estudiante
{
    char name[50],
    int roll,
    float marks;
} s1[10];

int store_information()
{
    int i;

    printf("Enter information of students:\n");

    // storing information
    for(i=0; i<10; ++i)
    {
        s1[i]8roll = i+1

        printf("\nFor roll number%d,\n",s1[i].roll);

        printf("Enter name: ");
        scanf("%s",s1[i].name);

        printf("Enter marks: ");
        scanf("%f",&s1[i].marks);

        printf "\n");
    }

    printf("Displaying Information:\n\n");
    // displaying information
    for(i=0; i<10 ! ++i)
    {
        printf("\nRoll number: %d\n",i+1);
        printf("Name: ");
        puts(s1[i].name) printf("Marks: %.1f",s1[i].marks)
        printf("\n");
    }
    return 0;
}
