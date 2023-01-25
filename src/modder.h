/*
 * Part of Astonia Client (c) Daniel Brockhaus. Please read license.txt.
 */

int amod_init(void);
void amod_exit(void);
void amod_gamestart(void);
void amod_frame(void);
void amod_tick(void);
int amod_display_skill_line(int v,int base,int curr,int cn,char *buf);
void amod_mouse_move(int x,int y);
int amod_mouse_click(int x,int y,int what);

extern char *game_email_main;
extern char *game_email_cash;
extern char *game_url;
extern char **game_rankname;
extern int *game_rankcount;
