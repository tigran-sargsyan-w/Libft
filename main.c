#include "libft.h"
#include "main.h"

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <bsd/string.h> 



#include <stdint.h>

int     main(void)
{
        #pragma region Basic

        isalpha_test();

        isdigit_test();

        isalnum_test();

        isascii_test();

        isprint_test();

        strlen_test();

        memset_test();

        bzero_test();

        memcpy_test();

        memmove_test();

        strlcpy_test();

        strlcat_test();

        toupper_test();

        tolower_test();

        strchr_test();

        strrchr_test();

        srtncmp_test();

        memchr_test();

        memcmp_test();

        strnstr_test();

        atoi_test();

        calloc_test();

        strdup_test();

#pragma endregion

        #pragma region Additional

        substr_test();

        strjoin_test();

        strtrim_test();

        split_test();

        itoa_test();

        strmapi_test();

        striteri_test();

        putchar_fd_test();

        putstr_fd_test();

        putendl_fd_test();

        putnbr_fd_test();

#pragma endregion

        #pragma region Bonus

        lstnew_test();

        lstadd_front_test();

        lstsize_test();

        lstlast_test();

        lstadd_back_test();

        lstdelone_test();

        lstclear_test();

        lstiter_test();

        lstmap_test();

#pragma endregion
}

void lstmap_test()
{
        //t_list *node1 = ft_lstnew(strdup("hello"));
        //t_list *node2 = ft_lstnew(strdup("world"));
        //t_list *node3 = ft_lstnew(strdup("test"));
        //
        //ft_lstadd_back(&node1, node2);
        //ft_lstadd_back(&node1, node3);
        //
        //printf("Original:\n");
        //t_list *tmp1 = node1;
        //while (tmp1)
        //{
        //        printf("%s\n", (char *)tmp1->content);
        //        tmp1 = tmp1->next;
        //}
        //
        //t_list *new_list = ft_lstmap(node1, strupper, del);
        //
        //printf("Modified:\n");
        //t_list *tmp2 = new_list;
        //while (tmp2)
        //{
        //        printf("%s\n", (char *)tmp2->content);
        //        tmp2 = tmp2->next;
        //}
}

void *strupper(void *content)
{
    char *str = (char *)content;
    char *new_str = strdup(str);
    if (!new_str)
        return NULL;
    
    for (int i = 0; new_str[i]; i++)
        if (new_str[i] >= 'a' && new_str[i] <= 'z')
            new_str[i] -= 32; // Преобразование в верхний регистр

    return new_str;
}

void lstiter_test()
{
        //t_list *node1 = ft_lstnew(strdup("first node"));
        //t_list *node2 = ft_lstnew(strdup("second node"));
        //t_list *node3 = ft_lstnew(strdup("third node"));
        //
        //ft_lstadd_back(&node1, node2);
        //ft_lstadd_back(&node1, node3);
        //
        //printf("Original list:\n");
        //ft_lstiter(node1, print_content);
        //
        //ft_lstiter(node1, uppercase_content);
        //
        //printf("\nModified list:\n");
        //ft_lstiter(node1, print_content);
}

void uppercase_content(void *content) {
    char *str = (char *)content;
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str -= 32;
        }
        str++;
    }
}

void print_content(void *content) {
    printf("Content: %s\n", (char *)content);
}

void lstclear_test()
{
        //t_list *node1 = ft_lstnew(strdup("First node"));
        //t_list *node2 = ft_lstnew(strdup("Second node"));
        //t_list *node3 = ft_lstnew(strdup("Third node"));
        //
        //ft_lstadd_back(&node1, node2);
        //ft_lstadd_back(&node1, node3);
        //
        //printf("first node: %s\n", (char *)(node1)->content);
        //printf("second node: %s\n", (char *)(node2)->content);
        //printf("trird node: %s\n", (char *)(node3)->content);
        //
        //ft_lstclear(&node1, del);
        //
        //if (node1 == NULL)
        //        printf("List cleared\n");
        //else
        //        printf("Clearing failed.\n");
        //if (node2 != NULL && node3 != NULL)
        //{
        //        printf("showing on empty memory:\n");
        //        printf("second node: %s\n", (char *)(node2)->content);
        //        printf("trird node: %s\n", (char *)(node3)->content);
        //}
        //else
        //        printf("Smthing wrong.\n");
}

