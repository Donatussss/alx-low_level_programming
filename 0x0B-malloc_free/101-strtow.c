#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * space_counter - a function that counts space breaks
 * in a string
 * @str: string to count space breaks
 * Return: space break count
 */

int space_counter(char *str)
{
	int i = 0, space_count = 0, space_condition = 0, word_start = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) == 32 && !space_condition && word_start)
		{
			space_count++;
			space_condition = 1;
		}

		else if (*(str + i) != 32 && space_condition)
		{
			space_condition = 0;
		}

		if (*(str + i) != 32 && !word_start)
			word_start = 1;

		i++;
	}

	if (space_condition)
		space_count--;

	if (!word_start)
		return (-1);

	return (space_count);
}

/**
 * word_split_counter - a function that counts word lengths space
 * separated string
 * @str: string to split on space breaks
 * @str_arr: the array of strings
 * @word_len_arr: an array to store the word lengths
 * Return: str_arr
 */

char **word_split_counter(char *str, char **str_arr, int *word_len_arr)
{
	int i = 0, space_condition = 0;
	int word_start = 0, word_len = 0, j = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) == 32 && !space_condition && word_start)
		{
			space_condition = 1;
			*(str_arr + j) = malloc(sizeof(char) * word_len);
			if (*(str_arr + j) == NULL)
				return (NULL);
			*(word_len_arr + j) = word_len;
			word_len = 0;
			j++;
		}
		else if (*(str + i) != 32 && !space_condition && word_start)
			word_len++;
		else if (*(str + i) != 32 && space_condition)
		{
			space_condition = 0;
			word_len++;
		}

		if (*(str + i) != 32 && !word_start)
		{
			word_start = 1;
			word_len++;
		}
		i++;
	}

	if (!space_condition && word_start)
	{
		*(str_arr + j) = malloc(sizeof(char) * word_len);
		if (*(str_arr + j) == NULL)
			return (NULL);
		*(word_len_arr + j) = word_len;
	}

	return (str_arr);
}

/**
 * word_start - a function that counts word starts
 * in a string
 * @str: string to count word starts
 * @word_start_arr: array to store word start numbers
 * Return: array with word start indexes
 */

int *word_start(char *str, int *word_start_arr)
{
	int i = 0, space_count = 0, space_condition = 0, word_start = 0, j = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) == 32 && !space_condition && word_start)
		{
			space_count++;
			space_condition = 1;
		}

		else if (*(str + i) != 32 && space_condition)
		{
			space_condition = 0;
			*(word_start_arr + j) = i;
			j++;
		}

		if (*(str + i) != 32 && !word_start)
		{
			word_start = 1;
			*(word_start_arr + j) = i;
			j++;
		}

		i++;
	}

	return (word_start_arr);
}

/**
 * strtow - a function that splits a string into words
 * Words are separated by spaces
 * Each element of this array should contain a single word,
 * null-terminated
 * The last element of the returned array should be NULL
 * @str: string to be split
 * Return: NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 */

char **strtow(char *str)
{
	int i = 0, j = 0, space_count = 0, num = 0;
	char **arr;
	int *word_len_arr;
	int *word_start_arr;

	space_count = space_counter(str);
	if (space_count < 0)
		return (NULL);
	arr = malloc(sizeof(char *) * (space_count + 2));
	word_len_arr = malloc(sizeof(int) * (space_count + 1));

	if (arr == NULL || word_len_arr == NULL)
		return (NULL);
	arr = word_split_counter(str, arr, word_len_arr);

	if (arr == NULL)
		return (NULL);
	word_start_arr = malloc(sizeof(int) * (space_count + 1));
	if (word_start_arr == NULL)
		return (NULL);

	word_start(str, word_start_arr);

	while (i < (space_count + 1))
	{
		num = *(word_start_arr + i);
		j = 0;
		while (j < *(word_len_arr + i))
		{
			*(*(arr + i) + j) = *(str + num + j);
			j++;
		}
		i++;
	}
	free(word_start_arr);
	free(word_len_arr);
	*(arr + i) = NULL;

	return (arr);
}
