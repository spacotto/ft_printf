/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:26:18 by spacotto          #+#    #+#             */
/*   Updated: 2026/01/28 15:58:27 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/printf.h"

static int total = 0;
static int passed = 0;

void	check(int c, int ft)
{
	printf("\n Return value: ");
	ft = ft - 11; 					//Substract the value of the COLORS 7 + 4
	printf(YELLOW "%d" RESET, ft);
	printf(" / ");
	c = c - 11; 					//Substract the value of the COLORS 7 + 4
	printf(CYAN "%d\n" RESET, c);
	total++;
	if (c == ft)
	{
		passed++;
		printf(BOLD_CYAN " OK! %d / %d\n\n" RESET, passed, total);
	}
	else
		printf(BOLD_MAGENTA " KO! %d / %d\n\n" RESET, passed, total);
}

int	main()
{
	puts("\n ============================================================================");
	puts(" FT_PRINTF: COMPREHENSIVE TESTS");
	puts(" ============================================================================");
	puts(YELLOW " If you see this color, you're seeing FT_PRINTF output." RESET);
	puts(CYAN " If you see this color, you're seeing the PRINTF output.\n" RESET);

	puts(" EMPTY FORMAT");
	puts(" ----------------------------------------------------------------------------");
	{
		int ft = ft_printf(YELLOW "" RESET);
		ft_printf(YELLOW " (empty)\n" RESET);
		int c = printf(CYAN "" RESET);
		printf(CYAN " (empty)\n" RESET);
		
		check(c, ft);
	}

	puts(" FORMAT NO FLAG");
	puts(" ----------------------------------------------------------------------------");
	{
		int ft = ft_printf(YELLOW " cspdiuxX" RESET);
		printf("\n");
		int c = printf(CYAN " cspdiuxX" RESET);
		printf("\n");
		
		check(c, ft);
	}

	puts(" PRINT %c");
	puts(" ----------------------------------------------------------------------------");
	{
		char ch = 'C';

		int ft = ft_printf(YELLOW " %c" RESET, ch);
		printf("\n");
		int c = printf(CYAN " %c" RESET, ch);
		printf("\n");

		check(c, ft);
	}

	puts(" PRINT %s");
	puts(" ----------------------------------------------------------------------------");
	{
		char s[1024] = "Hello World!";

		int ft = ft_printf(YELLOW " %s" RESET, s);
		printf("\n");
		int c = printf(CYAN " %s" RESET, s);
		printf("\n");

		check(c, ft);
	}

	puts(" EMPTY STRING");
	puts(" ----------------------------------------------------------------------------");
	{
		char s[1024] = "";
		
		ft_printf(YELLOW " (empty)\n" RESET);
		int ft = ft_printf(YELLOW "%s" RESET, s);
		printf(CYAN " (empty)\n" RESET);
		int c = printf(CYAN "%s" RESET, s);

		check(c, ft);
	}

	puts(" MULTIPLE EMPTY STRINGS");
	puts(" ----------------------------------------------------------------------------");
	{
		char s1[1024] = "";
		char s2[1024] = "";
		char s3[1024] = "";
		
		ft_printf(YELLOW " (empty)\n" RESET);
		int ft = ft_printf(YELLOW "%s%s%s" RESET, s1, s2, s3);
		printf(CYAN " (empty)\n" RESET);
		int c = printf(CYAN "%s%s%s" RESET, s1, s2, s3);

		check(c, ft);
	}

	puts(" NULL STRING");
	puts(" ----------------------------------------------------------------------------");
	{
		char *s = NULL;
		
		int ft = ft_printf(YELLOW " %s" RESET, s);
		printf("\n");
		int c = printf(CYAN " %s" RESET, s);
		printf("\n");

		check(c, ft);
	}

	puts(" PRINT %p");
	puts(" ----------------------------------------------------------------------------");
	{
		char s[1024] = "Hello World!";
		
		int ft = ft_printf(YELLOW " %p" RESET, &s[0]);
		printf("\n");
		int c = printf(CYAN " %p" RESET, &s[0]);
		printf("\n");

		check(c, ft);
	}

	puts(" NULL POINTER");
	puts(" ----------------------------------------------------------------------------");
	{
		void *p = NULL;

		int ft = ft_printf(YELLOW " %p" RESET, p);
		printf("\n");
		int c = printf(CYAN " %p" RESET, p);
		printf("\n");

		check(c, ft);
	}

	puts(" PRINT %d");
	puts(" ----------------------------------------------------------------------------");
	{
		int d = 42;
		
		int ft = ft_printf(YELLOW " %d" RESET, d);
		printf("\n");
		int c = printf(CYAN " %d" RESET, d);
		printf("\n");

		check(c, ft);
	}

	puts(" PRINT %i");
	puts(" ----------------------------------------------------------------------------");
	{
		int i = 42;

		int ft = ft_printf(YELLOW " %d" RESET, i);
		printf("\n");
		int c = printf(CYAN " %i" RESET, i);
		printf("\n");

		check(c, ft);
	}

	puts(" ZERO");
	puts(" ----------------------------------------------------------------------------");
	{
		int i = 0;
		
		int ft = ft_printf(YELLOW " %d" RESET, i);
		printf("\n");
		int c = printf(CYAN " %d" RESET, i);
		printf("\n");

		check(c, ft);
	}
	
	puts(" INT MIN");
	puts(" ----------------------------------------------------------------------------");
	{
		int i = -2147483648;

		int ft = ft_printf(YELLOW " %d" RESET, i);
		printf("\n");
		int c = printf(CYAN " %d" RESET, i);
		printf("\n");

		check(c, ft);
	}

	puts(" INT MAX");
	puts(" ----------------------------------------------------------------------------");
	{
		int i = 2147483647;
		
		int ft = ft_printf(YELLOW " %d" RESET, i);
		printf("\n");
		int c = printf(CYAN " %d" RESET, i);
		printf("\n");

		check(c, ft);
	}

	puts(" PRINT %u");
	puts(" ----------------------------------------------------------------------------");
	{
		unsigned int u = 42;
		
		int ft = ft_printf(YELLOW " %u" RESET, u);
		printf("\n");
		int c = printf(CYAN " %u" RESET, u);
		printf("\n");

		check(c, ft);
	}

	puts(" PRINT UNSIGNED INT MAX");
	puts(" ----------------------------------------------------------------------------");
	{
		unsigned int u = 4294967295;
		
		int ft = ft_printf(YELLOW " %u" RESET, u);
		printf("\n");
		int c = printf(CYAN " %u" RESET, u);
		printf("\n");

		check(c, ft);
	}

	puts(" PRINT UNSIGNED 0");
	puts(" ----------------------------------------------------------------------------");
	{
		unsigned int u = 0;
		
		int ft = ft_printf(YELLOW " %u" RESET, u);
		printf("\n");
		int c = printf(CYAN " %u" RESET, u);
		printf("\n");

		check(c, ft);
	}

	puts(" PRINT UNSIGNED NEGATIVE BEHAVIOUR");
	puts(" ----------------------------------------------------------------------------");
	{
		unsigned int u = -42;
		
		int ft = ft_printf(YELLOW " %u" RESET, u);
		printf("\n");
		int c = printf(CYAN " %u" RESET, u);
		printf("\n");

		check(c, ft);
	}

	puts(" PRINT %X");
	puts(" ----------------------------------------------------------------------------");
	{
		unsigned int i = 2882400009;

		int ft = ft_printf(YELLOW " %X" RESET, i);
		printf("\n");
		int c = printf(CYAN " %X" RESET, i);
		printf("\n");

		check(c, ft);
	}

	puts(" PRINT %x");
	puts(" ----------------------------------------------------------------------------");
	{
		unsigned int i = 2882400009;

		int ft = ft_printf(YELLOW " %x" RESET, i);
		printf("\n");
		int c = printf(CYAN " %x" RESET, i);
		printf("\n");

		check(c, ft);
	}

	puts(" PRINT %");
	puts(" ----------------------------------------------------------------------------");
	{
		int ft = ft_printf(YELLOW "%%" RESET);
		printf("\n");
		int c = printf(CYAN "%%" RESET);
		printf("\n");

		check(c, ft);
	}

	puts(" ALL FLAGS");
	puts(" ----------------------------------------------------------------------------");
	{
		char s[1024] = "Hello World!";
		int i = 2147483642;
		unsigned int u = 2147483642;
		
		int ft = ft_printf(YELLOW "\nc | %c\ns | %s\np | %p\nd | %d\ni | %i\nu | %u\nx | %x\nX | %X\n%% | %%\n" RESET, s[0], s, &s[0], i, i, u, i, i);
		
		int c = printf(CYAN "\nc | %c\ns | %s\np | %p\nd | %d\ni | %i\nu | %u\nx | %x\nX | %X\n%% | %%\n" RESET, s[0], s, &s[0], i, i, u, i, i);

		check(c, ft);
	}

	puts(" ALL FLAGS (DOUBLE)");
	puts(" ----------------------------------------------------------------------------");
	{
		char s1[1024] = "Hello ";
		int i1 = -2147483648;
		unsigned int u1 = 4294967295;
		
		char s2[1024] = "World!";
		int i2 = 2147483647;
		unsigned int u2 = 0;

		int ft = ft_printf(YELLOW "\nc | %c %c\ns | %s %s\np | %p %p\nd | %d %d\ni | %i %i\nu | %u %u\nx | %x %x\nX | %X %X\n%% | %% %%\n" RESET, 
							s1[0],s2[0], s1, s2, &s1[0], &s2[0], i1, i2, i1, i2, u1, u2, i1, i2, i1, i2);
		
		int c = printf(CYAN "\nc | %c %c\ns | %s %s\np | %p %p\nd | %d %d\ni | %i %i\nu | %u %u\nx | %x %x\nX | %X %X\n%% | %% %%\n" RESET,
						s1[0],s2[0], s1, s2, &s1[0], &s2[0], i1, i2, i1, i2, u1, u2, i1, i2, i1, i2);

		check(c, ft);
	}

	puts(" TEST SUMMARY : ");
	puts(" ----------------------------------------------------------------------------");
	{
		if (passed == total)
			printf(GREEN " %d / %d\n\n" RESET, passed, total);	
		else
			printf(RED " %d / %d\n\n" RESET, passed, total);	
	}

	return (0);
}
