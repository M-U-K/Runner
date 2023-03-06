/*
** EPITECH PROJECT, 2019
** my_structs.h
** File description:
** classic header
*/

#ifndef STR_H
#define STR_H

typedef struct cursor_s
{
    sfSprite *sprite_cursor;
    sfTexture *texture_cursor;
    sfVector2f pos_cursor;
}cursor_t;

typedef struct audio_s
{
    int actual_music;
    sfMusic *jump;
    sfMusic *cirno;
    sfMusic *flandre;
}audio_t;

typedef struct font_s
{
    int actual_font;
    sfFont *nom1;
}font_t;

typedef struct mtime_s
{
    sfClock *clock;
    double game_speed;
    double time;
}mtime_t;


typedef struct window_s
{
    sfRenderWindow *window;
    sfVector2u org_size;
    sfVector2u size_1920_1080;
    sfVector2u size_1600_900;
    sfVector2u size_1280_720;
    sfVector2u size_800_600;
    double resize_x;
    double resize_y;
    double window_x;
    double window_y;
    double org_window_x;
    double org_window_y;
}window_t;

typedef struct setting_s
{
    struct window_s *window;
    struct cursor_s *cursor;
    struct audio_s *audio;
    struct font_s *font;
    struct mtime_s *time;
    int mute_jump;
    int cheat;
    int inf;
    sfEvent event;
    char *score;
}setting_t;

typedef struct block_s
{
    int type;
    int block;
    long id;
    sfVector2f pos;
    sfVector2f org_pos;
    sfVector2f scale;
    sfIntRect rect;
    sfFloatRect rect_hitbox;
    sfSprite *sprite;
    sfImage *image;
    struct block_s *next;
    struct block_s *prev;
}block_t;

typedef struct blocklist_inf_s
{
    int nbr;
    long id_total;
    double speed;
    int id_right;
    int id_suppr;
    sfVector2f pos_right;
    double past_time;
    double actual_time;
    double diff_time;
    double diff_time_speed;
    struct block_s *right;
    struct block_s *first;
}blocklist_inf_t;

typedef struct blocklist_s
{
    int nbr;
    int size_txt;
    double speed;
    double past_time;
    double actual_time;
    double diff_time;
    double diff_time_speed;
    char *path;
    char *txt;
    char **map_block;
    struct block_s *first;
}blocklist_t;

typedef struct enemy_s
{
    int type;
    struct enemy_s *next;
}enemy_t;

typedef struct enemylist_s
{
    int nbr;
    struct enemy_s *first;
}enemylist_t;

typedef struct sandlist_s
{
    int nbr;
    struct sand_s *first;
}sandlist_t;

typedef struct sand_s
{
    sfVector2f pos1;
    sfSprite *sand1;
    double speed;
    double past_time;
    double actual_time;
    double diff_time;
    double diff_time_speed;
    struct sand_s *next;
}sand_t;

typedef struct citylist_s
{
    int nbr;
    struct city_s *first;
}citylist_t;

typedef struct city_s
{
    sfVector2f pos1;
    sfSprite *city1;
    double speed;
    double past_time;
    double actual_time;
    double diff_time;
    double diff_time_speed;
    struct city_s *next;
}city_t;

typedef struct snowlist_s
{
    int nbr;
    struct snow_s *first;
}snowlist_t;

typedef struct snow_s
{
    sfVector2f pos1;
    sfSprite *snow1;
    double speed;
    double past_time;
    double actual_time;
    double diff_time;
    double diff_time_speed;
    struct snow_s *next;
}snow_t;

typedef struct map_s
{
    int actual_map;
    struct sandlist_s *sandlist;
    struct citylist_s *citylist;
    struct snowlist_s *snowlist;
}map_t;



typedef struct player_s
{
    int status;
    int actual_player;
    int actual_act;
    int actual_pos;
    int grav;
    int jump;
    double boost;
    double jump_boost;
    sfImage *image;
    sfSprite *sprite;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfFloatRect rect_hitbox;
    double speed;
    double past_time;
    double actual_time;
    double diff_time_move;
    double diff_time_grav;
    double diff_time_anime;
    double diff_time_rect;
    double diff_time_speed;
}player_t;

typedef struct hud_s
{
    sfFont *font;
    sfFont *font2;
    sfText *text;
    sfText *text2;
    double speed;
    double past_time;
    double actual_time;
    double diff_time;
    double diff_time_speed;
    int score;
    char *score_text;
    sfVector2f pos_text;
}hud_t;

typedef struct button_s
{
    int button_can_pressed;
    int key_can_pressed;
    sfVector2f coord;
    sfVector2f lenght;
}button_t;

typedef struct menu_s
{
    struct button_s *button;
    int actual_menu;
    int menu_before_setting;
    sfSprite *menu1;
    sfSprite *menu2;
    sfSprite *menu3;
    sfSprite *menu4;
    sfSprite *menu5;
    sfSprite *menu6;
    sfSprite *menu7;
}menu_t;

typedef struct texture_s
{
    sfTexture *sand1;
    sfTexture *sand2;
    sfTexture *sand3;
    sfTexture *sand4;
    sfTexture *sand5;
    sfTexture *sand6;
    sfTexture *sand7;
    sfTexture *sand8;
    sfTexture *sand9;
    sfTexture *sand10;
    sfTexture *city1;
    sfTexture *city2;
    sfTexture *city3;
    sfTexture *snow1;
    sfTexture *snow2;
    sfTexture *snow3;
    sfTexture *snow4;
    sfTexture *snow5;
    sfTexture *snow6;
    sfTexture *snow7;
    sfTexture *menu1;
    sfTexture *menu2;
    sfTexture *menu3;
    sfTexture *menu4;
    sfTexture *menu5;
    sfTexture *menu6;
    sfTexture *menu7;
    sfTexture *block;
    sfTexture *trap;
    sfTexture *break_block;
    sfTexture *cirno;
    sfTexture *cirno2;
    sfTexture *cirno3;
    sfTexture *cirno4;
}texture_t;

typedef struct image_s
{
    sfImage *cirno;
    sfImage *remilia;
    sfImage *marisa;
    sfImage *alice;
    sfImage *block;
    sfImage *trap;
}image_t;

typedef struct data_s
{
    struct setting_s *setting;
    struct blocklist_s *blocklist;
    struct blocklist_inf_s *blocklist_inf;
    struct enemylist_s *enemylist;
    struct player_s *player;
    struct map_s *map;
    struct hud_s *hud;
    struct menu_s *menu;
    struct texture_s *texture;
    struct image_s *image;
    int x_player;
    int y_player;
    int x_block;
    int y_block;
    sfColor player_color;
    sfColor block_color;
    sfFloatRect inter;

}data_t;

#endif
