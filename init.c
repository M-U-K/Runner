/*
** EPITECH PROJECT, 2020
** 2.c
** File description:
** 2.c
*/

#include "my_functions.h"

void init_hud2(hud_t *new, sfVector2f pos_text)
{
    new->past_time = 0;
    new->actual_time = 0;
    new->diff_time = 0;
    new->diff_time_speed = 0;
    new->score = 0;
    new->pos_text = pos_text;
    new->score_text = malloc(sizeof(char));
    new->score_text[0] = 0;
    new->score_text[1] = 0;
    new->font = sfFont_createFromFile("cirno_project_2/font/SovietProgram.ttf");
    new->font2 = sfFont_\
createFromFile("cirno_project_2/font/good times rg.ttf");
    new->text = sfText_create();
    new->text2 = sfText_create();
    sfText_setPosition(new->text, new->pos_text);
    sfText_setString(new->text, new->score_text);
}

hud_t *init_hud(void)
{
    hud_t *new = malloc(sizeof(hud_t));
    sfVector2f pos_text = {1250, 10};
    sfVector2f pos_text2 = {1000, 10};

    init_hud2(new, pos_text);
    sfText_setStyle(new->text, sfTextRegular);
    sfText_setCharacterSize(new->text, 50);
    sfText_setFont(new->text, new->font);
    sfText_setPosition(new->text2, pos_text2);
    sfText_setString(new->text2, "Score :");
    sfText_setStyle(new->text2, sfTextRegular);
    sfText_setCharacterSize(new->text2, 50);
    sfText_setFont(new->text2, new->font2);
    return (new);
}

sandlist_t *init_map_sand(data_t *data)
{
    sandlist_t *new = malloc(sizeof(sandlist_t));
    sand_t *sand = malloc(sizeof(sand_t));
    sand->next = NULL;
    new->nbr = 0;
    new->first = sand;
    return (new);
}

citylist_t *init_map_city(data_t *data)
{
    citylist_t *new = malloc(sizeof(citylist_t));
    city_t *city = malloc(sizeof(city_t));
    city->next = NULL;
    new->nbr = 0;
    new->first = city;
    return (new);
}

snowlist_t *init_map_snow(data_t *data)
{
    snowlist_t *new = malloc(sizeof(snowlist_t));
    snow_t *snow = malloc(sizeof(snow_t));
    snow->next = NULL;
    new->nbr = 0;
    new->first = snow;
    return (new);
}
