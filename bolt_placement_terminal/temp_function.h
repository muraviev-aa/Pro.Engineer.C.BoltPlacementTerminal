#ifndef BOLT_PLACEMENT_TERMINAL_TEMP_FUNCTION_H
#define BOLT_PLACEMENT_TERMINAL_TEMP_FUNCTION_H

#include <curses.h>

// Создаем таблицу
void draw_table_lines(WINDOW *sub1);

// Заполняем таблицу текстом
void table_text(WINDOW *sub1);

#endif //BOLT_PLACEMENT_TERMINAL_TEMP_FUNCTION_H
