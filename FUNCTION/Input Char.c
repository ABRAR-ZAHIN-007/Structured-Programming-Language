/*2. Function to print an input character value.
Sample input
3
Sample output
Value received from main: 3

Sample input
A
Sample output
Value received from main: A

*/

#include<stdio.h>
void print_char(char ch)
{
    printf("Value received from main: %c",ch);
}
int main()
{
    char c;
    printf("Enter a Character: ");
    scanf(" %c", &c);
    print_char(c);
}
