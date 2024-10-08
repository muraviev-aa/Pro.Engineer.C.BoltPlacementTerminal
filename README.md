<a name="readme-top"></a>

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![CLion](https://img.shields.io/badge/CLion-black?style=for-the-badge&logo=clion&logoColor=white)
![CMake](https://img.shields.io/badge/CMake-%23008FBA.svg?style=for-the-badge&logo=cmake&logoColor=white)

# Многомодульная программа 
### Консольное приложение "Размещение болтов в стальных конструкциях"

Цель разработки: реализация требований табл. 40 СП 16.13330.2017.

При запуске приложения, для получения результата, необходимо ввести следующие параметры:

* диаметр отверстия для болта;
* толщина наиболее тонкого наружного элемента;
* расстояние поперек усилия между рядами отверстий.

<p align="center">
<img src="images/placement.png" alt="drawing" width="800"/>
</p>


Данное приложение имеет текстовый интерфейс пользователя. Такая возможность, при разработке в Windows, предоставляется библиотекой управления терминалом **curses.h**.

<p align="right">(<a href="#readme-top">вверх</a>)</p>