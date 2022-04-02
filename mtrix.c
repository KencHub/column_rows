#include<stdio.h>

int main(void)
{


    /*This allows user to enter numbers from 1-16 and output the numbers in a 4 by 4 arrangement.
    This can also be modified in another method*/
    //When enter first digits make a space before another digit.

    //r1 series represent rows
    //c series represent 2nd rows
    //d series represent 3rd rows
    //x series represent the last row


    int  r1, r2, r3, r4, c1,c2, c3, c4, d1, d2, d3, d4, x1, x2, x3, x4, co, ro, di;

    printf("Enter the numbers from 1-16 in any other: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &r1, &r2, &r3, &r4, &c1, &c2, &c3, &c4, &d1, &d2, &d3, &d4, &x1, &x2, &x3, &x4);
    
    //calculating the sum of rows, diagonal and columns
    ro = r1 + r2 + r3 + r4;
    co = r1 + c2 + d3 + x4;
    di = r1 + c2 + d3 + x4;

    printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n", r1, r2, r3, r4, c1, c2, c3, c4, d1, d2, d3, d4, x1, x2, x3 ,x4);
    printf("Rows Sums: %d %d %d %d\n", ro, ro, ro, ro);
    printf("Column Sum: %d %d %d %d\n", co, co, co, co);
    printf("diagonal Sum: %d %d\n", di, di);

    return 0;
}