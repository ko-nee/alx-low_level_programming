#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - count the number of words in a string
 * @str: the input string
 *
 * Return: the number of words
 */

int count_words(char *str)
{
	int i;
	int count = 0;
	int is_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] != ' ')
	{
	if (is_word == 0)
		{
		count++;
		is_word = 1;
		}
	}
	else
	{
	is_word = 0;
	}
	}

	return (count);
}

/**
 * strtow - split a string into words
 * @str: the input string
 *
 * Return: On success, a pointer to the array of words.
 *         On failure or if str is NULL or empty, returns NULL.
 */

char **strtow(char *str)
{
	int i, j;
	int word_len;
	int word_index = 0;
	int word_start = 0;
	int num_words;
	char **words;

	if (str == NULL || *str == '\0')
	{
	return (NULL);
	}

	num_words = count_words(str);

	if (num_words == 0)
	{
	return (NULL);
	}

	words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
	{
	return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] != ' ')
	{
	if (word_start == 0)
	{
	word_start = i;
	}
	}
	else
	{
	if (word_start != 0)
	{
		word_len = i - word_start;
		words[word_index] = malloc((word_len + 1) * sizeof(char));
	if (words[word_index] == NULL)
	{

		for (j = 0; j < word_index; j++)
		{
			free(words[j]);
		}
		free(words);
			return (NULL);
			}
		strncpy(words[word_index], str + word_start, word_len);
		words[word_index][word_len] = '\0';
		word_index++;
		word_start = 0;
		}
	}
}
	if (word_start != 0)
	{
	word_len = strlen(str) - word_start;
	words[word_index] = malloc((word_len + 1) * sizeof(char));
	if (words[word_index] == NULL)
	{

	for (j = 0; j < word_index; j++)
	{
	free(words[j]);
	}
	free(words);
	return (NULL);
	}
	strncpy(words[word_index], str + word_start, word_len);
	words[word_index][word_len] = '\0';
	word_index++;
	}

	words[word_index] = NULL;

	return (words);
}
