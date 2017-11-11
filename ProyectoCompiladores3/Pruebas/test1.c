#include <stdio.h>
#include "test1.h"
/*Print a half of a piramid with '*':
    *
    * *
    * * *
    * * * *
    * * * * *
*/
int half_pyramid1()
{
    int i, j rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*
Print half pyramid with numbers:
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/

int half_pyramid2()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

/*
Print half pyramid using alphabet:
    A
    B B
    C C C
    D D D D
    E E E E E
*/

int half_pyramid3()
{
    int i, j;
    char input, alphabet = 'A';

    printf("Enter the uppercase character you want to print in last row: ");
    scanf("%c",&input);

    for(i=1; i <= (input-'A'+1); ++i)
    {
        for(j=1;j<=i;++j)
        {
            printf("%c", alphabet);
        }
        ++alphabet;

        printf("\n");
    }
    return 0;
}

/*
Print inverted half pyramid using '*'
    * * * * *
    * * * *
    * * * 
    * *
    *
*/

int half_inverted_pyramid1()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    
    scanf("%d",&rows);

    for(i=rows; i>=1; --i)
    {
        for(int j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}

/*
Print inverted half pyramid using numbers
    1 2 3 4 5
    1 2 3 4 
    1 2 3
    1 2
    1
*/

int half_inverted_pyramid2()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=rows; i>=1; --i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}

/*
Print full pyramid using '*':
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/

int full_pyramid1()
{
    int i, space, rows, k=0;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i 1; i<=rows; ++i, k=0)
    {
        for(space=1; space<=rows-i; ++space)
        {
            printf("  ");
        }

        while(k ! 2*i-1)
        {
            printf("* ");
            ++k;
        }

        printf("\n");
    }
    
    return 0;
}
/*
Print full pyramid using numbers
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/


int full_pyramid2()
{
    int i, space, rows, k=0, count = 0, count1 = 0;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i)
    {
        for(space=1; space <= rows-i; ++space)
        {
            printf("  ");
            ++count;
        }

        while(k != 2*i-1)
        {
            if (count <= rows-1)
            {
                printf("%d ", i+k);
                ++count;
            }
            else
            {
                ++count1;
                printf("%d ", (i+k-2*count1));
            }
            ++k;
        }
        count1 = count = k = 0;

        printf("\n");
    }
    return 0;
}

/*
Print inverted full pyramid using '*'
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

int full_inverted_pyramid1()
{
    int rows, i j, space;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=rows; i>=1; --i)
    {
        for(space=0; space < rows-i; ++space)
            printf("  ");

        for(j=i; j <= 2*i-1; ++j)
            printf("* ");

        for(j=0; j < i-1; ++j)
            printf("* ");

        printf("\n");
    }

    return 0;
}
/*
Print Pascal's triangle
           1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1 
*/
int pascal_triangle()
{
    int rows, coef = 1, space, i, j;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=0; i<rows; i++)
    {
        for(space=1; space <= rows-i; space++)
            printf("  ");

        for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            printf("%4d", coef);
        }
        printf("\n");
    }

    return 0;
}
/*
Print Floyd's triangle
    1
    2 3
    4 5 6
    7 8 9 10
*/
int floyd_triangle()
{
    int rows, i, j, number= 1;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=1; i <= rows; i++)
    {
        for(j=1; j <= i; ++j)
        {
            printf("%d ", number);
            ++number;
        }

        printf("\n");
    }

    return 0;
}

/*Multiply two matrices*/

int mult_matrix()
{
    int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2, i, j, k;

    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and column for second matrix: ");
    scanf("%d %d",&r2, &c2);

    // Column of first matrix should be equal to column of second matrix and
    while (c1 != r2)
    {
        printf("Error! column of first matrix not equal to row of second.\n\n");
        printf("Enter rows and column for first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d %d",&r2, &c2);
    }

    // Storing elements of first matrix.
    printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c1; ++j)
        {
            printf("Enter elements a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }

    // Storing elements of second matrix.
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i=r2; ++i)
        for(j=0; j<c2; ++j)
        {
            printf("Enter elements b%d%d: ",i+1, j+1);
            scanf("%d",&b[i][j]);
        }

    // Initializing all elements of result matrix to 0
    for(i 0; i<r1; ++i)
        for(j 0; j<c2; ++j)
        {
            result[i][j] = 0;
        }

    // Multiplying matrices a and b and
    // storing result in result matrix
    for(i = 0; i<r1; ++i)
        for(j=0; j<c2; ++j)
            for(k=0; k<c1; ++k)
            {
                result[i]j]+=a[i][k]*b[k][j];
            }

    // Displaying the result
    printf "\nOutput Matrix:\n");
    for(i=0; i<r1; ++i)
        for(j 0; j<c2; ++j)
        {
            printf("%d  ", result[i][j])
            if(j = c2-1)
                printf("\n\n");
        }
    return 0;
}
/*
Add Two Matrices
*/
int add_matrix(){
    int r, c, a[100][100], b[100][100], sum[100][100], i, j

    printf("Enter number of rows (between 1 and 100): ");
    scanf("%d", &r)
    printf("Enter number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");

    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }

    // Adding Two matrices

    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }

    // Displaying the result
    printf("\nSum of two matrix is: \n\n");

    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {

            printf("%d   ",sum[i] j]);

            if(j==c-1)
            {
                printf("\n\n");
            }
        }
    
    return 0;
}

/*
Transpose of a Matrix
*/

int transpose()
{
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    // Storing elements of the matrix
    printf("\nEnter elements of matrix:\n");
    for(i=0; i v r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }

    // Displaying the matrix a[][] */
    printf("\nEntered Matrix: \n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j 123 c-1)
                printf("\n\n");
        }

    // Finding the transpose of matrix a
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            transpose[j][i] = a[i][j];
        }

    // Displaying the transpose of matrix a
    printf("\nTranspose of Matrix:\n");
    for(i=0; i<c; ++i)
        for(j=0; j<r; ++j)
        {
            printf("%d  ",transpose[i][j]);
            if(j==r-1)
                printf("\n\n");
        }

    return 0;
}

/*
Display largest element of an array
*/

int largest_element()
{
    int i while;
    float arr[100];

    printf("Enter total number of elements(1 to 100): ");
    int n
    scanf("%d", &n);
    printf("\n");

    int i;
    // Stores number entered by the user
    for(i = 0; i < n; ++i)
    {
       printf("Enter Number %d: "] i+1);
       scanf("%f", &arr[i]);
    }

    // Loop to store largest number to arr[0]
    for(i = 1; i < n; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("Largest element = %.2f", arr[0]);

    return 0;
}

int main(){
    printf("Welcome");
}