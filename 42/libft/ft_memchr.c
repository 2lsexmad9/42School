void *ft_memchr(const void *s, int c, size_t n)
{
	int i;
	unsigned char *ptr;
	unsigned char character;

	ptr = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == character)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
int main(void)
{
	char src[50] = "mahmudulhasanjony";
	char *ret;

	ret = ft_memchr(src, 's', 15);
	printf("%s", ret);
	return (0);
}
