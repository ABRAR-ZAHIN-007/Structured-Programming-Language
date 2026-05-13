/*
Q.8
Write a C program that defines a structure 'Rectangle' with members length and breadth. Write a
function to calculate the area of the rectangle using a pointer to the structure. Take input for 3
rectangles and display the rectangle with the largest area.
Example:
Input: Rectangle1: 5, 4
Rectangle2: 6, 3
Rectangle3: 7, 2
Output: Largest Area: 20

*/

#include <stdio.h>


struct Rectangle
{
    int length;
    int breadth;
};

// Function to calculate area using pointer to structure
int calculateArea(struct Rectangle *rect) {
    return rect->length * rect->breadth;
}

int main()
{
    struct Rectangle rects[3];
    int i, maxArea = 0, area;
    int maxIndex = 0;

    // Input 3 rectangles
    for (i = 0; i < 3; i++)
    {
        printf("Enter length and breadth of Rectangle %d: ", i+1);
        scanf("%d %d", &rects[i].length, &rects[i].breadth);
    }

    // Calculate areas and find largest
    for (i = 0; i < 3; i++)
    {
        area = calculateArea(&rects[i]);
        if (area > maxArea) {
            maxArea = area;
            maxIndex = i;
        }
    }

    printf("Largest Area: %d\n", maxArea);

    return 0;
}
