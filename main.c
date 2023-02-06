/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/*add the sum of two numbers
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, sum;
    
    /*
     * Read two numbers from user
     */
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    
    /* Adding both number is simple and fundamental */
    sum = num1 + num2;
    
    /* Prints the sum of two numbers */
    printf("Sum of %d and %d = %d", num1, num2, sum);
    
    return 0;
}

/*perform all arithmetic operation between two numbers
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2;
    int sum,sub,mult,mod;
    float div;
    printf("enter any two numbers:");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    sub=num1-num2;
    mult=num1*num2;
    div=(float)num1/num2;
    mod=num1%num2;
    
    printf("sum=%d\n",sum);
    printf("difference=%d\n",sub);
    printf("product=%d\n",mult);
    printf("quotient=%fn",div);
    printf("modulus=%d",mod);
    
    return 0;
}

/* calculate perimeter of the rectangle. How to find perimeter of a rectangle in C programming
*********************************************************************************************/
/**
 * C program to find perimeter of rectangle
 */
 #include <stdio.h>
 int main()
 {
     float length, width, perimeter;
     /*
     * Input length and width of rectangle from user
     */
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);

    /* Calculate perimeter of rectangle */
    perimeter = 2 * (length + width);

    /* Print perimeter of rectangle */
    printf("Perimeter of rectangle = %f units ", perimeter);

    return 0;
}
/*C Program to find the largest number among three number
***********************************************************************/
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if( num1 >= num3 && num1 >= num3 ){
    
        printf("%d is the largest number.", num1);
    }
    
    else if( num2 >= num1 && num2 >= num3 ){
        printf("%d is the largest number.", num2);
    } 
    
    else if( num3 >= num1 && num3 >= num2 ){
        printf("%d is the largest number.", num3);
    }        
    return 0;
}
/*C program to check entered character vowel or consonant
**************************************************************/
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if( num1 >= num3 && num1 >= num3 ){
    
        printf("%d is the largest number.", num1);
    }
    
    else if( num2 >= num1 && num2 >= num3 ){
        printf("%d is the largest number.", num2);
    } 
    
    else if( num3 >= num1 && num3 >= num2 ){
        printf("%d is the largest number.", num3);
    }        
    return 0;
}
/*C program to print day name of week
*****************************************************/
#include <stdio.h> 
int main()
{
    char ch;
    
    printf("Enter any character: ");
    scanf("%c", &ch);
 
 
    // Condition for vowel checking
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("%c is Vowel.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {     
        printf("%c is Consonant.", ch);
    }
 
    return 0;
}
/*C program to check entered character vowel or consonant.
********************************************************************/
#include <stdio.h> 
int main()
{
    char ch;
    
    printf("Enter any character: ");
    scanf("%c", &ch);
 
 
    // Condition for vowel checking
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("%c is Vowel.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {     
        printf("%c is Consonant.", ch);
    }
 
    return 0;
}
/* C to check prime and armstrong numbers using function
**********************************************************/
#include <stdio.h>
#include <math.h>
 
int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);
 
int main()
{
    int num, flag;
 
    printf("Enter a positive integer: ");
    scanf("%d", &num);
 
    // Checking prime number
    flag = checkPrimeNumber(num);
    if (flag == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
 
    // Checking Armstrong number
    flag = checkArmstrongNumber(num);
    if (flag == 1)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.",num);
    return 0;
}
/*check prime and armstrong numbers using function
*****************************************************************/
#include <stdio.h>
#include <math.h>
 
int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);
 
int main()
{
    int num, flag;
 
    printf("Enter a positive integer: ");
    scanf("%d", &num);
 
    // Checking prime number
    flag = checkPrimeNumber(num);
    if (flag == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
 
    // Checking Armstrong number
    flag = checkArmstrongNumber(num);
    if (flag == 1)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.",num);
    return 0;
}
/*C program to find sum of array elements using recursion
***********************************************************/
#include <stdio.h>
#define MAX_SIZE 100
 
// Function declaration
int sum(int arr[], int start, int len);
 
 
int main()
{
    int arr[MAX_SIZE];
    int num, i, sumofarray;
 
 
    // Inputtin size and elements in array
    printf("Enter size of the array: ");
    scanf("%d", &num);
    printf("Enter elements in the array: ");
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
 
 
    sumofarray = sum(arr, 0, num);
    printf("Sum of array elements: %d", sumofarray);
 
    return 0;
}
 
// Recursively finding the sum of elements in an array.
int sum(int arr[], int start, int len)
{
    // Recursion base condition
    if(start >= len)
        return 0;
 
    return (arr[start] + sum(arr, start + 1, len));
}
/*C program to generate nth fibonacci term using recursion
*********************************************/
#include<stdio.h>
 
int fibonacci(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}
 
int main()
{
    int n,i=0;
    printf("Input the number of terms for Fibonacci Series:");
    scanf("%d",&n);
    printf("\nFibonnaci Series is as follows\n");
    while(i<n)
    {
        printf("%d ",fibonacci(i));
        i++;
    }
 
    return 0;
}
/* C program to check palindrome number using recursion
*****************************************************************/
#include<stdio.h>
 
int fibonacci(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}
 
int main()
{
    int n,i=0;
    printf("Input the number of terms for Fibonacci Series:");
    scanf("%d",&n);
    printf("\nFibonnaci Series is as follows\n");
    while(i<n)
    {
        printf("%d ",fibonacci(i));
        i++;
    }
 
    return 0;
}
