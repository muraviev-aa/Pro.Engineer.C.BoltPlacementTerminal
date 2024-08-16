#ifndef BOLT_PLACEMENT_TERMINAL_TEMP_FUNCTION_H
#define BOLT_PLACEMENT_TERMINAL_TEMP_FUNCTION_H

#include <curses.h>

// Создаем таблицу
void draw_table_lines(WINDOW *sub1);

// Заполняем шапку таблицы
void table_header_text(WINDOW *sub1);

// Заполняем таблицу текстом
void fill_table_text(WINDOW *sub1);

// Вводим диаметр отверстия под болт
int enter_diam_bolt_hole(WINDOW *sub1);

#endif //BOLT_PLACEMENT_TERMINAL_TEMP_FUNCTION_H
