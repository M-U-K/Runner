/*
** EPITECH PROJECT, 2020
** 18.c
** File description:
** 18.c
*/

#include "my_functions.h"

void if_col2(data_t *data, player_t *player, block_t *block, sfFloatRect inter)
{
    if (player->grav == 1) {
        data->player->boost = 0;
        data->player->jump = 0;
        player->grav = 0;
        if (data->player->actual_act != 90 && data->player->actual_act != 170) {
            data->player->actual_act = 170;
            update_player_rect(data);
        }

        if (inter.height >= 5 && data->player->status == 1) {
            data->player->pos.y -= inter.height/2;
            sfSprite_setPosition(data->player->sprite, data->player->pos);
        }
    }
}

void if_col(data_t *data, player_t *player, block_t *block, sfFloatRect inter)
{
    if (data->setting->cheat == 0) {
        if (block->block == 1) {
            data->player->actual_act = 250;
            update_player_rect(data);
            data->player->status = 0;
        }
        if ((inter.height+inter.width >= 24 && \
inter.top+48 < player->pos.y+player->rect_hitbox.height)) {
            data->player->actual_act = 250;
            update_player_rect(data);
            data->player->status = 0;
        }
    }
    if_col2(data, player, block, inter);
}

void col_in2(data_t *data, player_t *player, block_t *block)
{
    for (data->x_block = 0 + (data->inter.left - block->\
rect_hitbox.left); data->x_block < data->inter.width + 0\
+ (data->inter.left - block->rect_hitbox.left); data->x_block++) {
        data->player_color = sfImage_getPixel(player->image, \
data->x_player, data->y_player);
        data->block_color = sfImage_getPixel(block->image, \
data->x_block, data->y_block);
        if (data->player_color.r != 0 && data->player_color.g\
!= 0 && data->player_color.b != 0 && data->player_color.a != \
0 && data->block_color.r != 0 && data->block_color.g != 0 && \
data->block_color.b != 0 && data->block_color.a != 0) {
            if_col(data, player, block, data->inter);
        }
    }
}

void col_in3(data_t *data, player_t *player, block_t *block)
{
    for (data->x_player = player->actual_pos + (data->inter.left \
- player->rect_hitbox.left); data->x_player < data->\
inter.width + player->actual_pos+(data->inter.left - player\
->rect_hitbox.left); data->x_player++) {
        for (data->y_block = 0 + (data->inter.top - block->\
rect_hitbox.top); data->y_block < data->inter.height+0+(data->\
inter.top - block->rect_hitbox.top); data->y_block++) {
            col_in2(data, player, block);
        }
    }
}

void col_in(player_t *player, block_t *block, data_t *data)
{
    data->x_player = 0;
    data->y_player = 0;
    data->x_block = 0;
    data->y_block = 0;
    player->rect_hitbox = sfSprite_getGlobalBounds(player->sprite);
    block->rect_hitbox = sfSprite_getGlobalBounds(block->sprite);
    if (sfFloatRect_intersects(&player->rect_hitbox, &block->\
rect_hitbox, &data->inter)) {
        for (data->y_player = player->actual_act+(data->inter.top\
- player->rect_hitbox.top); data->y_player < data->inter.height+\
player->actual_act+(data->inter.top - player->rect_hitbox.top); \
data->y_player++) {
            col_in3(data, player, block);
        }
    }
}
