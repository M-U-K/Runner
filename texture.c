/*
** EPITECH PROJECT, 2020
** 1.c
** File description:
** 1.c
*/

#include "my_functions.h"

int gest_error(int ac, char **av)
{
    return (0);
}

void init_texture2(texture_t *new)
{
    new->sand1 = sfTexture_createFromFile\
("cirno_project_2/map/sand/1.png", NULL);
    new->sand2 = sfTexture_createFromFile\
("cirno_project_2/map/sand/2.png", NULL);
    new->sand3 = sfTexture_createFromFile\
("cirno_project_2/map/sand/3.png", NULL);
    new->sand4 = sfTexture_createFromFile\
("cirno_project_2/map/sand/4.png", NULL);
    new->sand5 = sfTexture_createFromFile\
("cirno_project_2/map/sand/5.png", NULL);
    new->sand6 = sfTexture_createFromFile\
("cirno_project_2/map/sand/6.png", NULL);
    new->sand7 = sfTexture_createFromFile\
("cirno_project_2/map/sand/7.png", NULL);
    new->sand8 = sfTexture_createFromFile\
("cirno_project_2/map/sand/8.png", NULL);
    new->sand9 = sfTexture_createFromFile\
("cirno_project_2/map/sand/9.png", NULL);
    new->sand10 = sfTexture_createFromFile\
("cirno_project_2/map/sand/10.png", NULL);
}

void init_texture3(texture_t *new)
{
    new->city1 = sfTexture_createFromFile\
("cirno_project_2/map/city/1.png", NULL);
    new->city2 = sfTexture_createFromFile\
("cirno_project_2/map/city/2.png", NULL);
    new->city3 = sfTexture_createFromFile\
("cirno_project_2/map/city/3.png", NULL);
    new->snow1 = sfTexture_createFromFile\
("cirno_project_2/map/snow/1.png", NULL);
    new->snow2 = sfTexture_createFromFile\
("cirno_project_2/map/snow/2.png", NULL);
    new->snow3 = sfTexture_createFromFile\
("cirno_project_2/map/snow/3.png", NULL);
    new->snow4 = sfTexture_createFromFile\
("cirno_project_2/map/snow/4.png", NULL);
    new->snow5 = sfTexture_createFromFile\
("cirno_project_2/map/snow/5.png", NULL);
    new->snow6 = sfTexture_createFromFile\
("cirno_project_2/map/snow/6.png", NULL);
    new->snow7 = sfTexture_createFromFile\
("cirno_project_2/map/snow/7.png", NULL);

}

void init_texture4(texture_t *new)
{
    new->menu1 = sfTexture_createFromFile\
("cirno_project_2/menu/menu1.png", NULL);
    new->menu2 = sfTexture_createFromFile\
("cirno_project_2/menu/menu2.png", NULL);
    new->menu3 = sfTexture_createFromFile\
("cirno_project_2/menu/menu3.png", NULL);
    new->menu4 = sfTexture_createFromFile\
("cirno_project_2/menu/menu4.png", NULL);
    new->menu5 = sfTexture_createFromFile\
("cirno_project_2/menu/menu5.png", NULL);
    new->menu6 = sfTexture_createFromFile\
("cirno_project_2/menu/menu6.png", NULL);
    new->menu7 = sfTexture_createFromFile\
("cirno_project_2/menu/menu7.png", NULL);
    new->block = sfTexture_createFromFile\
("cirno_project_2/block/block.png", NULL);
    new->trap = sfTexture_createFromFile\
("cirno_project_2/block/trap.png", NULL);

}

texture_t *init_texture(void)
{
    texture_t *new = malloc(sizeof(texture_t));

    init_texture2(new);
    init_texture3(new);
    init_texture4(new);
    new->break_block = sfTexture_createFromFile\
("cirno_project_2/block/breakable-block.jpg", NULL);
    new->cirno = sfTexture_createFromFile\
("cirno_project_2/player/cirno/cirno.png", NULL);
    new->cirno2 = sfTexture_createFromFile\
("cirno_project_2/player/cirno/cirno2.png", NULL);
    new->cirno3 = sfTexture_createFromFile\
("cirno_project_2/player/cirno/cirno3.png", NULL);
    new->cirno4 = sfTexture_createFromFile\
("cirno_project_2/player/cirno/cirno4.png", NULL);
    return (new);
}
