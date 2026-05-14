/*
15. Write a program in C to reverse the words in a string.
Sample Input
“My name is Andy”
Sample Output
“Andy is name My”

Sample Input
“Abc 123 7&*&*”
Sample Output
“7&*&* 123 Abc”

*/


#include <stdio.h>

int main()
{
    char str[1000];
    int i = 0, end, start;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0')
    {
        i++;
    }
    end = i - 1;

    while (end >= 0)
    {
        // স্পেস স্কিপ করা
        while (end >= 0 && str[end] == ' ')
        {
            end--;
        }

        if (end < 0) break;

        start = end;
        while (start >= 0 && str[start] != ' ')
        {
            start--;
        }

        i = start + 1;
        while (i <= end)
        {
            printf("%c", str[i]);
            i++;
        }

        // দুটি শব্দের মাঝে স্পেস দাও যদি বাকি থাকে
        if (start > 0)
        {
            printf(" ");
        }

        // পরের শব্দের জন্য end আপডেট করো
        end = start - 1;
    }

    printf("\n");
    return 0;
}












/*
#include <stdio.h>

int main()
{
    char str[1000], words[100][100];
    int i = 0, j = 0, k = 0;
    int wordCount = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            words[wordCount][j] = '\0'; // একটি শব্দ শেষ
            wordCount++;
            j = 0; // নতুন শব্দে অক্ষর যোগ শুরু
        }
        else
        {
            words[wordCount][j] = str[i];
            j++;
        }
        i++;
    }

    // শেষ শব্দও যুক্ত করি
    words[wordCount][j] = '\0';
    wordCount++; // মোট শব্দ সংখ্যা

    // Step 2: শব্দগুলো উল্টো করে প্রিন্ট করা
    for (i = wordCount - 1; i >= 0; i--)
    {
        // প্রতিটি শব্দের অক্ষর প্রিন্ট করা
        j = 0;
        while (words[i][j] != '\0')
        {
            printf("%c", words[i][j]);
            j++;
        }
        if (i > 0)
        {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
*/
