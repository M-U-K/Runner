/*
** EPITECH PROJECT, 2020
** 22.c
** File description:
** 22.c
*/

#include "my_functions.h"

void type_block(data_t *data, int type, block_t *new)
{
    if (type == 0) {
        sfSprite_setTexture(new->sprite, data->texture->block, sfTrue);
        sfSprite_setTextureRect(new->sprite, new->rect);
        sfSprite_scale(new->sprite, new->scale);
    }
    if (type == 1) {
        new->scale.x = 1;
        new->scale.y = 1;
        new->rect.height = 48;
        new->rect.width = 48;
        sfSprite_scale(new->sprite, new->scale);
        sfSprite_setTexture(new->sprite, data->texture->trap, sfTrue);
        sfSprite_setTextureRect(new->sprite, new->rect);
    }
}

void add_block(data_t *data, int type, int x, int y)
{
    block_t *new = malloc(sizeof(block_t));
    sfVector2f pos = {x*48, y*48};
    sfIntRect rect = {0, 0, 16, 16};
    sfVector2f scale = {3, 3};
    sfFloatRect rect_hitbox = {x*48, y*48, 48, 48};

    new->rect_hitbox = rect_hitbox;
    new->pos = pos;
    new->org_pos = pos;
    new->rect = rect;
    new->scale = scale;
    new->block = type;
    new->sprite = sfSprite_create();
    sfSprite_setPosition(new->sprite, new->pos);
    type_block(data, type, new);
    new->next = data->blocklist->first;
    data->blocklist->first = new;
    data->blocklist->nbr++;
    new->id = data->blocklist->nbr;
    new->image = data->image->block;
}

void gest_type_block_inf(data_t *data, block_t *new, int type)
{
    if (type == 0) {
        sfSprite_scale(new->sprite, new->scale);
        sfSprite_setTexture(new->sprite, data->texture->block, sfTrue);
        sfSprite_setTextureRect(new->sprite, new->rect);
        new->image = data->image->block;
    }
    if (type == 1) {
        new->scale.x = 1;
        new->scale.y = 1;
        new->rect.height = 48;
        new->rect.width = 48;
        sfSprite_scale(new->sprite, new->scale);
        sfSprite_setTexture(new->sprite, data->texture->trap, sfTrue);
        sfSprite_setTextureRect(new->sprite, new->rect);
        new->image = data->image->trap;
    }
}

void add_block_inf(data_t *data, int type, int x, int y)
{
    block_t *new = malloc(sizeof(block_t));
    sfVector2f pos = {x, y};
    sfIntRect rect = {0, 0, 16, 16};
    sfVector2f scale = {3, 3};

    new->pos = pos;
    new->block = type;
    new->org_pos = pos;
    new->rect = rect;
    new->scale = scale;
    new->sprite = sfSprite_create();
    sfSprite_setPosition(new->sprite, new->pos);
    gest_type_block_inf(data, new, type);
    new->rect_hitbox = sfSprite_getGlobalBounds(new->sprite);
    new->next = data->blocklist_inf->first;
    data->blocklist_inf->first = new;
    data->blocklist_inf->nbr++;
    data->blocklist_inf->id_total++;
    new->id = data->blocklist_inf->id_total;
}

void set_coord(int x, int y, data_t *data)
{
    if (data->blocklist->map_block[y][x] == 'X')
        add_block(data, 0, x, y);
    if (data->blocklist->map_block[y][x] == 'A')
        add_block(data, 1, x, y);
}
