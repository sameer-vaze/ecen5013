#include <stdio.h>
#include <stdint.h>

char str1[17] = "This is a string.";
char str2[18] = "some NUMmbers12345";
char str3[30] = "Does it reverse \n\0\t correctly?";

char reverse(char * str, int length);	//function declaration

char reverse(char * str, int length)	//function definition
{
	unsigned int len = (unsigned int) length;	//typecast to unsigned integer type
	if(len == 0 || str == NULL)	//checks for conditions that cause failure
	{
		return 1;
	}
	else if(len == 1)	//checks if only one bytes is passed
	{
		return 0;	//does not reverse and returns success
	}
	else	//if conditions are valid for reverse
	{
		char *start, *end, temp;
		start = str;
		end = str + len-1;
		if((len%2) == 0)	//if length is even
		{
			do
			{
				temp  = *start;
				*start = *end;
				*end = temp;
				start ++;
				end--;
			}while(start != end+1);	//check for middle
		}
		else	//if length is odd
		{
			do
			{
				temp  = *start;
				*start = *end;
				*end = temp;
				start ++;
				end--;
			}while(start != end);	//check for middle
		}
		return 0;	//returns success
	}
}

void main()
{
	char res = reverse(str1, 17);
	for(int i = 0;i < 17;i++)
	{
		printf("%c",str1[i]);
	}
	printf("\n");
	res = reverse(str2, 18);
	for(int i = 0;i < 18;i++)
	{
		printf("%c",str2[i]);
	}
	printf("\n");
	res = reverse(str3, 30);
	for(int i = 0;i < 30;i++)
	{
		printf("%c",str3[i]);
	}

	printf("\n");
	printf("++++++++IN HEX++++++++\n");

	for(int i = 0;i < 17;i++)
	{
		printf("%x ",str1[i]);
	}
	printf("\n");
	res = reverse(str2, 18);
	for(int i = 0;i < 18;i++)
	{
		printf("%x ",str2[i]);
	}
	printf("\n");
	res = reverse(str3, 30);
	for(int i = 0;i < 30;i++)
	{
		printf("%x ",str3[i]);
	}
	printf("\n");

}