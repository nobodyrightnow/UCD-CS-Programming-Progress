/* Write a C program to display the table shown below: 

7	10	13	16
14	17	20	23
21	24	27	30
28	31	34	37
35	38	41	44
 	 	 	 
Note:
Your program should not use scanf to read any values from the console.
To vertically align each column, use the format specifier %4d when printing each value.

Hint:
Use nested loops (an outer and an inner loop) to create the table. 
Look for patterns between the values shown on each row and column in the table. */

int main(void) {
    int i, j, n = 7;

    for (i = 1; i <= 5; i++) 
    {
        for (j = 0; j < 4; j++) 
        {
            printf("%4d", n*i + 3*j);
        }
        printf("\n");
    }
}