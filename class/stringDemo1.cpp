/* char array - string (collection of characters)

  1. format %s is used to print or accept string value
  2. OS terminates char array with '\0' (NULL character)

*/

#include <stdio.h>
int isVowel(char);
int isDigit(char);
int isSpace(char);
int isUpper(char);
int isLower(char);

int main()
{
	int scnt = 0;
	int i, spcnt = 0, ucnt = 0, vcnt = 0, lcnt = 0, dcnt = 0;
	char str[120];
	printf("\n Enter Name :");
	gets(str);

	printf("\n Entered name is %s", str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isDigit(str[i]))
			dcnt++;
		if (isVowel(str[i]))
			vcnt++;
		if (isUpper(str[i]))
			ucnt++;
		if (isLower(str[i]))
			lcnt++;
		if (isSpace(str[i]))
			spcnt++;
		if ((((isDigit(str[i])) || (isVowel(str[i])) || (isUpper(str[i])) || (isLower(str[i])) || (isSpace(str[i])))))
			scnt++;
	}
	printf("\n Length = %d", i);
	printf("\n Number of Vowels = %d", vcnt);
	printf("\n Number of Digits = %d", dcnt);
	printf("\n Number of Spaces = %d", spcnt);
	printf("\n Number of Upper = %d", ucnt);
	printf("\n Number of Lower = %d", lcnt);
	printf("\n Special characters = %d", scnt);
	return 0;
}

int isDigit(char c)
{
	if ((c >= '0') && (c <= '9')) // if((ch>=48) && (ch<=57))
		return 1;
	else
		return 0;
}

int isSpace(char ch)
{
	if (ch == 32)
		return 1;
	else
		return 0;
}

int isVowel(char ch)
{
	if ((ch == 'a') || (ch == 'A') || (ch == 'e') || (ch == 'E') || (ch == 'i') || (ch == 'I') || (ch == 'O') || (ch == 'o') || (ch == 'U') || (ch == 'u'))
		return 1;
	else
		return 0;
}

int isUpper(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return 1;
	else
		return 0;
}

int isLower(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return 1;
	else
		return 0;
}
