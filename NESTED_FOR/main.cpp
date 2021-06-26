#include<iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int i, j;
    int** m = new int* [10];
    for (i = 0; i < 10; i++)
        m[i] = new int[10];
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            m[i][j] = (i + 1) * (j + 1);
    for (i = 0; i < 10; i++) 
    {
        for (j = 0; j < 10; j++)
            printf("%2d ", m[i][j]);
        printf("\n");
    }
    return 0;
}