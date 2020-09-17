# FT_PRINTF

ft_printf

CHALLANGE:

  make my own printf function.

ft_printf must achieve the following mandatory requirements:

Manage the following conversions: s, p, d, i, o, u, x, X, c, f.
Manage %%
Manage the flags #, 0, -, + & space
Manage the minimum field-width
Manage the precision
Manage the flags hh, h, l, ll.


Using the project:
To compile, run make. This will compile libftprintf.a. To use, include ft_printf.h (located inside includes directory) and use just like printf:

#include "ft_printf.h"

int				main(void)
{
	ft_printf("%s, %s!\n", "Hello", "world");
	return (0);
}
Then compile with a program:

gcc -Wall -Werror -Wextra main.c libftprintf.a -I ft_printf.h
