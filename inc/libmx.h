#pragma once

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc/malloc.h>
#include <fcntl.h>

void mx_printchar(char c); //done
void mx_print_unicode(wchar_t c); //
void mx_printstr(const char *s); //done
void mx_print_strarr(char **arr, const char *delim); //done
void mx_printint(int n); //done
double mx_pow(double n, unsigned int pow); //done
int mx_sqrt(int x); //done
char *mx_nbr_to_hex(unsigned long nbr); //done
unsigned long mx_hex_to_nbr(const char *hex); //done
char *mx_itoa(int number); //done
void mx_foreach(int *arr, int size, void (*f)(int)); //done
int mx_binary_search(char **arr, int size, const char *s, int *count); //done
int mx_bubble_sort(char **arr, int size); //done
int mx_quick_sort(char **arr, int left, int right); //
int mx_strlen(const char *s); //done
void mx_swap_char(char *s1, char *s2); //done
void mx_str_reverse(char *s); //done
void mx_strdel(char **str); //done
void mx_del_strarr(char ***arr); //done
int mx_get_char_index(const char *str, char c); //done
char *mx_strdup(const char *s1); //done
char *mx_strndup(const char *s1, size_t n); //done
char *mx_strcpy(char *dst, const char *src); //done
char *mx_strncpy(char *dst, const char *src, int len); //done
int mx_strncmp(const char *s1, const char *s2, int n); //done
int mx_strcmp(const char *s1, const char *s2); //done
char *mx_strcat(char *restrict s1, const char *restrict s2); //done
char *mx_strstr(const char *haystack, const char *needle); //done
int mx_get_substr_index(const char *str, const char *sub); //done
int mx_count_substr(const char *str, const char *sub); //done
int mx_count_words(const char *str, char c); //done
char *mx_strnew(const int size); //done
int mx_isspace(char c); //done
char *mx_strtrim(const char *str); //done
char *mx_del_extra_spaces(const char *str); //done
char **mx_strsplit(const char *s, char c); //done
int mx_count_letters(const char *s, char c); //done
char *mx_strjoin(const char *s1, const char *s2); //done
char *mx_file_to_str(const char *file); //done
char *mx_replace_substr(const char *str, const char *sub, const char *replace); //done
int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd); // ().()
void *mx_memset(void *b, int c, size_t len); //done
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n); //done
void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n); //done
int mx_memcmp(const void *s1, const void *s2, size_t n); //done
void *mx_memchr(const void *s, int c, size_t n); //done
void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len); //done
void *mx_memmove(void *dst, const void *src, size_t len); //done
void *mx_realloc(void *ptr, size_t size); //
void *mx_memrchr(const void *s, int c, size_t n); //done
typedef struct s_list {
  void *data;
  struct s_list *next;
} t_list;

t_list *mx_create_node(void *data); //done
void mx_push_front(t_list **list, void *data); //done
void mx_push_back(t_list **list, void *data); //done
void mx_pop_front(t_list **head); //done
void mx_pop_back(t_list **head); //done
int mx_list_size(t_list *list); //done

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)); //done
