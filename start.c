/*
** EPITECH PROJECT, 2020
** 27.c
** File description:
** 27.c
*/

#include "my_functions.h"

int start(data_t *data)
{
    set_music(data);
    set_block(data);
    set_map(data);
    set_player(data);
    update_texture_block(data);
    while (sfRenderWindow_isOpen(data->setting->window->window)) {
        game(data);
    }
    sfRenderWindow_destroy(data->setting->window->window);
    sfMusic_destroy(data->setting->audio->flandre);
    sfMusic_destroy(data->setting->audio->cirno);
    sfMusic_destroy(data->setting->audio->jump);
    return (0);
}

char* ligne_txt(char* path, int end)
{
    int start = 0;
    FILE *stream;
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;

    stream = fopen(path, "r");
    while ((nread = getline(&line, &len, stream)) != -1) {
        if (start == end)
            return (line);
        start++;
    }
    free(line);
    fclose(stream);
    return (NULL);
}

void create_map_block(data_t *data)
{
    for (int cmp = 0; cmp != data->blocklist->size_txt; cmp++) {
        data->blocklist->map_block[cmp] = ligne_txt(data->blocklist->path, cmp);
    }
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}
