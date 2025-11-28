/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:48:08 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/27 09:38:50 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_count_vars
{
	int	count;
	int	in_sub;
}		t_count_vars;

typedef struct s_fill_vars
{
	int	i;
	int	substr;
	int	start;
	int	len;
}		t_fill_vars;

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int i);
int		ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *source, const void *compare, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *ptr, int value, size_t n);
char	**ft_split(const char *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_itoa(int n);

#endif

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>
// #define MAX_CHAR 100

// void	split_test(void)
// {
// 	char	**array;
// 	int		i;

// 	array = ft_split("This is a test of the split function", ' ');
// 	i = 0;
// 	while (array[i] != NULL)
// 	{
// 		printf("%s\n", array[i]);
// 		i++;
// 	}
// }

// void	atoi_test(void)
// {
// 	char	*test;
// 	int		value;

// 	test = "---+--+1234ab567";
// 	value = ft_atoi(test);
// 	printf("%d", value);
// }

// void	bzero_test(void)
// {
// 	char	str[50] = "This is a test.";

// 	printf("\nBefore bzero(): %s\n", str);
// 	ft_bzero(str + 4, 3);
// 	printf("After bzero():  %s", str);
// }

// void	calloc_test(void)
// {
// 	int	n;
// 	int	*array;

// 	n = 5;
// 	array = (int *)calloc(n, sizeof(int));
// 	printf("Array elements after calloc: ");
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("%d ", array[i]);
// 	}
// 	printf("\n");
// 	free(array);
// }

// void	isalnum_test(void)
// {
// 	int	test;

// 	test = 't';
// 	if (ft_isalnum(test))
// 	{
// 		printf("success");
// 	}
// }

// void	isalpha_test(void)
// {
// 	int	test;

// 	test = 't';
// 	if (ft_isalpha(test))
// 	{
// 		printf("success");
// 	}
// }

// void	isascii_test(void)
// {
// 	int	test;

// 	test = 't';
// 	if (ft_isascii(test))
// 	{
// 		printf("success");
// 	}
// }

// void	isdigit_test(void)
// {
// 	int	test;

// 	test = 't';
// 	if (ft_isdigit(test))
// 	{
// 		printf("success");
// 	}
// }

// void	isprint_test(void)
// {
// 	int	test;

// 	test = 't';
// 	if (ft_isprint(test))
// 	{
// 		printf("success");
// 	}
// }

// void	itoa_test(void)
// {
// 	printf("%s", ft_itoa(2135135));
// }

// void	memchr_test(void)
// {
// 	char	myStr[] = "Hello World";
// 	char	*myPtr;

// 	myPtr = ft_memchr(myStr, 'o', 11);
// 	if (myPtr != 0)
// 	{
// 		printf("%s", myPtr);
// 	}
// }

// void	memcmp_test(void)
// {
// 	char	*test1;
// 	char	*test2;
// 	int		result;

// 	test1 = "tte2st";
// 	test2 = "tt3est";
// 	result = ft_memcmp(test1, test2, 3);
// 	printf("%d", result);
// }

// void	memcpy_test(void)
// {
// 	char	first_str[MAX_CHAR] = "Hello World!";
// 	char	second_str[MAX_CHAR] = "";

// 	printf("The Actual Statements:-\n");
// 	printf("first_str: %s\n", first_str);
// 	printf("second_str: %s\n", second_str);
// 	ft_memcpy(first_str, second_str, strlen(second_str));
// 	printf("After executing the function memcpy()\n");
// 	printf("first_str: %s\n", first_str);
// 	printf("second_str: %s\n", second_str);
// }

// void	memmove_test(void)
// {
// 	char	first_str[MAX_CHAR] = "Hello World!";
// 	char	second_str[MAX_CHAR] = "THIS IS A TEST";

// 	printf("The Actual Statements:-\n");
// 	printf("first_str: %s\n", first_str);
// 	printf("second_str: %s\n", second_str);
// 	ft_memmove(first_str, second_str, strlen(second_str));
// 	printf("After executing the function memcpy()\n");
// 	printf("first_str: %s\n", first_str);
// 	printf("second_str: %s\n", second_str);
// }

// void	memset_test(void)
// {
// 	char	str[50] = "This is a test.";

// 	printf("\nBefore memset(): %s\n", str);
// 	ft_memset(str + 4, '.', 3);
// 	printf("After memset():  %s", str);
// }

// void	strchr_test(void)
// {
// 	char	myStr[] = "Hello World";
// 	char	*myPtr;

// 	myPtr = ft_strchr(myStr, 'e');
// 	if (myPtr != 0)
// 	{
// 		printf("%s", myPtr);
// 	}
// }

// void	strdup_test(void)
// {
// 	char	source[] = "This is a test";
// 	char	*target;

// 	target = ft_strdup(source);
// 	printf("%s", target);
// }

// void	testf(unsigned int i, char *c)
// {
// 	printf("%d %s,", i, c);
// }

// void	striteri_test(void)
// {
// 	char	test[14] = "This is a test";

// 	ft_striteri(test, testf);
// 	printf("%s", test);
// }

// void	strjoin_test(void)
// {
// 	char	*result;

// 	result = ft_strjoin("This is ", "a test");
// 	printf("%s", result);
// }

// void	strlcat_test(void)
// {
// 	char	string1[20] = "This is a ";
// 	char	*string2;
// 	size_t	size;

// 	string2 = "test 1234567890";
// 	size = ft_strlcat(string1, string2, sizeof(string1));
// 	printf("%s, %zu", string1, size);
// }

// void	strlcpy_test(void)
// {
// 	char	test[14] = "1234567";
// 	char	*test2;

// 	test2 = "12345";
// 	ft_strlcpy(test, test2, 3);
// 	printf("%s", test);
// }

// void	strlen_test(void)
// {
// 	char	*test;

// 	test = "this is a test ";
// 	printf("%d", ft_strlen(test));
// }

// char	test(unsigned int i, char c)
// {
// 	printf("%d %c,", i, c);
// 	return (c);
// }

// void	strmapi_test(void)
// {
// 	printf("%s", ft_strmapi("test", test));
// }

// void	strncmp_test(void)
// {
// 	char	*test1;
// 	char	*test2;
// 	int		result;

// 	test1 = "te2st";
// 	test2 = "te2st";
// 	result = ft_strncmp(test1, test2, 3);
// 	printf("%d", result);
// }

// void	strnstr_test(void)
// {
// 	char	myStr[] = "This is a test";
// 	char	*myPtr;

// 	myPtr = ft_strnstr(myStr, " ", 10);
// 	printf("%s", myPtr);
// }

// void	strrchr_test(void)
// {
// 	char	myStr[] = "Hello World";
// 	char	*myPtr;

// 	myPtr = ft_strrchr(myStr, 'e');
// 	if (myPtr != 0)
// 	{
// 		printf("%s", myPtr);
// 	}
// }

// void	strtrim_test(void)
// {
// 	char	*test;

// 	test = ft_strtrim("ababaaaMy name is Ilterbbaaabba", "ab");
// 	printf("%s", test);
// }

// void	substr_test(void)
// {
// 	char	test1[33] = "This is a test and its a long one";
// 	char	*test2;

// 	test2 = malloc(3);
// 	test2 = ft_substr(test1, 7, 17);
// 	printf("%s", test2);
// 	free(test2);
// }

// void	tolower_test(void)
// {
// 	char	test;

// 	test = 'C';
// 	printf("%c", ft_tolower(test));
// }

// void	toupper_test(void)
// {
// 	char	test;

// 	test = '1';
// 	printf("%c", ft_toupper(test));
// }

// int	main(void)
// {
// 	printf("\n--- split_test ---\n");
// 	split_test();
// 	printf("\n");
// 	printf("--- atoi_test ---\n");
// 	atoi_test();
// 	printf("\n");
// 	printf("--- bzero_test ---\n");
// 	bzero_test();
// 	printf("\n");
// 	printf("--- calloc_test ---\n");
// 	calloc_test();
// 	printf("\n");
// 	printf("--- isalnum_test ---\n");
// 	isalnum_test();
// 	printf("\n");
// 	printf("--- isalpha_test ---\n");
// 	isalpha_test();
// 	printf("\n");
// 	printf("--- isascii_test ---\n");
// 	isascii_test();
// 	printf("\n");
// 	printf("--- isdigit_test ---\n");
// 	isdigit_test();
// 	printf("\n");
// 	printf("--- isprint_test ---\n");
// 	isprint_test();
// 	printf("\n");
// 	printf("--- itoa_test ---\n");
// 	itoa_test();
// 	printf("\n");
// 	printf("--- memchr_test ---\n");
// 	memchr_test();
// 	printf("\n");
// 	printf("--- memcmp_test ---\n");
// 	memcmp_test();
// 	printf("\n");
// 	printf("--- memcpy_test ---\n");
// 	memcpy_test();
// 	printf("\n");
// 	printf("--- memmove_test ---\n");
// 	memmove_test();
// 	printf("\n");
// 	printf("--- memset_test ---\n");
// 	memset_test();
// 	printf("\n");
// 	printf("--- strchr_test ---\n");
// 	strchr_test();
// 	printf("\n");
// 	printf("--- strdup_test ---\n");
// 	strdup_test();
// 	printf("\n");
// 	printf("--- striteri_test ---\n");
// 	striteri_test();
// 	printf("\n");
// 	printf("--- strjoin_test ---\n");
// 	strjoin_test();
// 	printf("\n");
// 	printf("--- strlcat_test ---\n");
// 	strlcat_test();
// 	printf("\n");
// 	printf("--- strlcpy_test ---\n");
// 	strlcpy_test();
// 	printf("\n");
// 	printf("--- strlen_test ---\n");
// 	strlen_test();
// 	printf("\n");
// 	printf("--- strmapi_test ---\n");
// 	strmapi_test();
// 	printf("\n");
// 	printf("--- strncmp_test ---\n");
// 	strncmp_test();
// 	printf("\n");
// 	printf("--- strnstr_test ---\n");
// 	strnstr_test();
// 	printf("\n");
// 	printf("--- strrchr_test ---\n");
// 	strrchr_test();
// 	printf("\n");
// 	printf("--- strtrim_test ---\n");
// 	strtrim_test();
// 	printf("\n");
// 	printf("--- substr_test ---\n");
// 	substr_test();
// 	printf("\n");
// 	printf("--- tolower_test ---\n");
// 	tolower_test();
// 	printf("\n");
// 	printf("--- toupper_test ---\n");
// 	toupper_test();
// 	printf("\n");
// 	printf("--- ALL TESTS DONE ---\n");
// 	return (0);
// }
