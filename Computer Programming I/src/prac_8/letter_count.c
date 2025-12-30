/* Write a C program to read every character from the file Wuthering_Heights.txt (the ASCII encoding version of this novel is available on Moodle) and display the number of occurrences of each lowercase and uppercase letter in the file.

The output of your program should be exactly as shown in the table below, where each row of the table should be displayed using a printf statement as follows:
   printf("%6c %6d %6c %6d\n", ...); */

#include <stdio.h> 
#include <ctype.h>

int main(void) 
{
	int ch; /* note: use int type for ch, not char */
	int counts_lower[26] = {0};
	int counts_upper[26] = {0};

	/* open file for input */
	FILE *fp = fopen("res/Wuthering_Heights.txt", "r");  
	if (fp == NULL)
	{
		printf("Error opening file\n");
		return -1; 
	}

	/** Write your code here **/
	while ( (ch = fgetc(fp)) != EOF)
	{
	    if (isupper(ch))
	    {
	        counts_upper[ch - 'A']++;
	    }
	    else if (islower(ch))
	    {
	        counts_lower[ch - 'a']++;
	    }
	}
	int i;
	for (i = 0; i < 26; i++)
	{
	    printf("%6c %6d %6c %6d\n", i + 'a', counts_lower[i], i + 'A', counts_upper[i]);
	}
	
	/* close the file */
	fclose(fp);

	return 0; 
}