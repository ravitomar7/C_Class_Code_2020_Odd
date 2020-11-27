#include <stdio.h>

int main()
{
    float a[3][3], temp, det = 0;

    int xy[2], count = 0, i, j, sign = 1;
    //INPUT
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    //Process
    for (i = 0; i < 3; i++)//first Row loop..
    {
        count = 0;
        

//Formula we created:  temp=a[1][x]*a[2][y]-a[2][x]*a[1][y]
for (j = 0; j < 3; j++)//To get Values of x & y in our formula...
        {
            if (i != j)
            {
                xy[count] = j;
                count++;
            }
        }
        printf("\na[1][%d] * a[2][%d]) - (a[2][%d] * a[1][%d]", xy[0], xy[1], xy[0], xy[1]);
        temp = (a[1][xy[0]] * a[2][xy[1]]) - (a[2][xy[0]] * a[1][xy[1]]);
        printf("\nTerm 1 is: %f, x is %d and y is %d", temp, xy[0], xy[1]);
        det = det + a[0][i] * temp * sign;
        sign = sign * (-1);
    }

    //Print

    printf("\nDeterminant is %f", det);

    return 0;
}