/*
** EPITECH PROJECT, 2020
** 7.c
** File description:
** 7.c
*/

#include "my_functions.h"

setting_t *init_setting(void)
{
    setting_t *new = malloc(sizeof(setting_t));

    new->inf = 0;
    new->time = init_time();
    new->audio = init_audio();
    new->cursor = init_cursor();
    new->window = init_window();
    new->cheat = 0;
    new->mute_jump = 0;
    return (new);
}

button_t *init_button(void)
{
    button_t *new = malloc(sizeof(button_t));

    new->key_can_pressed = 0;
    new->button_can_pressed = 0;
    return (new);
}

menu_t *init_menu(data_t *data)
{
    menu_t *new = malloc(sizeof(menu_t));

    new->button = init_button();
    new->actual_menu = 2;
    new->menu1 = sfSprite_create();
    new->menu2 = sfSprite_create();
    new->menu3 = sfSprite_create();
    new->menu4 = sfSprite_create();
    new->menu5 = sfSprite_create();
    new->menu6 = sfSprite_create();
    new->menu7 = sfSprite_create();
    sfSprite_setTexture(new->menu1, data->texture->menu1, sfTrue);
    sfSprite_setTexture(new->menu2, data->texture->menu2, sfTrue);
    sfSprite_setTexture(new->menu3, data->texture->menu3, sfTrue);
    sfSprite_setTexture(new->menu4, data->texture->menu4, sfTrue);
    sfSprite_setTexture(new->menu5, data->texture->menu5, sfTrue);
    sfSprite_setTexture(new->menu6, data->texture->menu6, sfTrue);
    sfSprite_setTexture(new->menu7, data->texture->menu7, sfTrue);
    return (new);
}

image_t *init_image(void)
{
    image_t *new = malloc(sizeof(image_t));
    new->cirno = sfImage_createFromFile\
("cirno_project_2/player/cirno/cirno.png");
    new->remilia = sfImage_createFromFile\
("cirno_project_2/player/cirno/cirno.png");
    new->alice = sfImage_createFromFile\
("cirno_project_2/player/cirno/cirno.png");
    new->marisa = sfImage_createFromFile\
("cirno_project_2/player/cirno/cirno.png");
    new->block = sfImage_createFromFile\
("cirno_project_2/block/block.png");
    new->trap = sfImage_createFromFile\
("cirno_project_2/block/trap.png");
    return (new);
}

data_t *init_data(int ac, char **av)
{
    data_t *new = malloc(sizeof(data_t));
    sfFloatRect inter = {0, 0, 0, 0};

    new->setting = init_setting();
    new->texture = init_texture();
    new->image = init_image();
    new->blocklist = init_blocklist(av);
    new->blocklist_inf = init_blocklist_inf();
    new->enemylist = init_enemylist();
    new->player = init_player(new);
    new->map = init_map(new);
    new->hud = init_hud();
    new->menu = init_menu(new);
    new->x_player = 0;
    new->y_player = 0;
    new->x_block = 0;
    new->y_block = 0;
    new->inter = inter;
    return (new);
}
