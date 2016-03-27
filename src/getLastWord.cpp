/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	char *str1;
	int i, j=0,len = 0,t;
	str1 = (char *)malloc(sizeof(char) * 20);
	if (str == "")
	{
		str1 = "";
		return str1;
	}
	for (i = 0; str[i] != '\0'; i++)
		len++;
	while (str[len] == ' ')
		len--;
	for (i = len; i>=0 && str[i] != ' '; i--)
	{
		str1[j] = str[i];
		j++;
	}
	return str1;
}
