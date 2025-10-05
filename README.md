<h1>Домашняя работа к лабораторной №5</h1>
<h2>Выполнил: Кравченко А.С.</h2>

<h1>Вариант 14</h1>
<h2>Алгоритм</h2>
1. Инициализируем переменные:<br>
 - x = 12.3*pow(10,-1)<br>
 - y = 15.4<br>
 - z = 0.252*pow(10,3)<br>
 - g<br>
2. Вычисляем g по заданной формуле:<br>
 - g = ((pow(y, x+1) / (pow(fabs(y-2), 1./3) + 3)) + ((x+y/2) / (2 * fabs(x+y))) * pow((x+1), -1/sin(z)))<br>
3. Выводим g.<br>
4. Конец.<br>

<h2>Код программы</h2>
#include <stdio.h><br>
#include <locale.h><br>
#include <math.h><br>
<br>
void main()<br>
{<br>
	setlocale(LC_ALL, "RUS");<br>
	float x = 12.3*pow(10,-1);<br>
	float y = 15.4;<br>
	float z = 0.252*pow(10,3);<br>
	float g;<br>
	g = ((pow(y, x+1) / (pow(fabs(y-2), 1./3) + 3)) + ((x+y/2) / (2 * fabs(x+y))) * pow((x+1), -1/sin(z)));<br>
	printf("g = %f", g);<br>
}<br>

<h2>Схема</h2>
<img width="573" height="890" alt="image" src="https://github.com/user-attachments/assets/a9f1fdad-f405-49c2-8b45-42f8e634e64e" />

<h2>Консоль</h2>
<img width="1483" height="762" alt="image" src="https://github.com/user-attachments/assets/200521e8-516f-49aa-be56-8a140a38f13c" />

