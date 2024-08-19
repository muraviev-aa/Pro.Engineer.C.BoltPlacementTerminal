#include "temp_function.h"
#include <curses.h>
#include <stdio.h>

int main(void)
{
    WINDOW *sub1;
    int maxx, maxy;
    initscr();

    // Создание цветовых пар
    start_color();
    init_pair(1, COLOR_BLUE, COLOR_WHITE);     // базовое окно базовый белый

    // Базовое окно терминала
    bkgd(COLOR_PAIR(1));
    //box(stdscr, 0, 0);
    refresh();

    // Определяем размеры и положение доп. окон
    getmaxyx(stdscr, maxy, maxx);
    //halfx = maxx >> 1;
    //halfy = maxy >> 1;

    // Создаем доп. окна
    //sub1 = subwin(stdscr, maxy - 2, maxx - 2, 1, 1);
    sub1 = subwin(stdscr, maxy - 4, maxx - 2, 3, 1);
    if (sub1 == NULL)
    {
        endwin();
        puts("Unable to create subwindow");
        return (1);
    }

    draw_table_lines(sub1);
    table_header_text(sub1);
    fill_table_text(sub1);
    //enter_diam_bolt_hole(sub1);

    wrefresh(sub1);
    refresh();

    getch();
    endwin();
    return 0;
}