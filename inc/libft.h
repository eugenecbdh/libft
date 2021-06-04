#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>

    typedef struct s_list{
        void * content;
        size_t content_size;
        struct s_list *next;
    }t_list;

    void ft_putchar(char *c);
    void ft_putchar_fd(char *c, int fd);
    void ft_putstr(char *s);
    void ft_putstr_fd(char *s, int fd);
    void ft_putendl(char *s);
    void ft_putendl_fd(char *s, int fd);
    void ft_putnbr(int n);
    void ft_putnbr_fd(int n, int fd);
    void ft_striter(char *s, void(*ft)(char *));
    void ft_striteri(char *s, void (*ft)(int, char *));
    

    void *ft_memset(void *s, int c, int n);
    void ft_bzero(void *s, int n);
    void *ft_memcpy(void *dest, void * src, int n);
    void *ft_memccpy(void *dest, void *s, int c, int n);
    void *ft_memmove(void *s1, const void *s2, size_t n);
    void *ft_memchr(void *s1, int c, size_t n);
    void *ft_memalloc(size_t size);
    void ft_memdel(void **ap);
    
    int memcmp(const void *s1, const void *s2, size_t n);

    int ft_isalpha(int a);
    int ft_isdigit(int a);
    int ft_isalnum(int a);
    int ft_isascii(int a);
    int ft_isprint(int a);
    int ft_toupper(int a);
    int ft_tolower(int a);

    int ft_strlen(char *s);
    int ft_strcmp(char *s1, char *s2);
    int ft_strncmp(char *s1, char *s2, int n);
    int ft_strequ(char const *s1, char const *s2);
    int ft_strnequ(char const *s1, char const *s2, size_t n);

    char *ft_strdup(const char *s);
    char *ft_strcpy(char *dest, char *s);
    char *ft_strncpy(char *dest, char *s, int n);
    char *ft_strcat(char *dest, char *s);
    char *ft_strncat(char *dest, char *s, int n);
    char *ft_strchr(const char *s, int c);
    char *ft_strrchr(const char *s, int c);
    char *ft_strstr(char *s1, char *s2);
    char *ft_strnstr(char *s1, char *s2, int n);
    char *ft_strmap(const char *s, char (*ft)(char));
    char *ft_strmapi(char const *s, char (*f)(int, char));
    char *ft_strnew(int size);
    char *ft_itoa(int n);
    char *ft_strjoin(char *s1, char *s2);
    char * ft_strsub(char const *s, unsigned int start, size_t len);
    char **ft_strsplit(char *s, char del);
    char * ft_strtrim(char *s);
    
    void ft_strdel(char **as);
    void ft_strclr(char *s);
    size_t	ft_strlcat(char *dst, const char *src, size_t size)

    t_list *ft_lstnew(void const *content, size_t content_size);
    void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
    void ft_lstdel(t_list **alst, void (*del)(void *, size_t));
    void	ft_lstadd(t_list **alst, t_list *new);
    void ft_lstiter(t_list *lst, void (*f)(t_list *elem));
    t_list	*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem));

#endif