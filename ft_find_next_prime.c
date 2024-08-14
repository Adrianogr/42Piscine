
int	ft_is_next_prime(int nb)
{

int i = nb + 1;

	
	
	if (nb % i == 0 )
    {
		return (0);    
       i++;
    }
    return (1);  
    }   
   
    


#include <stdio.h>

int main(void)
{
	printf("%i", ft_is_next_prime(3));
     printf("\n");
	
}