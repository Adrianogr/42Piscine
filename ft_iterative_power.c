int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	
    return (nb * ft_iterative_power(nb , power-1));
	
}

#include <stdio.h>

int main(void)
{
	printf("%i", ft_iterative_power(5,3 ));
	
}
