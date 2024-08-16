#include "temp_function.h"

void draw_table_lines(WINDOW *sub1)
{
    // Верхняя горизонтальная линия
    wmove(sub1, 3, 1);
    waddch(sub1, ACS_ULCORNER); // верхний левый угол
    for (int i = 2; i < 90; i++)
    {
        wmove(sub1, 3, i);
        waddch(sub1, ACS_HLINE); // горизонтальная линия
    }
    wmove(sub1, 3, 90);
    waddch(sub1, ACS_TTEE);  // начало средней разделит. линии
    for (int i = 91; i < 116; i++)
    {
        wmove(sub1, 3, i);
        waddch(sub1, ACS_HLINE); // горизонтальная линия
    }
    wmove(sub1, 3, 116);
    waddch(sub1, ACS_URCORNER); // верхний правый угол

    // Средняя горизонтальная линия
    for (int i = 2; i < 90; i++)
    {
        wmove(sub1, 6, i);
        waddch(sub1, ACS_HLINE); // горизонтальная линия
    }
    for (int i = 91; i < 116; i++)
    {
        wmove(sub1, 6, i);
        waddch(sub1, ACS_HLINE); // горизонтальная линия
    }

    // Левая вертикальная линия
    for (int i = 4; i < 7; i++)
    {
        wmove(sub1, i, 1);
        waddch(sub1, ACS_VLINE); // вертикальная линия
    }
    wmove(sub1, 6, 1);
    waddch(sub1, ACS_LTEE); // левый разделитель
    for (int i = 7; i < 28; i++)
    {
        wmove(sub1, i, 1);
        waddch(sub1, ACS_VLINE); // вертикальная линия
    }

    // Правая вертикальная линия
    for (int i = 4; i < 7; i++)
    {
        wmove(sub1, i, 116);
        waddch(sub1, ACS_VLINE); // вертикальная линия
    }
    wmove(sub1, 6, 116);
    waddch(sub1, ACS_RTEE); // правый разделитель
    for (int i = 7; i < 28; i++)
    {
        wmove(sub1, i, 116);
        waddch(sub1, ACS_VLINE); // вертикальная линия
    }

    // Средняя вертикальная линия
    for (int i = 4; i < 7; i++)
    {
        wmove(sub1, i, 90);
        waddch(sub1, ACS_VLINE); // вертикальная линия
    }
    wmove(sub1, 6, 90);
    waddch(sub1, ACS_PLUS);  // крест таблицы
    for (int i = 7; i < 28; i++)
    {
        wmove(sub1, i, 90);
        waddch(sub1, ACS_VLINE); // вертикальная линия
    }

    // Нижняя горизонтальная линия
    wmove(sub1, 27, 1);
    waddch(sub1, ACS_LLCORNER); // левый нижний угол
    for (int i = 2; i < 90; i++)
    {
        wmove(sub1, 32, i);
        waddch(sub1, ACS_HLINE); // горизонтальная линия
    }
    wmove(sub1, 27, 90);
    waddch(sub1, ACS_BTEE);  // начало средней разделит. линии
    for (int i = 91; i < 116; i++)
    {
        wmove(sub1, 32, i);
        waddch(sub1, ACS_HLINE); // горизонтальная линия
    }
    wmove(sub1, 32, 116);
    waddch(sub1, ACS_LRCORNER);// правый нижний угол
}

void table_header_text(WINDOW *sub1)
{
    // Шапка первый столбец
    wmove(sub1, 4, 28);
    wprintw(sub1, "Characteristics of the distance and");
    wmove(sub1, 5, 23);
    wprintw(sub1, "yield strength of the elements being connected");
    // Шапка второй столбец
    wmove(sub1, 4, 102);
    wprintw(sub1, "Bolt");
    wmove(sub1, 5, 100);
    wprintw(sub1, "spacing");
}

void fill_table_text(WINDOW *sub1)
{
    // Пункт 1
    wmove(sub1, 7, 2);
    wprintw(sub1, "1. Distance between bolt hole centers in any direction:");
    wmove(sub1, 8, 5);
    wprintw(sub1, "a) minimum");
    wmove(sub1, 9, 9);
    wprintw(sub1, "at Ryn <= 375 N/mm^2");
    wmove(sub1, 9, 102);
    wprintw(sub1, "2,5d");
    wmove(sub1, 10, 9);
    wprintw(sub1, "at Ryn >  375 N/mm^2 (S390, S440, S550, S590, S690)");
    wmove(sub1, 10, 103);
    wprintw(sub1, "3d");
    wmove(sub1, 11, 5);
    /*wprintw(sub1, "b) maximum in the outer rows in the absence of bordering corners");
    wmove(sub1, 12, 8);
    wprintw(sub1, "during tension and compression");
    wmove(sub1, 12, 100);
    wprintw(sub1, "8d or 12d");*/
    // Пункт 2
    wmove(sub1, 15, 2);
    wprintw(sub1, "2. Test");
    // Пункт 3
    wmove(sub1, 25, 2);
    wprintw(sub1, "3. Test");
}
