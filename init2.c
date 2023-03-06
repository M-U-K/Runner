/*
** EPITECH PROJECT, 2020
** 5.c
** File description:
** 5.c
*/

#include "my_functions.h"

player_t *init_player(data_t *data)
{
    player_t *new = malloc(sizeof(player_t));
    sfVector2f pos = {80, 730};
    sfVector2f scale = {1, 1};
    sfIntRect rect = {0, 90, 70, 80};

    init_player2(data, new);
    new->actual_player = 1;
    new->status = 1;
    new->sprite = sfSprite_create();
    new->pos = pos;
    new->scale = scale;
    new->rect = rect;
    new->image = data->image->cirno;
    sfSprite_scale(new->sprite, new->scale);
    sfSprite_setPosition(new->sprite, new->pos);
    sfSprite_setTexture(new->sprite, data->texture->cirno, sfTrue);
    sfSprite_setTextureRect(new->sprite, new->rect);
    new->rect_hitbox = sfSprite_getGlobalBounds(new->sprite);
    return (new);
}

enemylist_t *init_enemylist(void)
{
    enemylist_t *new = malloc(sizeof(enemylist_t));

    return (new);
}

int size_txt(char* path)
{
    FILE *stream;
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;
    int size = 0;

    stream = fopen(path, "r");
    while ((nread = getline(&line, &len, stream)) != -1) {
        size++;
    }
    free(line);
    fclose(stream);
    return (size);
}

blocklist_inf_t *init_blocklist_inf(void)
{
    blocklist_inf_t *new = malloc(sizeof(blocklist_inf_t));
    block_t *block = malloc(sizeof(block_t));

    block->next = NULL;
    new->nbr = 0;
    new->id_total = 0;
    new->first = block;
    new->id_suppr = 0;
    new->speed = 1;
    new->past_time = 0;
    new->actual_time = 0;
    new->diff_time = 0;
    new->diff_time_speed = 0;
    return (new);
}

blocklist_t *init_blocklist(char **av)
{
    blocklist_t *new = malloc(sizeof(blocklist_t));
    block_t *block = malloc(sizeof(block_t));

    block->next = NULL;
    new->nbr = 0;
    new->first = block;
    new->path = av[1];
    new->size_txt = size_txt(new->path);
    new->speed = 1;
    new->past_time = 0;
    new->actual_time = 0;
    new->diff_time = 0;
    new->diff_time_speed = 0;
    new->map_block = malloc(sizeof(char *) * (new->size_txt) + 1);
    return (new);
}
