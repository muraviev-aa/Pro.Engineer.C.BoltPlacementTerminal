#include "temp_function.h"
#include <stdlib.h>

void draw_table_lines(WINDOW *sub1)
{
    // Верхняя горизонтальная линия
    wmove(sub1, 1, 1);
    waddch(sub1, ACS_ULCORNER); // верхний левый угол
    for (int i = 2; i < 90; i++)
    {
        wmove(sub1, 1, i);
        waddch(sub1, ACS_HLINE); // горизонтальная линия
    }
    wmove(sub1, 1, 90);
    waddch(sub1, ACS_TTEE);  // начало средней разделит. линии
    for (int i = 91; i < 116; i++)
    {
        wmove(sub1, 1, i);
        waddch(sub1, ACS_HLINE); // горизонтальная линия
    }
    wmove(sub1, 1, 116);
    waddch(sub1, ACS_URCORNER); // верхний правый угол

    // Средняя горизонтальная линия
    for (int i = 2; i < 90; i++)
    {
        wmove(sub1, 4, i);
        waddch(sub1, ACS_HLINE); // горизонтальная линия
    }
    for (int i = 91; i < 116; i++)
    {
        wmove(sub1, 4, i);
        waddch(sub1, ACS_HLINE); // горизонтальная линия
    }

    // Левая вертикальная линия
    for (int i = 2; i < 7; i++)
    {
        wmove(sub1, i, 1);
        waddch(sub1, ACS_VLINE); // вертикальная линия
    }
    wmove(sub1, 4, 1);
    waddch(sub1, ACS_LTEE); // левый разделитель
    for (int i = 7; i < 25; i++)
    {
        wmove(sub1, i, 1);
        waddch(sub1, ACS_VLINE); // вертикальная линия
    }

    // Правая вертикальная линия
    for (int i = 2; i < 7; i++)
    {
        wmove(sub1, i, 116);
        waddch(sub1, ACS_VLINE); // вертикальная линия
    }
    wmove(sub1, 4, 116);
    waddch(sub1, ACS_RTEE); // правый разделитель
    for (int i = 7; i < 25; i++)
    {
        wmove(sub1, i, 116);
        waddch(sub1, ACS_VLINE); // вертикальная линия
    }

    // Средняя вертикальная линия
    for (int i = 2; i < 7; i++)
    {
        wmove(sub1, i, 90);
        waddch(sub1, ACS_VLINE); // вертикальная линия
    }
    wmove(sub1, 4, 90);
    waddch(sub1, ACS_PLUS);  // крест таблицы
    for (int i = 7; i < 25; i++)
    {
        wmove(sub1, i, 90);
        waddch(sub1, ACS_VLINE); // вертикальная линия
    }

    // Нижняя горизонтальная линия
    wmove(sub1, 25, 1);
    waddch(sub1, ACS_LLCORNER); // левый нижний угол
    for (int i = 2; i < 90; i++)
    {
        wmove(sub1, 25, i);
        waddch(sub1, ACS_HLINE); // горизонтальная линия
    }
    wmove(sub1, 25, 90);
    waddch(sub1, ACS_BTEE);  // начало средней разделит. линии
    for (int i = 91; i < 116; i++)
    {
        wmove(sub1, 25, i);
        waddch(sub1, ACS_HLINE); // горизонтальная линия
    }
    wmove(sub1, 25, 116);
    waddch(sub1, ACS_LRCORNER);// правый нижний угол
}

void table_header_text(WINDOW *sub1)
{
    // Шапка первый столбец
    wmove(sub1, 2, 28);
    wprintw(sub1, "Characteristics of the distance and");
    wmove(sub1, 3, 23);
    wprintw(sub1, "yield strength of the elements being connected");
    // Шапка второй столбец
    wmove(sub1, 2, 102);
    wprintw(sub1, "Bolt");
    wmove(sub1, 3, 100);
    wprintw(sub1, "spacing");
}

void fill_table_text(WINDOW *sub1)
{
    // Название таблицы
    wmove(sub1, 0, 92);
    waddstr(sub1, "Tabl.40 SP 16.13330.2017");
    // Пункт 1
    wmove(sub1, 5, 2);
    wprintw(sub1, "1. Distance between bolt hole centers in any direction:");
    wmove(sub1, 6, 5);
    wprintw(sub1, "a) minimum");
    wmove(sub1, 7, 9);
    wprintw(sub1, "at Ryn <= 375 N/mm^2");
    wmove(sub1, 7, 102);
    wprintw(sub1, "2,5d");
    wmove(sub1, 8, 9);
    wprintw(sub1, "at Ryn >  375 N/mm^2 (S390, S440, S550, S590, S690)");
    wmove(sub1, 8, 103);
    wprintw(sub1, "3d");
    wmove(sub1, 9, 5);
    wprintw(sub1, "b) maximum in the outer rows in the absence of bordering corners");
    wmove(sub1, 10, 8);
    wprintw(sub1, "during tension and compression");
    wmove(sub1, 10, 100);
    wprintw(sub1, "8d or 12d");
    // Пункт 2
    wmove(sub1, 13, 2);
    wprintw(sub1, "2. Test");
    // Пункт 3
    wmove(sub1, 18, 2);
    wprintw(sub1, "3. Test");
}

int enter_diam_bolt_hole(WINDOW *sub1)
{
    int diam_bolt_hole = 0;
    char info_diam_hole[3];
    char ch;
    do
    {
        //wclear(sub1);
        wmove(sub1, 0, 2);
        waddstr(sub1, "Enter bolt diameter (mm): ");
        wgetnstr(sub1, info_diam_hole, 2);
        diam_bolt_hole = atoi(info_diam_hole);
        wmove(sub1, 1, 2);
        wprintw(sub1, "Hole diameter is %d mm. If the information is correct then press 'y', if incorrect press 'n' ",
                diam_bolt_hole);
        ch = (char) wgetch(sub1);
        if (ch == 'n')
            delete_char(sub1, 1, 1, 95);
    } while (ch != 'y');
    wmove(sub1, 9, 100);
    wprintw(sub1, "%.1f mm", diam_bolt_hole * 2.5);
    wmove(sub1, 10, 102);
    wprintw(sub1, "%d mm", diam_bolt_hole * 3);
    //wrefresh(sub1);
    return diam_bolt_hole;
}

void delete_char(WINDOW *w, int row, int column, int count_ch)
{
    for (int i = 0; i < count_ch; i++)
    {
        wmove(w, row, column++);
        waddrawch(w, ' ');
        wrefresh(w);
    }
}
