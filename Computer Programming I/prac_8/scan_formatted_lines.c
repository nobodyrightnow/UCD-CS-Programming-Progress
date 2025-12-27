/* Consider a text file cars.txt (available on Moodle) that contains records formatted as follows: each line contains an id (int), a make of car (string), the car's power type (string) and the car's value (double).

Write a C program to read each record from the file and display all records with power type "ELECTRIC" or "HYBRID" in JSON format. 
 
For example, given the record:
  1 BMW ELECTRIC 65000.00
the corresponding JSON format is:
  { "id": 1, "make": "BMW", "power": "ELECTRIC", "value": 65000.00 }
 
Hint: use function fscanf(fp, "%d%s%s%lf", ...) to read each record from the file.  */

#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

int main(void) 
{
    /* declare variables */
    FILE *fp;

    /* open file as an input file */
    fp = fopen("res/cars.txt", "r"); 
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return -1; 
    }

    
    /** Write your code here **/
    int id;
    char make[MAX_LEN], power[MAX_LEN];
    double value;
    
    while (fscanf(fp, "%d %s %s %lf", &id, make, power, &value) == 4)
    {
        if (strcmp(power, "ELECTRIC") == 0 || strcmp(power, "HYBRID") == 0)
        {
            printf("{ \"id\": %d, \"make\": \"%s\", \"power\": \"%s\", \"value\": %.2lf }\n", id, make, power, value);
        }
    }

    /* close the file */
    fclose(fp);
   
    return 0;
}