/*
10. Write a program in C to check whether a string is a palindrome or not. **
Sample Input
“My name is andy”
Sample Output
no

Sample Input
“madam”
Sample Output
yes

*/
#include<stdio.h>
int main()
{
    printf("Enter a string: \n");
    char str1[50];
    char str2[50];
    gets(str1);

    int i=0, len=0, j=0;

    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(i=len-1,j=0; i>=0; i--, j++)  //for (initialization; condition; update)

    {
        str2[j] = str1[i];
    }
    str2[j] = '\0';

    printf("After reverse: %s\n", str2);


    // Compare each character of str1 and str2
    i = 0;
    int isPalindrome = 1;  // assume it's a palindrome

    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            isPalindrome = 0;
            break;
        }
        i++;
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
