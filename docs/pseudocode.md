- ¿ *str == '%' ?
	- if ()
	- NO
		- ft_putchar(*str)
		- ret++
		- str++
		
	- SI
		- str++
		- int flags_nbr = 0
		- ... while *str == flag
			- str++
			- flags_nbr++
		- ¿ *str == formatter ?
			- SI
				- ¿ compatible_flag (formatter, *str, flags_nbr) ?
					- SI
						- ret += choose_printer(*str, flags_nbr, va_arg)
					- NO
						- ft_pustr_fd("formatter incorrecto", 2)
						- return (NULL)
			- NO
				- ft_putstr_fd("formatter incorrecto", 2)
				- return (NULL)


int printer(funcion, variable, &flags)
	return (funcion(varible, &flags))

char *	string_formatters = "uxXdp..."
void *	funciones = {print_u(unsigned int u), print_d(int d), print_s(char* s)}

typedef struct args{
	u = arg_va[ap, unsigned int];
	...
}params

if (c == '%')
	leer flags
		hasta que encuentre formatter
	encuentra formatter y flags ok
	i = 0
	while (string_formatters [i])
		if (*(s+i) == string_formatter[i])
			ret += printer(funciones[i], args[i], &flags) 