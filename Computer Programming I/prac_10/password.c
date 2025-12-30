/* Question 4

Websites often impose rules for passwords. Suppose a particular website uses the following rules:

The password must contain between 8 and 16 characters, inclusive
The password must contain at least one occurrence of any of the following characters: '_', '@', '+', '!', '&'
The password must end with a lowercase letter ('a' to 'z') or a digit ('0' to '9')
The sum of all digits ('0' to '9') in the password must exceed 10.
A password is valid if it satisfies all of the above rules. Write each of the following functions to check whether a string is a valid password:

(i)	return true if the password is valid 
bool validate_password(char password[])
(ii) return true if the password contains between 8 and 16 characters, inclusive
bool check_valid_length(char password[])
(iii) return true if the password contains at least one occurrence of a special character
bool contains_special_char(char password[])
(iv) return true if the password ends with a lowercase letter or a digit
bool check_valid_ending(char password[]) 
(v)	return the sum of all digits in the password
int get_digit_sum(char password[])
(vi) return true if ch is equal to any of the following characters: '_', '@', '+', '!', '&'
bool is_special_char(char ch)
(vii) return the last character in password; return the null character ('\0') if password is the empty string (i.e. if it contains no characters)
char get_last_char(char password[]) 
 	 
Note: 
The function prototypes specified above must be used.
The functions can be implemented in any order.
On each of the following pages copy and paste your implementation for the specified function. 
Each function will be tested independently by the automatic grader.
Other than writing these functions, there is no requirement to write any additional code (for example, there is no requirement to write a main function). */

/* 1. Write function: char get_last_char(char password[])

The function should return the last character in password. If password is the empty string (i.e. if it contains no characters), the function should return the null character ('\0'). */

/* 2. Write function: bool is_special_char(char ch)

The function should return true if ch is equal to any of the following characters:  '_', '@', '+', '!', '&' */

/* 3. Write function: int get_digit_sum(char password[]) 

The function should return the sum of all digits in password. */

/* 4. Write function: bool check_valid_ending(char password[])

The function should return return true if password ends with a lowercase letter ('a' to 'z') or a digit ('0' to '9'). 

Note:
This function should call the get_last_char function. */

/* 5. Write function: bool contains_special_char(char password[])

The function should return return true if password contains at least one occurrence of any of the following characters:  '_', '@', '+', '!', '&'
 
Note:
This function should call the is_special_char function. */

/* 6. Write function: bool check_valid_length(char password[])

The function should return true if password contains between 8 and 16 characters, inclusive. */

/* 7. Write function: bool validate_password(char password[])

The function should return true if password satisfies all rules.

Your function will be automatically tested using the functions calls shown in the table below. 

Note:
This function should call the check_valid_length, contains_special_char, check_valid_ending and get_digit_sum functions. */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 100

char get_last_char(char password[]);
bool is_special_char(char ch);
int get_digit_sum(char password[]);
bool check_valid_ending(char password[]);
bool contains_special_char(char password[]);
bool check_valid_length(char password[]);
bool validate_password(char password[]);

int main(void)
{
    char password[MAX_LEN];

    printf("1) The password must contain between 8 and 16 characters, inclusive\n");
    printf("2) The password must contain at least one occurrence of any of the following characters: '_', '@', '+', '!', '&'\n");
    printf("3) The password must end with a lowercase letter ('a' to 'z') or a digit ('0' to '9')\n");
    printf("4) The sum of all digits ('0' to '9') in the password must exceed 10\n");

    printf("\nPlease enter a password that complies with the restrictions:\n");

    scanf("%s", password);

    if (validate_password(password))
    {
        printf("\nPassword accepted.\n");
    }
    else
    {
        printf("\nPassword not accepted. Please ensure your password complies with the restrictions.\n");
        return -1;
    }

    return 0;
}

char get_last_char(char password[])
{
    int length = strlen(password);
    
    if (!length)
    {
        return '\0';
    }
    else
    {
        return password[length - 1];
    }
}

bool is_special_char(char ch)
{
    return (ch == '_' || ch == '@' || ch == '+' || ch == '!' || ch == '&');
}

int get_digit_sum(char password[])
{
    int i, sum = 0, length = strlen(password);

    unsigned char ch;

    for (i = 0; i < length; i++)
    {
        ch = password[i];

        if (isdigit(ch))
        {
            sum += ch - '0';
        }
    }
    
    return sum;
}

bool check_valid_ending(char password[])
{
    char last = get_last_char(password);

    return (isdigit(last) || islower(last));
}

bool contains_special_char(char password[])
{
    int i, length = strlen(password);

    for (i = 0; i < length; i++)
    {
        if (is_special_char(password[i]))
        {
            return true;
        }
    }
    
    return false;
}

bool check_valid_length(char password[])
{
    int length = strlen(password);

    return (length >= 8 && length <= 16);
}

bool validate_password(char password[])
{
    return (contains_special_char(password) 
            && check_valid_ending(password) 
            && check_valid_length(password) 
            && get_digit_sum(password) > 10);
}