void lstdelone_test()
{
        //t_list *node1 = ft_lstnew(strdup("First node"));
        //t_list *node2 = ft_lstnew(strdup("Second node"));
        //t_list *node3 = ft_lstnew(strdup("Third node"));
        //
        //ft_lstadd_back(&node1, node2);
        //ft_lstadd_back(&node2, node3);
        //
        //printf("first node: %s\n", (char *)(node1)->content);
        //printf("second node: %s\n", (char *)(node2)->content);
        //printf("trird node: %s\n", (char *)(node3)->content);
        //
        //ft_lstdelone(node3, del);
        //
        //printf("first node: %s\n", (char *)(node1)->content);
        //printf("second node: %s\n", (char *)(node2)->content);
        //if (node3 == NULL)
        //        printf("node deleted\n");
        //else
        //        printf("Deleting failed.\n");
}

void del(void *content)
{
    free(content);
}

void lstadd_back_test()
{
        //char *content = "current";
        //char *next = "next";
        //
        //t_list *node = ft_lstnew(content);
        //printf("Content: %s\n", (char *)node->content);
        //printf("Next: %p\n", node->next);
        //
        //t_list *new_node = ft_lstnew(next);
        //ft_lstadd_back(&node, new_node);
        //
        //printf("Content: %s\n", (char *)node->content);
        //printf("Next: %s\n", (char *)node->next->content);
        //printf("Next: %p\n", new_node->next);
}

void lstlast_test()
{
        //t_list *node1 = ft_lstnew("First node");
        //t_list *node2 = ft_lstnew("Second node");
        //t_list *node3 = ft_lstnew("Third node");
        //
        //ft_lstadd_front(&node1, node2);
        //ft_lstadd_front(&node1, node3);
        //
        //printf("last node: %s\n", (char *)ft_lstlast(node1)->content);
        //printf("last node: %s\n", (char *)ft_lstlast(node2)->content);
        //printf("last node: %s\n", (char *)ft_lstlast(node3)->content);
}

void lstsize_test()
{
        //t_list *node1 = ft_lstnew("First node");
        //t_list *node2 = ft_lstnew("Second node");
        //t_list *node3 = ft_lstnew("Third node");
        //
        //ft_lstadd_front(&node1, node2);
        //ft_lstadd_front(&node1, node3);
        //
        //printf("Size of the list: %d\n", ft_lstsize(node1));
}

void lstadd_front_test()
{
        //char *content = "current, ";
        //char *next = "next";
        //
        //t_list *node = ft_lstnew(content);
        //printf("Content: %s\n", (char *)node->content);
        //printf("Next: %p\n", node->next);
        //
        //t_list *new_node = ft_lstnew(next);
        //ft_lstadd_front(&node, new_node);
        //
        //printf("Content: %s\n", (char *)node->content);
        //printf("Next: %s\n", (char *)node->next->content);
        //printf("Next: %p\n", new_node->next);
}

void lstnew_test()
{
        //char *content = "Hello, world!";
        //t_list *node = ft_lstnew(content);
        //printf("Content: %s\n", (char *)node->content);
        //printf("Next: %p\n", node->next);
}

void putnbr_fd_test()
{
        //ft_putnbr_fd(15127823, 1);
        //printf("\n");
        //ft_putnbr_fd(0, 1);
        //printf("\n");
        //ft_putnbr_fd(-2147483648, 1);
}

void putendl_fd_test()
{
        //char *str = "Hello World!";
        //ft_putendl_fd(str, 1);
}

void putstr_fd_test()
{
        //char *str = "Hello World!";
        //ft_putstr_fd(str, 1);
}

void putchar_fd_test()
{
        //printf("implementation write:   ");
        //fflush(stdout); // resets buffer
        //ft_putchar_fd('c', 1);
        //ft_putchar_fd('\n', 1);
}

void striteri_test()
{
        //char str[] = "Hello, my name, is Testo";
        //ft_striteri(str, to_upper_lower);
        //printf("implementation: %s\n", str);
}

void strmapi_test()
{
        //char *str = "Hello, my name, is Testo";
        //printf("implementation: %s\n", ft_strmapi(str, to_upper_with_index));
}

void to_upper_lower(unsigned int i, char *c)
{
    if (i % 2 == 0)
        *c = toupper(*c);
    else
        *c = tolower(*c);
}

char to_upper_with_index(unsigned int i, char c)
{
    return (i % 2 == 0) ? toupper(c) : c;
}

void itoa_test()
{
        //int x = -1152945;
        //char buffer[20];
        //snprintf(buffer, sizeof(buffer), "%d", x);
        //printf("origin \"itoa\":                %s\n", buffer);
        //printf("implementation:               %s\n", ft_itoa(x));
}

