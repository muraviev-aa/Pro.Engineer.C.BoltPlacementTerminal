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
    wmove(sub1, 0, 93);
    waddstr(sub1, "Tabl.40 SP 16.13330.2017");
    /* Пункт 1 */
    wmove(sub1, 5, 2);
    wprintw(sub1, "1. Distance between bolt hole centers in any direction:");
    // а)
    wmove(sub1, 6, 6);
    wprintw(sub1, "a) minimum");
    wmove(sub1, 7, 11);
    wprintw(sub1, "at Ryn <= 375 N/mm^2");
    wmove(sub1, 7, 102);
    wprintw(sub1, "2,5d");
    wmove(sub1, 8, 11);
    wprintw(sub1, "at Ryn >  375 N/mm^2 (S390, S440, S550, S590, S690)");
    wmove(sub1, 8, 103);
    wprintw(sub1, "3d");
    // б)
    wmove(sub1, 9, 6);
    wprintw(sub1, "b) maximum in the outer rows in the absence of bordering corners");
    wmove(sub1, 10, 9);
    wprintw(sub1, "during tension and compression");
    wmove(sub1, 9, 99);
    wprintw(sub1, "8d or 12t");
    // в)
    wmove(sub1, 11, 6);
    wprintw(sub1, "c) maximum in the middle rows, as well as in the outer rows in the presence");
    wmove(sub1, 12, 9);
    wprintw(sub1, "of bordering corners:");
    wmove(sub1, 13, 11);
    wprintw(sub1, "when stretched");
    wmove(sub1, 13, 99);
    wprintw(sub1, "16d or 24t");
    wmove(sub1, 14, 11);
    wprintw(sub1, "when compressed");
    wmove(sub1, 14, 99);
    wprintw(sub1, "12d or 18t");
    /* Пункт 2 */
    wmove(sub1, 15, 2);
    wprintw(sub1, "2. Distance from the center of the bolt hole to the edge of the element");
    // а)
    wmove(sub1, 16, 6);
    wprintw(sub1, "a) minimum along force:");
    wmove(sub1, 17, 11);
    wprintw(sub1, "at Ryn <= 375 N/mm^2");
    wmove(sub1, 17, 103);
    wprintw(sub1, "2d");
    wmove(sub1, 18, 11);
    wprintw(sub1, "at Ryn > 375 N/mm^2 (S390, S440, S550, S590, S690)");
    wmove(sub1, 18, 102);
    wprintw(sub1, "2,5d");
    // б)
    wmove(sub1, 19, 6);
    wprintw(sub1, "b) the same, across the effort:");
    wmove(sub1, 20, 11);
    wprintw(sub1, "with cut edges");
    wmove(sub1, 20, 102);
    wprintw(sub1, "1,5d");
    wmove(sub1, 21, 11);
    wprintw(sub1, "with rolled edges edges");
    wmove(sub1, 21, 102);
    wprintw(sub1, "1,2d");
    // в)
    wmove(sub1, 22, 6);
    wprintw(sub1, "c) maximum");
    wmove(sub1, 22, 100);
    wprintw(sub1, "4d or 8t");
    // г)
    wmove(sub1, 23, 6);
    wprintw(sub1, "d) minimum in friction connection at any edge and any direction of force");
    wmove(sub1, 23, 102);
    wprintw(sub1, "1,3d");
    // Пункт 3
    wmove(sub1, 24, 2);
    wprintw(sub1, "3. The bolts are staggered. Minimum hole center distance along bolt force");
    wmove(sub1, 24, 101);
    wprintw(sub1, "u+1,5d");
    wrefresh(sub1);
}

