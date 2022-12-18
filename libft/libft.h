/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:42:29 by lvelasqu          #+#    #+#             */
/*   Updated: 2022/12/18 14:12:22 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Include libraries */

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <strings.h>
# include <ctype.h>

/* Functions from <ctype.h> library */

// test for ASCII character. 
int		ft_isascii(int a);
// alphanumeric character test. 
int		ft_isalnum(int a);
// alphabetic character test. 
int		ft_isalpha(int a);
// decimal-digit character test. 
int		ft_isdigit(int a);
// printing character test (space character inclusive). 
int		ft_isprint(int a);
// upper case to lower case letter conversion. 
int		ft_tolower(int a);
// lower case to upper case letter conversion.
int		ft_toupper(int a);

/* Functions from <stdlib.h> library */

// convert ASCII string to integer. 
int		ft_atoi(const char *str);
// memory allocation.
void	*ft_calloc(size_t count, size_t size);

/* Functions from <string.h> library */

// write zeroes to a byte string.
void	ft_bzero(void *dst, size_t n);
// write a byte to a byte string.
void	*ft_memset(void *b, int a, size_t n);
// locate byte in byte string.
void	*ft_memchr(void *buf, int ch, size_t n);
// compare byte string.
int		ft_memcmp(const void *s1, const void *s2, size_t n);
// copy byte string.
void	*ft_memmove(void *dst, const void *src, size_t n);
// copy memory area.
void	*ft_memcpy(void *dst, const void *src, size_t n);

/* Functions from <strings.h> library */

// find length of string.
size_t	ft_strlen(const char *str);
// locate character in string (first occurrence).
char	*ft_strchr(const char *str, int a);
// locate character in string (last occurrence).
char	*ft_strrchr(const char *str, int a);
// locate a substring in a string (size-bounded).
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
// save a copy of a string (with malloc).
char	*ft_strdup(const char *str);
// size-bounded string copying.
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
// size-bounded string concatenation.
size_t	ft_strlcat(char *dst, const char *src, size_t size);
// size-bounded string comparison.
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*Non-standard functions */

// output a character to given file.
void	ft_putchar_fd(char c, int fd);
// output string to given file.
void	ft_putstr_fd(char *s, int fd);
// output string to given file with newline.
void	ft_putendl_fd(char *s, int fd);
// output integer to given file.
void	ft_putnbr_fd(int n, int fd);
// convert integer to ASCII string.
char	*ft_itoa(int n);
// extract substring from string.
char	*ft_substr(char const *s, unsigned int start, size_t len);
// trim beginning and end of string with the specified characters.
char	*ft_strtrim(char const *s1, char const *set);
// concatenate two strings into a new string (with malloc).
char	*ft_strjoin(char const *s1, char const *s2);
// split string, with specified character as delimiter,an array of strings.
char	**ft_split(char const *s, char c);
// create new string from modifying string with specified function.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// applies a function to each character of the string passed as argument.
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/* Part 2 - bonuses */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// create a new list.
t_list	*ft_lstnew(void *content);
// count elements of a list.
int		ft_lstsize(t_list *lst);
// find last element of a list.
t_list	*ft_lstlast(t_list *lst);
// add a new element at end of list.
void	ft_lstadd_back(t_list **lst, t_list *new);
// add new element at beginning of list.
void	ft_lstadd_front(t_list **lst, t_list *new);
// delete element from list.
void	ft_lstdelone(t_list *lst, void (*del)(void *));
// delete sequence of elements of list from a starting point.
void	ft_lstclear(t_list **lst, void (*del)(void *));
// apply function to content of all list's elements.
void	ft_lstiter(t_list *lst, void (*f)(void *));
// apply function to content of all list's elements into new list.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