void split_test()
{
        //char *str = "Hello, my name, is Testo";
        //char sep = ' ';
        //char **res;
        //int wc = 6;
        //int i = 0;
        //res = ft_split(str, sep);
        //while (i < wc)
        //{
        //        printf("%d word: %s\n", i, res[i]);
        //        i++;
        //}
}

void strtrim_test()
{
        //char *str = "***/*   Hello, world!   */****";
        //char *set = "*";
        //printf("Original: \"%s\"\n", str);
        //printf("Trimmed: \"%s\"\n", ft_strtrim(str, set));
}

void strjoin_test()
{
        //char *s1 = "Hello, ";
        //char *s2 = "world!";
        //char *s3 = "";
        //printf("implementation:         %s\n", ft_strjoin(s1, s2));
        //printf("implementation:         %s\n", ft_strjoin(s1, s3));
        //printf("implementation:         %s\n", ft_strjoin(s3, s1));
}

void substr_test()
{
        //char *str = "Hello, world!";
        //char *result;
        //result = ft_substr(str, 0, 5);
        //printf("implementation:         %s\n", result);
        //result = ft_substr(str, 7, 5);
        //printf("implementation:         %s\n", result);
        //result = ft_substr(str, 7, 20);
        //printf("implementation:         %s\n", result);
}

void strdup_test()
{
        //char *str1 = "Hello, World!";
        //char *dup1 = NULL;
        //char *dup2 = NULL;
        //printf("implementation:         before %s\n", dup1);
        //dup1 = ft_strdup(str1);
        //printf("implementation:         after %s\n", dup1);
        //printf("origin strdup:          before %s\n", dup2);
        //dup2 = ft_strdup(str1);
        //printf("origin strdup:          after %s\n", dup2);
}

void calloc_test()
{
        //size_t nmemb = 2;
        //size_t size = 3;
        //void *ptr = ft_calloc(nmemb, size);
        //size_t i = 0;
        //printf("implementation:\n")
        //while (i < nmemb * size)
        //{
        //        printf("iter %zu:        ptr:%p value:%d\n", i, ptr, *(char *)ptr);
        //        i++;
        //        ptr = (char *)ptr + 1;
        //}
        //*(char *)ptr = 'g';
        //printf("iter %zu:        ptr:%p value:%d\n", i, ptr, *(char *)ptr);
        //printf("origin calloc:\n")
        //void *ptr2 = calloc(nmemb, size);
        //i = 0;
        //while (i < nmemb * size)
        //{
        //        printf("iter %zu:        ptr2:%p value:%d\n", i, ptr2, *(char *)ptr2);
        //        i++;
        //        ptr2 = (char *)ptr2 + 1;
        //}
        //*(char *)ptr2 = 'g';
        //printf("iter %zu:        ptr2:%p value:%d\n", i, ptr2, *(char *)ptr2);
}

void atoi_test()
{
        //char str1[55] = "   -5525 134";
        //char str2[55] = "   -+5525 134";
        //char str3[55] = "   g5525 134";
        //char str4[55] = "";
        //char str5[55] = "     9223372036854775807";
        //
        //printf("origin atoi:            %d\n", atoi(str1));
        //printf("origin atoi:            %d\n", atoi(str2));
        //printf("origin atoi:            %d\n", atoi(str3));
        //printf("origin atoi:            %d\n", atoi(str4));
        //printf("origin atoi:            %d\n", atoi(str5));
        //printf("implementation:         %d\n", ft_atoi(str1));
        //printf("implementation:         %d\n", ft_atoi(str2));
        //printf("implementation:         %d\n", ft_atoi(str3));
        //printf("implementation:         %d\n", ft_atoi(str4));
        //printf("implementation:         %d\n", ft_atoi(str5));
}

void strnstr_test()
{
        //const char *big = "Foo Bar Baz";
        //const char *small = "Bar";
        //const char *empty = "";
        //printf("origin strnstr:         %s\n", strnstr(big, small, 5));
        //printf("origin strnstr:         %s\n", strnstr(big, small, 7));
        //printf("origin strnstr:         %s\n", strnstr(big, empty, 5));
        //printf("origin strnstr:         %s\n", strnstr(empty, big, 5));
        //printf("implementation:         %s\n", ft_strnstr(big, small, 5));
        //printf("implementation:         %s\n", ft_strnstr(big, small, 7));
        //printf("implementation:         %s\n", ft_strnstr(big, empty, 5));
        //printf("implementation:         %s\n", ft_strnstr(empty, big, 5));
}

