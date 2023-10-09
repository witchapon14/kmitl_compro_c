#include<stdio.h>
int	main()
{
	char str[20];
	int i = 0;
	printf(" *** To Upper Case ***");
	printf("\nEnter a string : ");
	scanf("%[^\n]",str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i]-=32;		
		i++;
	}
	printf("Output : %s",str);
}