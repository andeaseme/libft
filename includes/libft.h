/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 12:29:17 by aphan             #+#    #+#             */
/*   Updated: 2017/02/06 01:46:17 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# define MAX(a, b)		(((a) > (b)) ? (a) : (b))
# define MIN(a, b)		(((a) < (b)) ? (a) : (b))
# define ABS(a)			((a < 0) ? (-a) : (a))
# define SIGN(a)		((a < 0) ? (-1) : (a > 0) ? 1 : 0)
# define SWAP(a, b)		{typeof(a) temp = a; a = b; b = temp;}

/*
** Bit Array Ops
*/

# define SETBIT(A,k)	(A[(k/32)] |= (1 << (k%32)))
# define CLEARBIT(A,k)	(A[(k/32)] &= ~(1 << (k%32)))
# define TESTBIT(A,k)	(A[(k/32)] & (1 << (k%32)))

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_realloc(void *ptr, size_t old_size, size_t new_size);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memdup(const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *lit, size_t len);
char				*ft_strrealloc(char *ptr, size_t size);
int					ft_strcmp(const void *s1, const void *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

int					ft_atoi(const char *str);

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_islower(int c);
int					ft_isupper(int c);
int					ft_isnumber(int c);
int					ft_isblank(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isnbrstr(char *str);
int					ft_isintstr(char *str);
int					ft_findint(int *array, size_t size, int findme);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstadd_after(t_list *prev_node, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstdup(t_list *lst, size_t size);
t_list				*ft_lstclr(t_list **head);
void				ft_lstfree(t_list **alst);

char				*ft_itoa_base(int value, int base);
int					ft_atoi_base(const char *str, int str_base);
char				*ft_strndup(const char *s1, size_t n);
char				**ft_split_whitespaces(char *s);
int					ft_power(int nb, int power);
char				*ft_strtrimc(char const *s, char c);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
long				ft_atol(const char *str);
void				ft_intswap(int *a, int *b);

void				ft_quicksort_int(int arr[], int low, int high);
void				ft_quicksort(void *arr[], int low, int high,
							int (*cmp)(const void *, const void *));
void            	ft_mergesort_int(t_list **source);
void				ft_mergesort(t_list **source,
							int (*cmp)(const t_list *a, const t_list *b));

int     			*ft_option128(int *ac, char ***av);
#endif