void memcmp_test()
{
        //char s1[100] = "Hello,world!";
        //char s2[100] = "Helgo,world!";
        //char s3[100] = "";
        //printf("origin memcmp:          %d\n", memcmp(s1, s2, 5));
        //printf("origin memcmp:          %d\n", memcmp(s1, s3, 5));
        //printf("origin memcmp:          %d\n", memcmp(s3, s1, 5));
        //printf("implementation:         %d\n", ft_memcmp(s1, s2, 5));
        //printf("implementation:         %d\n", ft_memcmp(s1, s3, 5));
        //printf("implementation:         %d\n", ft_memcmp(s3, s1, 5));
}

void memchr_test()
{
        //char s1[] = "Hello, world!";
        //
        //printf("origin memchr:          %p\n", memchr(s1, 'o', 10));
        //printf("origin memchr:          %p\n", memchr(s1, 'z', 5));
        //printf("implementation:         %p\n", ft_memchr(s1, 'o', 10));
        //printf("implementation:         %p\n", ft_memchr(s1, 'z', 5));
}

void srtncmp_test()
{
        //char s1[100] = "Hello,world!";
        //char s2[100] = "Hella,world!";
        //char s3[100] = "";
        //printf("origin srtncmp:          %d\n", strncmp(s1, s2, 5));
        //printf("origin srtncmp:          %d\n", strncmp(s1, s3, 5));
        //printf("origin srtncmp:          %d\n", strncmp(s3, s1, 5));
        //printf("implementation:          %d\n", ft_strncmp(s1, s2, 5));
        //printf("implementation:          %d\n", ft_strncmp(s1, s3, 5));
        //printf("implementation:          %d\n", ft_strncmp(s3, s1, 5));
}

void strrchr_test()
{
        //char src1[50] = "Helwlo, world!";
        //char src2[50] = "Helwlo, world!";
        //printf("origin strchr:          %s\n", strrchr(src1, 0));
        //printf("origin strchr:          %s\n", strrchr(src1, 'w'));
        //printf("implementation:         %s\n", ft_strrchr(src2, 0));
        //printf("implementation:         %s\n", ft_strrchr(src2, 'w'));
}

void strchr_test()
{
        //char src1[50] = "Helwlo, world!";
        //char src2[50] = "Helwlo, world!";
        //printf("origin strchr:          %s\n", strchr(src1, 0));
        //printf("origin strchr:          %s\n", strchr(src1, 'w'));
        //printf("implementation:         %s\n", ft_strchr(src2, 0));
        //printf("implementation:         %s\n", ft_strchr(src2, 'w'));
}

void tolower_test()
{
        //printf("origin tolower:         %c\n", ft_tolower('a'));
        //printf("origin tolower:         %c\n", ft_tolower('Z'));
        //printf("origin tolower:         %c\n", ft_tolower('3'));
        //printf("implementation:         %c\n", tolower('a'));
        //printf("implementation:         %c\n", tolower('Z'));
        //printf("implementation:         %c\n", tolower('3'));
}

void toupper_test()
{
        //printf("origin toupper:         %c\n", ft_toupper('a'));
        //printf("origin toupper:         %c\n", ft_toupper('Z'));
        //printf("origin toupper:         %c\n", ft_toupper('3'));
        //printf("implementation:         %c\n", toupper('a'));
        //printf("implementation:         %c\n", toupper('Z'));
        //printf("implementation:         %c\n", toupper('3'));
}

void strlcat_test()
{
        //char dest1[20] = "Hello, ";
        //const char *src1 = "world!";
        //// size_t size1 = sizeof(dest1);
        //
        //char dest2[20] = "Hello, ";
        //const char *src2 = "world!";
        //// size_t size2 = sizeof(dest2);
        //
        //printf("origin strlcat:          %zu\n", strlcat(dest1, src1, 9));
        //printf("dest1: %s\n", dest1);
        //
        //printf("implementation:          %zu\n", ft_strlcat(dest2, src2, 9));
        //printf("dest2: %s\n", dest2);
}

void strlcpy_test()
{
        //char src1[30] = "Hello!";
        //char dest1[30] = "Friend!";
        //printf("origin strlcpy:         %zu\n", strlcpy(dest1, src1, 4));
        //printf("src1: %s || dest1: %s\n", src1,dest1);
        //
        //char src2[30] = "Hello!";
        //char dest2[30] = "Friend!";
        //printf("implementation:         %zu\n", ft_strlcpy(dest2, src2, 4));
        //printf("src2: %s || dest2: %s\n", src2,dest2);
}

