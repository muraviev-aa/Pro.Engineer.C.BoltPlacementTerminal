#include "temp_function.h"
#include <curses.h>
#include <stdio.h>

int main(void)
{
    WINDOW *sub1, *a;
    int maxx, maxy;
    int diam_bolt_hole;
    initscr();

    // Создание цветовых пар
    start_color();
    init_pair(1, COLOR_BLUE, COLOR_WHITE);     // окно sub1 - базовый белый
    init_pair(2, COLOR_WHITE, COLOR_BLUE);     // окно a - базовый синий

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
    a = subwin(stdscr, LINES - 28, COLS - 2, 1, 1);

    if (sub1 == NULL || a == NULL)
    {
        endwin();
        puts("Unable to create subwindow");
        return (1);
    }
    wbkgd(a, COLOR_PAIR(2));

    draw_table_lines(sub1);
    table_header_text(sub1);
    fill_table_text(sub1);

    diam_bolt_hole = enter_diam_bolt_hole(a, sub1);
    enter_thick_outer_elem(a, sub1, diam_bolt_hole);
    enter_dist_across_force_between_rows(a, sub1, diam_bolt_hole);

    wrefresh(sub1);
    refresh();

    getch();
    endwin();
    return 0;
}