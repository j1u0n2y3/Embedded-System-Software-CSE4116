#ifndef _MAIN_P_H_
#define _MAIN_P_H_

#include "main.h"

void main_process();
void mode_up(enum mode *);
void mode_down(enum mode *);
void init_buf(char *, char *, char *);
char switch_check(struct input_msg *input);

#endif /* _MAIN_P_H_ */