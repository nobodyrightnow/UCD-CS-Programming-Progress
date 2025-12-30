/* Write a C program to count how many times a substring occurs in a file where the case of the characters is ignored.

Use the fgets function to read each line in turn from the file and the scanf function to read the substring and the filename from the console.

For example, given the file batman.txt (available on Moodle) which contains:

Hello, Batman! We meet again!
No acrobatics or combat will save you now!!
Now, take me to the bat cave...
 
Here is a sample run of the program:

Enter the substring:
bat
Enter the filename:
batman.txt
The substring bat occurs 4 times */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 500

int main(void)
{
	char filename[MAX_LEN], sub[MAX_LEN];
	int count = 0;
	FILE *fp;

	/* read the substring using scanf; the null terminator is
	   added to the end of the string */
	printf("Enter the substring:\n");
	scanf("%s", sub);

	/* read the filename using scanf; the null terminator is
	   added to the end of the string */
	printf("Enter the filename:\n");
	scanf("%s", filename);

	/* open the file for input */
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("Error opening file\n");
		return -1;
	}

    /** Write your code here **/
    int i;
    char lower_sub[MAX_LEN];
    
    for (i = 0; i < strlen(sub); i++)
    {
        lower_sub[i] = tolower(sub[i]);
    }
    
    lower_sub[i] = '\0';
    
    char word[MAX_LEN];
    
    while (fscanf(fp, "%s", word) == 1)
    {
        for (i = 0; i < strlen(word); i++)
        {
            word[i] = tolower(word[i]);
        }
        
        if (strstr(word, lower_sub) != NULL)
        {
            count++;
        }
    }

	/* close the file */
	fclose(fp);

	/* display output */
	printf("The substring %s occurs %d times\n", sub, count);

	return 0;
}

