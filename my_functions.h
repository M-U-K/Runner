/*
** EPITECH PROJECT, 2019
** my_functions.h
** File description:
** classic header
*/

#ifndef FCT_H
#define FCT_H
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>
#include <SFML/System.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "my_structs.h"
#include <unistd.h>

int gest_error(int ac, char **av);
void init_texture2(texture_t *new);
void init_texture3(texture_t *new);
void init_texture4(texture_t *new);
texture_t *init_texture(void);
void init_hud2(hud_t *new, sfVector2f pos_text);
hud_t *init_hud(void);
sandlist_t *init_map_sand(data_t *data);
citylist_t *init_map_city(data_t *data);
snowlist_t *init_map_snow(data_t *data);
void add_city2(data_t *data, int type, city_t *new, sfVector2f pos);
void add_city(data_t *data, int type);
void add_snow2(data_t *data, int type, snow_t *new, sfVector2f pos);
void add_snow3(data_t *data, int type, snow_t *new, sfVector2f pos);
void add_snow(data_t *data, int type);
void add_sand2(data_t *data, int type, sand_t *new, sfVector2f pos);
void add_sand3(data_t *data, int type, sand_t *new, sfVector2f pos);
void add_sand(data_t *data, int type);
map_t *init_map(data_t *data);
void init_player2(data_t *data, player_t *new);
player_t *init_player(data_t *data);
enemylist_t *init_enemylist(void);
int size_txt(char* path);
blocklist_inf_t *init_blocklist_inf(void);
blocklist_t *init_blocklist(char **av);
audio_t *init_audio(void);
void init_window2(window_t *new);
window_t *init_window(void);
cursor_t *init_cursor(void);
mtime_t *init_time(void);
setting_t *init_setting(void);
button_t *init_button(void);
menu_t *init_menu(data_t *data);
image_t *init_image(void);
data_t *init_data(int ac, char **av);
int hitbox_button(data_t *data);
void window_close(data_t *data);
void add_prev_list(data_t *data);
void free_block_inf(data_t *data);
void restart_map2(data_t *data);
void restart_map(data_t *data);
void nbr(int nb, char *str);
void reset_clock2(data_t *data);
void reset_clock3(data_t *data);
void reset_clock4(data_t *data);
void reset_clock5(data_t *data);
void reset_clock(data_t *data);
void event1(data_t *data);
void event2_2(data_t *data);
void event2(data_t *data);
void event3(data_t *data);
void event4(data_t *data);
void event5(data_t *data);
void event6(data_t *data);
void event7(data_t *data);
void event8(data_t *data);
void event9(data_t *data);
void event10(data_t *data);
void event11(data_t *data);
void event12(data_t *data);
void event13(data_t *data);
void event14(data_t *data);
void event15(data_t *data);
void event16(data_t *data);
void event17(data_t *data);
void event18(data_t *data);
void event_19_2(data_t *data);
void event19(data_t *data);
void event20(data_t *data);
void event21(data_t *data);
void event24(data_t *data);
void event22(data_t *data);
void event23(data_t *data);
void event(data_t *data);
void update_map_sand2(data_t *data, sand_t *actual_sand);
void update_map_sand(data_t *data);
void update_map_city2(data_t *data, city_t *actual_city);
void update_map_city(data_t *data);
void update_map_snow2(data_t *data, snow_t *actual_snow);
void update_map_snow(data_t *data);
void update_map(data_t *data);
void disp_map2(data_t *data);
void disp_map(data_t *data);
void disp_block(data_t *data);
void if_col2(data_t *data, player_t *player, block_t *block, sfFloatRect inter);
void if_col(data_t *data, player_t *player, block_t *block, sfFloatRect inter);
void col_in2(data_t *data, player_t *player, block_t *block);
void col_in3(data_t *data, player_t *player, block_t *block);
void col_in(player_t *player, block_t *block, data_t *data);
void hit_box_block(data_t *data);
void update_player_rect2(data_t *data);
void update_player_rect3(data_t *data);
void update_player_rect(data_t *data);
void act_player1(data_t *data);
void act_player2(data_t *data);
void act_player3(data_t *data);
void update_player3(data_t *data);
void update_player2(data_t *data);
void clock_player(data_t *data);
void update_player(data_t *data);
void disp_player(data_t *data);
void disp_menu2(data_t *data);
void disp_menu(data_t *data);
void set_music(data_t *data);
void type_block(data_t *data, int type, block_t *new);
void add_block(data_t *data, int type, int x, int y);
void gest_type_block_inf(data_t *data, block_t *new, int type);
void add_block_inf(data_t *data, int type, int x, int y);
void set_coord(int x, int y, data_t *data);
void set_block(data_t *data);
int create_random(int max, int nega);
void random_inf_block(data_t *data, int space, int blockadd, block_t *actual);
void end_gest_inf(data_t *data, block_t *actual);
void set_inf_block(data_t *data);
void gest_update_block(data_t *data, block_t *save, block_t *actual);
void update_block2(data_t *data, block_t *actual);
void update_block_inf(data_t *data, block_t *actual, block_t *save);
void update_block(data_t *data);
void change_grass2(block_t *actual, data_t *data, block_t *actual_comp);
void change_grass(block_t *actual, data_t *data);
void map_change_texture(data_t *data, block_t *actual);
void change_texture_block(data_t *data);
void map_texture_block(data_t *data, block_t *actual);
void update_texture_block(data_t *data);
void set_map(data_t *data);
void set_player(data_t *data);
void update_hud(data_t *data);
void disp_hud(data_t *data);
void game(data_t *data);
int start(data_t *data);
char* ligne_txt(char* path, int end);
void create_map_block(data_t *data);
void my_putchar(char c);
void my_putstr(char *str);
void help(void);


#endif
