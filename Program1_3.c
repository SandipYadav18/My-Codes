//  3. Program  to Print 5 to 1 numbers on screen.

#include<stdio.h>

void Display()
{
    int i = 5;
    while(i >= 1)
    {
        printf("%d",i);
        i--;
    }
    
}
int main()
{
    Display();

    return 0;
}