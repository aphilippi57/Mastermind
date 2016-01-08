#ifndef UTILS_H
#define UTILS_H

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
  Constantes
*/

#define STRMAX 256

#define FONT "../font/Opificio-Serif-Bold.ttf"

#define HEIGHT 600
#define WIDTH  800

#define TRY 10
#define TARGET_SIZE 4

#define BANNER_MARGIN (HEIGHT + WIDTH) / 240
#define BOARD_MARGIN  (HEIGHT + WIDTH) / 30

#define SCORES_SIZE HEIGHT / 12
#define ANSWER_SIZE HEIGHT / 10
#define STACK_SIZE  HEIGHT / 9
#define INTERSPACE  HEIGHT / 60

#define CLUE_SIZE     ANSWER_SIZE / 2
#define BANNER_SIZE   SCORES_SIZE + 2 * BANNER_MARGIN

#define ANSWER_X(i) BOARD_MARGIN + i * (ANSWER_SIZE + INTERSPACE)
#define ANSWER_Y(i) BANNER_SIZE + BOARD_MARGIN + CLUE_SIZE + INTERSPACE + i * (ANSWER_SIZE + INTERSPACE)

#define CLUE_X(i) ANSWER_X(i)
#define CLUE_Y    BANNER_SIZE + BOARD_MARGIN

#define STACK_X(i) INTERSPACE + i * (INTERSPACE + STACK_SIZE)
#define STACK_Y    HEIGHT - INTERSPACE - STACK_SIZE

#define CURSOR_X(i) STACK_X(i) 
#define CURSOR_Y    HEIGHT - INTERSPACE

/*
  structures
*/

typedef struct position
{
  double x;
  double y;
} s_pos;

#endif