int enter_diam_bolt_hole(WINDOW *a, WINDOW *sub1)
{
    int d_bolt_hole;
    char info_diam_hole[3];
    char ch;
    do
    {
        wclear(a);
        wmove(a, 0, 2);
        waddstr(a, "1.Enter bolt hole diameter (mm): ");
        wgetnstr(a, info_diam_hole, 2);
        d_bolt_hole = atoi(info_diam_hole);
        wmove(a, 1, 4);
        wprintw(a, "Hole diameter is %d mm. If the information is correct then press 'y', if incorrect press 'n' ",
                d_bolt_hole);
        ch = (char) wgetch(a);
        if (ch == 'n')
            delete_char(a, 1, 1, 95);
    } while (ch != 'y');
    // Пункт 1 а)
    wmove(sub1, 7, 100);
    wprintw(sub1, "%.1f mm", d_bolt_hole * 2.5);
    wmove(sub1, 8, 102);
    wprintw(sub1, "%d mm", d_bolt_hole * 3);
    // Пункт 2 а)
    wmove(sub1, 17, 102);
    wprintw(sub1, "%d mm", d_bolt_hole * 2);
    wmove(sub1, 18, 100);
    wprintw(sub1, "%.1f mm", d_bolt_hole * 2.5);
    // Пункт 1 б)
    wmove(sub1, 9, 96);
    wprintw(sub1, "%d mm or 12t", d_bolt_hole * 8);
    // Пункт 1 в)
    wmove(sub1, 13, 96);
    wprintw(sub1, "%d mm or 24t", d_bolt_hole * 16);
    wmove(sub1, 14, 96);
    wprintw(sub1, "%d mm or 18t", d_bolt_hole * 12);
    // Пункт 2 б)
    wmove(sub1, 20, 100);
    wprintw(sub1, "%.1f mm", d_bolt_hole * 1.5);
    wmove(sub1, 21, 100);
    wprintw(sub1, "%.1f mm", d_bolt_hole * 1.2);
    // Пункт 2 в)
    wmove(sub1, 22, 97);
    wprintw(sub1, "%d mm or 8t", d_bolt_hole * 4);
    // Пункт 2 г)
    wmove(sub1, 23, 100);
    wprintw(sub1, "%.1f mm", d_bolt_hole * 1.3);
    // Вывод результата ввода диаметра
    wmove(sub1, 0, 2);
    wprintw(sub1, "Data: hole diameter is %d mm;", d_bolt_hole);
    wrefresh(a);
    wrefresh(sub1);
    //refresh();
    return d_bolt_hole;
}

void enter_thick_outer_elem(WINDOW *a, WINDOW *sub1, int d_bolt_hole)
{
    int thick_outer_elem;
    char info_thick[3];
    char ch;
    do
    {
        wclear(a);
        wmove(a, 0, 2);
        waddstr(a, "2.Enter the thickness of the thinnest outer element (mm): ");
        wgetnstr(a, info_thick, 2);
        thick_outer_elem = atoi(info_thick);
        wmove(a, 1, 4);
        wprintw(a, "Element thickness is %d mm. If the information is correct then press 'y', if incorrect press 'n' ",
                thick_outer_elem);
        ch = (char) wgetch(a);
        if (ch == 'n')
            delete_char(a, 1, 1, 95);
    } while (ch != 'y');
    // Пункт 1 б)
    wmove(sub1, 9, 106);
    wprintw(sub1, "%d mm", thick_outer_elem * 12);
    // Пункт 1 в)
    wmove(sub1, 13, 106);
    wprintw(sub1, "%d mm", thick_outer_elem * 24);
    wmove(sub1, 14, 106);
    wprintw(sub1, "%d mm", thick_outer_elem * 18);
    // Пункт 2 в)
    wmove(sub1, 22, 106);
    wprintw(sub1, "%d mm", thick_outer_elem * 8);
    // Вывод результата ввода толщины наиболее тонкого наружного элемента
    wmove(sub1, 0, 32);
    wprintw(sub1, "thickness is %d mm;", thick_outer_elem);
    wrefresh(a);
    wrefresh(sub1);
}

void enter_dist_across_force_between_rows(WINDOW *a, WINDOW *sub1, int d_bolt_hole)
{
    int distance;
    char info_dist[3];
    char ch;
    do
    {
        wclear(a);
        wmove(a, 0, 2);
        waddstr(a, "3.Enter the distance across the force between the rows (mm): ");
        wgetnstr(a, info_dist, 2);
        distance = atoi(info_dist);
        wmove(a, 1, 4);
        wprintw(a, "Distance is %d mm. If the information is correct then press 'y', if incorrect press 'n' ",
                distance);
        ch = (char) wgetch(a);
        if (ch == 'n')
            delete_char(a, 1, 1, 95);
    } while (ch != 'y');
    // Пункт 3
    wmove(sub1, 24, 100);
    wprintw(sub1, "%.1f mm", (double) (distance + 1.5 * d_bolt_hole));
    // Вывод результата ввода расстояния поперек усилия между рядами отверстий
    wmove(sub1, 0, 52);
    wprintw(sub1, "distance is %d mm", distance);
    wrefresh(a);
    wrefresh(sub1);
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
