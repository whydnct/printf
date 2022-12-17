// TODO Cómo conseguir que imprima caracteres especiales pasados por consola.

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

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
	(void)argv;
	int nbr;
	char	*a = "ca\na";
	unsigned int nbr2;
	unsigned int nbr3;

	nbr = -1;
	nbr2 = (unsigned int)nbr;
	nbr3 = -13;
	printf("%x\n", -6546213);
	printf("%d\n", nbr3);
}
