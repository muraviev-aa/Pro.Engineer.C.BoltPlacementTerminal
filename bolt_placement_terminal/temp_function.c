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

void table_text(WINDOW *sub1)
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
