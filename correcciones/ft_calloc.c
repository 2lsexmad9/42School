#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (count > SIZE_MAX / size)
		return (NULL);
	array = malloc(count * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (count * size));
	return (array);
}
