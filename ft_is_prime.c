


int	ft_is_prime(int nb)
{

int i = 2;

	
	while (i <= nb/2)
	{
	if (nb % i == 0 )
		return (0);
        
        i++;
    }
    
   
    return (1);
}

#include <stdio.h>

int main(void)
{
	printf("%i", ft_is_prime(3));
     printf("\n");
	
}