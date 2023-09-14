#include "main.h"
/**
 * _isupper - entry point
 * Description - checks if letter is uppercase
 * @c: int letter to check
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
    int check_val;

    if (c >= 65 && c <= 90)
    {
	    check_val = 1;
    }
    else
    {
	    check_val = 0;
    }
    return (check_val);
}
