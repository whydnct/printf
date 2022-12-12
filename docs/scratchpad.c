// [?] Cómo conseguir que imprima caracteres especiales pasados por consola.

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
 
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

int main (int argc, char **argv)
{
	(void)argc;
	char 	c;
	void	*ptr;
	
	ptr = 10;
	c = '\n';
	char *str = argv[1];
	char *str2 = "na\nda";
	ft_putstr_fd(str, 1);
	write(1, &c, 1);
	ft_putstr_fd(str2, 1);
	write(1, &c, 1);
	printf("%p\n", ptr);
	ptr = &c;
	printf("%p\n", ptr);
}
