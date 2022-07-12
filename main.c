
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecanha <gpecanha@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:32:33 by gpecanha          #+#    #+#             */
/*   Updated: 2022/06/06 17:32:33 by gpecanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include <ctype.h>
# include <stdio.h>
# include <string.h>

// char f(unsigned int i, char c)
// {
// 	char str;
// 	str = c + i;
// 	return (str);
// }

int main(void)
{
    
    // printf("ft_isalpha-----------------------------------------------------------------------------\n");
    // printf("%d\n", ft_isalpha('h'));
	// printf("%d\n", ft_isalpha('*'));
    // printf("ft_isalnum-----------------------------------------------------------------------------\n");
    // printf("%d\n", ft_isalnum('5'));
	// printf("%d\n", ft_isalnum('+'));
    // printf("ft_isdigit-----------------------------------------------------------------------------\n");
    // (ft_isdigit('3')) ? (printf("is digit\n")) : (printf("is not digit\n"));
    // (ft_isdigit('+')) ? (printf("is digit\n")) : (printf("is not digit\n"));
    // printf("ft_isascii-----------------------------------------------------------------------------\n");
    // printf("%d\n", ft_isascii('~'));
	// printf("%d\n", ft_isascii('8'));
    // printf("ft_isprint-----------------------------------------------------------------------------\n");
    // printf("%d\n", ft_isprint('\t'));
    // printf("ft_toupper-----------------------------------------------------------------------------\n");
    // printf("%c\n", ft_toupper('a'));
    // printf("ft_tolower-----------------------------------------------------------------------------\n");
    // printf("%c\n", ft_tolower('A'));
    // printf("ft_strlen-----------------------------------------------------------------------------\n");
    // printf("%zu\n", ft_strlen("longitud"));
    // printf("ft_memset-----------------------------------------------------------------------------\n");
    // char s26[50] = "doidera";
	// ft_memset(s26, 'k', 4);
	// printf("%s\n", s26);
    // printf("ft_memcpy-----------------------------------------------------------------------------\n");
    // char src[50] = "doidera";
	// char dest[50];
	// char *ret;
	// ret = ft_memcpy(dest, src, 10);
	// printf("%s\n", ret);
    // printf("ft_strlcat-----------------------------------------------------------------------------\n");
	// const char src[10]	= "abcd";
	// char dest[10]   = "123";
    // size_t 			nb = 1;
    // printf("Str: %ld", ft_strlcat(dest, src, nb));
    // printf("\n");
	// const char src1[10]	= "ab";
	// char dest1[10]	= "123";
    // unsigned int 	nb2 = 2;
    // strcat(src, dest);
    // printf("Str: %int \n", strlcat(dest1, src1, nb2));
    // printf("ft_strlcpy-----------------------------------------------------------------------------\n");
    // char	dest2[50];
	// char	*src2;
	// int		size;
	// src2 = "doidera";
	// size = 4;
	// printf("%lu\n", ft_strlcpy(dest2, src2, size));
    // printf("ft_bzero-----------------------------------------------------------------------------\n");
    // printf("\n");
    // printf("ft_strchr-----------------------------------------------------------------------------\n");
    // const char str[] = "doidera";
    // const char ch = 'i';
    // char *var1;
    // var1 = ft_strchr(str, ch);
    // printf("String after |%c| is - |%s|\n", ch, var1 + 1);
    // printf("\n");
    // printf("ft_strrchr-----------------------------------------------------------------------------\n");
    // const char strr[] = "doidera";
    // const char chh = 'd';
    // char *var2;
    // var2 = ft_strrchr(strr, chh);
    // printf("String before |%c| is - |%s|\n", chh, var2);
    // printf("\n");
    // printf("ft_strnstr-----------------------------------------------------------------------------\n");
    // const char str3[] = "que";
    // const char string[50] = "carai lek doidera que bizarro menozada";
    // char *var3;
    // var3 = ft_strnstr(string, str3, 21);
    // printf("Palavra | %s | em %s \nResult: %s \n", str3, string, var3);
    // printf("ft_strncmp-----------------------------------------------------------------------------\n");
    // char str1[] = "lets";
    // char str2[] = "sgo";
    // int ret;
    // ret = ft_strncmp(str1, str2, 5);
    // if(ret < 0) {
    //   printf("str1 is less than str2");
    // } else if(ret > 0) {
    //   printf("str2 is less than str1");
    // } else {
    //   printf("str1 is equal to str2");
    // }
    // printf("ft_memchr-----------------------------------------------------------------------------\n");
    // char str8[] = "doidera cara";
    // char *tst;
    // tst =  memchr(str8, 'c', 9);
    // printf("%s",tst);
    // printf("\n");
    // const char str9[] = "doidera cara";
    // char *tst2;
    // tst2 =  ft_memchr(str9, 'c', 9);
    // printf("%s",tst2);
    // printf("\n");
//     printf("ft_memcmp-----------------------------------------------------------------------------\n");
//   	char buffer1[] = "doidera";
// 	char buffer2[] = "doiderakkk";
// 	int n;
// 	n=memcmp ( buffer1, buffer2, sizeof(buffer1) );
// 	if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
// 	else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
// 	else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);
//     printf("\n");
//     char buffer3[] = "doidera";
// 	char buffer4[] = "doiderakkk";
// 	int n2;
// 	n2=ft_memcmp ( buffer3, buffer4, sizeof(buffer3) );
// 	if (n2>0) printf ("'%s' is greater than '%s''%d'\n",buffer3,buffer4, n2);
// 	else if (n2<0) printf ("'%s' is less than '%s'. '%d'\n",buffer3,buffer4, n2);
// 	else printf ("'%s' is the same as '%s''%d'\n",buffer3,buffer4, n2);
//     printf("\n");
//     printf("ft_bzero-----------------------------------------------------------------------------\n");
//     char buffer[8];
//     int i;
//     i = 0;
//     bzero(buffer, 8);
//     while (i < 8)
//     {
//       printf("%d", buffer[i]);
//       i++;
//     }
//     printf("\n");

//     char ft_buff[8];
//     int i1;
//     i1 = 0;
//     ft_bzero(ft_buff, 8);
//     while (i1 < 8)
//     {
//       printf("%d", ft_buff[i1]);
//       i1++;
//     }
//     printf("\n");
    // printf("ft_memmove-----------------------------------------------------------------------------\n");
    // char dest25[] = "oldstring";
    // const char src5[]  = "newstring";
    // printf("Before memmove dest = %s, src = %s\n", dest25, src5);
    // memmove(dest25, src5, 8);
    // printf("After memmove dest = %s, src = %s\n", dest25, src5);
    // printf("\n");
    // char dest37[] = "oldstring";
    // const char src37[]  = "newstring";
    // printf("Before memmove dest = %s, src = %s\n", dest37, src37);
    // ft_memmove(dest37, src37, 8);
    // printf("After memmove dest = %s, src = %s\n", dest37, src37);
    // printf("ft_atoi-----------------------------------------------------------------------------\n");
    // printf("%d\n", ft_atoi("123"));
    // printf("%d\n", atoi("123"));
    // printf("ft_calloc-----------------------------------------------------------------------------\n");
    // char *vtr;
	// vtr = calloc(10, sizeof(int));
	// printf("%s\n", vtr);
    // printf("\n");
    // char *vtr2;
	// vtr2 = ft_calloc(10, sizeof(int));
	// printf("%s\n", vtr2);
    // printf("ft_putchar_fd-----------------------------------------------------------------------------\n");
	// ft_putchar_fd('c', 2);
    // printf("\n");
    // printf("ft_putstr_fd-----------------------------------------------------------------------------\n");
    // ft_putstr_fd("doidera",0);
    // printf("\n");
    // printf("ft_putendl_fd-----------------------------------------------------------------------------\n");
    // ft_putendl_fd("doidera",1);
    // printf("ft_putnbr_fd-----------------------------------------------------------------------------\n");
    // ft_putnbr_fd(123,1);
    // printf("\n");
    // printf("ft_strjoin-----------------------------------------------------------------------------\n");
    // const char str1[] = "doido";
    // const char str2[] = "cara";
    // char *res = ft_strjoin(str1, str2);
    // printf("%s", res);
    // printf("\n");
    // printf("ft_strdup-----------------------------------------------------------------------------\n");
    // char str1[] = "doido";
    // char *res = ft_strdup(str1);
    // printf("%s", res);
    // printf("\n");
    // printf("ft_strtrim-----------------------------------------------------------------------------\n");
    // printf("%s\n", ft_strtrim("abqbc", "abc"));
	// printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
    printf("ft_substr-----------------------------------------------------------------------------\n");
    char* str;
	str = ft_substr("Hello, 42Rio!", 7, 2);
	printf("%s\n", str);
    // printf("ft_strmapi-----------------------------------------------------------------------------\n");
    // char str1[] = "abc";
    // char* str2;
	// str2 = ft_strmapi(str1, *f);
	// printf("%s\n", str2);
    // printf("ft_striteri-----------------------------------------------------------------------------\n");  
    // printf("ft_itoa-----------------------------------------------------------------------------\n");  
    // printf("%s\n", ft_itoa(100));
    // printf("ft_split-----------------------------------------------------------------------------\n");  
    // char	**tab;
	// unsigned int	i;

	// i = 0;
	// tab = ft_split("split this for me !", 's');
	// if (!tab[0])
	// 	ft_putendl_fd("\n", 1);
	// while (tab[i] != NULL)
	// {
	// 	ft_putendl_fd(tab[i], 1);
	// 	i++;
	// }
}  