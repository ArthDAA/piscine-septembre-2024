/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-assi <ade-assi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:47:59 by ade-assi          #+#    #+#             */
/*   Updated: 2024/09/22 11:48:28 by ade-assi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024
#define DICT_SIZE 100

typedef struct {
    char *number;
    char *word;
} DictEntry;

DictEntry dictionary[DICT_SIZE];
int dict_count = 0;

void print_error(const char *message) {
    write(1, message, 12);
}

int my_strlen(const char *str) {
    int len = 0;
    while (str[len]) {
        len++;
    }
    return len;
}

char *my_strdup(const char *src) {
    char *dest = (char *)malloc(my_strlen(src) + 1);
    if (!dest) return NULL;
    int i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int my_strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

void parse_dictionary(const char *filename) {
    int fd = open(filename, O_RDONLY);
    if (fd < 0) {
        print_error("Dict Error\n");
        exit(1);
    }
    char buffer[BUFFER_SIZE];
    int bytes_read;
    while ((bytes_read = read(fd, buffer, BUFFER_SIZE - 1)) > 0) {
        buffer[bytes_read] = '\0';
        int i = 0;
        while (i < bytes_read) {
            int j = 0;
            while (i + j < bytes_read && buffer[i + j] != '\n') {
                j++;
            }
            if (j > 0 && buffer[i + j - 1] == ':') {
                buffer[i + j - 1] = '\0';
                dictionary[dict_count].number = my_strdup(&buffer[i]);
                dictionary[dict_count].word = my_strdup(&buffer[i + j]);
                dict_count++;
            }
            i += j + 1;
        }
    }
    close(fd);
}

void convert_number(const char *number) {
    for (int i = 0; i < dict_count; i++) {
        if (my_strlen(dictionary[i].number) == my_strlen(number) && 
            my_strcmp(dictionary[i].number, number) == 0) {
            write(1, dictionary[i].word + 1, my_strlen(dictionary[i].word) - 1);
            write(1, "\n", 1);
            return;
        }
    }
    print_error("Dict Error\n");
}

int main(int argc, char **argv) {
    if (argc < 2 || argc > 3) {
        print_error("Error\n");
        return 1;
    }
    if (argc == 3) {
        parse_dictionary(argv[1]);
        convert_number(argv[2]);
    } else {
        convert_number(argv[1]);
    }
    return 0;
}