void memmove_test()
{
        //char str1[] = "Hello,world!";
        //char str2[] = "Hello,world!";
        //char str3[] = "Hello,world!";
        //
        //memmove(str1 + 3, str1, 5);
        //printf("origin memmove:         %s\n", str1);
        //
        //ft_memmove(str2 + 3, str2, 5);
        //printf("implementation:         %s\n", str2);
        //
        //memcpy(str3 + 3, str3, 5);
        //printf("origin memcpy:          %s\n", str3);
}

void memcpy_test()
{
        //char src1[50] = "Hello, world!";
        //char src2[50] = "Hello, world!";
        //char dest1[50];
        //char dest2[50];
        //
        //memcpy(dest1, src1, 5);
        //ft_memcpy(dest2, src2, 5);
        //printf("origin memcpy:          %s\n", dest1);
        //printf("implementation:         %s\n", dest2);
}

void bzero_test()
{
        //char buffer1[10] = "1234567890";
        //char buffer2[10] = "1234567890";
        //bzero(buffer1, 5);
        //ft_bzero(buffer2, 5);
        //
        //printf("origin bzero:           ");
        //for (int i = 0; i < 10; i++) {
        //        if (buffer1[i] == '\0') {
        //        printf("\\0");
        //        } else {
        //        printf("%c", buffer1[i]);
        //        }
        //}
        //printf("\n");
        //
        //printf("implementation:         ");
        //for (int i = 0; i < 10; i++) {
        //        if (buffer2[i] == '\0') {
        //        printf("\\0");
        //        } else {
        //        printf("%c", buffer2[i]);
        //        }
        //}
        //printf("\n");
}

void memset_test()
{
        //char buffer1[20] = "Hello, world!";
        //char buffer2[20] = "Hello, world!";
        //
        //memset(buffer1, 'A', 5);
        //ft_memset(buffer2, 'A', 5);
        //
        //printf("origin memset:          %s\n",buffer1);
        //printf("implementation:         %s\n",buffer2);
        
}

void strlen_test()
{
        //printf("origin strlen:          %zu\n", strlen("Hello"));
        //printf("origin strlen:          %zu\n", strlen("Hello world!"));
        //printf("implementation:         %zu\n", ft_strlen("Hello"));
        //printf("implementation:         %zu\n", ft_strlen("Hello world!"));
}

void isprint_test()
{
        //printf("origin isprint:         %d\n", isprint(' '));
        //printf("origin isprint:         %d\n", isprint('0'));
        //printf("origin isprint:         %d\n", isprint(20));
        //printf("origin isprint:         %d\n", isprint(127));
        //printf("implementation:         %d\n", ft_isprint(' '));
        //printf("implementation:         %d\n", ft_isprint('0'));
        //printf("implementation:         %d\n", ft_isprint(20));
        //printf("implementation:         %d\n", ft_isprint(127));
}

void isascii_test()
{
        //printf("origin isascii:         %d\n", isascii('A'));
        //printf("origin isascii:         %d\n", isascii('*'));
        //printf("origin isascii:         %d\n", isascii(128));
        //printf("implementation:         %d\n", ft_isascii('A'));
        //printf("implementation:         %d\n", ft_isascii('*'));
        //printf("implementation:         %d\n", ft_isascii(128));
}

void isalnum_test()
{
        //printf("origin isalnum:       %d\n", isalnum('5'));
        //printf("origin isalnum:       %d\n", isalnum('a'));
        //printf("origin isalnum:       %d\n", isalnum('*'));
        //printf("implementation:       %d\n", ft_isalnum('5'));
        //printf("implementation:       %d\n", ft_isalnum('a'));
        //printf("implementation:       %d\n", ft_isalnum('*'));
}

void isdigit_test()
{
        //printf("origin isdigit:	%d\n", isdigit('7'));
        //printf("origin isdigit:	%d\n", isdigit('g'));
        //printf("implementation:       %d\n", ft_isdigit('7'));
        //printf("implementation:       %d\n", ft_isdigit('g'));
}

void isalpha_test()
{
        //printf("origin isalpha:	%d\n", isalpha('B'));
        //printf("origin isalpha:	%d\n", isalpha('n'));
        //printf("origin isalpha:	%d\n", isalpha('%'));
        //printf("implementation:	%d\n", ft_isalpha('B'));
        //printf("implementation:	%d\n", ft_isalpha('n'));
        //printf("implementation:	%d\n", ft_isalpha('%'));
}