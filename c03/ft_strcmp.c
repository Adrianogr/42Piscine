#include <stdbool.h>
#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
    int sum;
    
	i = 0;
	sum = 0;
	
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
    	sum += s1[i] - s2[i];
	}
	if (sum < 0)
	{
	return (-1);
	}
	else if (sum > 0)
	{
	    return (1);
	}
	else return (0);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_strcmp("Hello", "Heqqllo1"));
	printf("\n%d", ft_strcmp("Hello", "He"));
	printf("\n%d", ft_strcmp("He", "Hello"));
	printf("\n%d", ft_strcmp("Hello", "Hello"));
}

