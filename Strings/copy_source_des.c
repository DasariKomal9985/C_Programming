/* void strcpy ( char d[] . char s[]);
copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character).

Implementation:

void strcpy_1( char d[], char s[])
{
int i = 0;
while( s[i] != '\0')
{
d[i] = s[i];
i++;
}
d[i] = '\0';
}
*/


#include<stdio.h>
#include<string.h>
void mystrcpy(char str2[],char str1[]);
int main()
{
	int ret;
	char str1[20];
	char str2[20];
	printf("enter your name:");
	scanf("%19[^\n]s",str1);
	printf("string first one is %s\n",str1);
	mystrcpy(str2,str1);

}

void mystrcpy(char str2[],char str1[])
{
	int i=0;
	while(str1[i])
	{
		str2[i]=str1[i];
		i++;

	}
	str2[i]='\0';
	printf("string seacond one is %s\n",str2);
}

