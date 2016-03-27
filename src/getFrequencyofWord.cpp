/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int c = 0, i, len = 0, j, flag = 0;
	for (i = 0; word[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (j < len)
		{
			if (str[i] == word[j])
			{
				i++;
				j++;
			}
			else break;
		}
		if (j == len)
		{
			flag = 1;
			c++;
			i--;
			if (len>1)
			{
				if (str[i] == str[i - 1])
					i--;
			}
		}
	}
	if (flag == 0)  return 0;
	else return c;
}
int c = 0, i = 0, j,len=0,k;
int count_word_int_str_way_2_recursion(char *str, char *word){
	if(str[i]=='\0')
		return c;
	else
	{
		for (k = 0; word[k] != '\0'; k++)
			len++;
		j = 0;
		while (j < len)
		{
			if (str[i] == word[j])
			{
				i++;
				j++;
			}
			else break;
		}
		if (j == len)
		{
			c++;
			i--;
			if (len>1)
			{
				if (str[i] == str[i - 1])
					i--;
			}
		}
		return  count_word_int_str_way_2_recursion(str, word);
	}
}

