#include <stdio.h>
#include <string.h>

int main()
{
	char string[1000];
	printf("print string: ");
	scanf(" %[^\t\n]s",&string);
	
	for (int i=strlen(string); i>=1; i--)
	{
		printf("%c", string[i-1]);
	}
	
	return 0;
}