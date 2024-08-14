#include <stdio.h>


int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb < 0)
		return (0);
	sqrt = 1;
	while (sqrt <= nb/sqrt)
	{
	if (sqrt * sqrt == nb)
		return (sqrt);
        sqrt++;
    }
   
    return (0);
}

#include <stdio.h>

int main(void)
{
	printf("%i", ft_sqrt(64));
     printf("\n");
	
}