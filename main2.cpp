// Московский государственный технический университет им. Н.Э. Баумана (МГТУ им. Н.Э. Баумана)
// Кафедра «Информационная безопасность» (ИУ8)
// Петросян А.Р.
// ИУ8-12
// Лабораторная работа №3

#include <math.h>
#include <iostream>

using namespace std;
 int main()
 {
     int** a;
     int n;
     double m;
     double* b;
     double k = 0.0;
     cout << "Введите количество строк массива: ";
     cin >> n;
     cout << "Введите количество столбцов массива: ";
     cin >> m;
     
     b = (double*)malloc(n*sizeof(double));
     a = (int**)malloc(n*sizeof(int*));
     
     for (int i = 0; i<n; i++)
         a[i] = (int*)malloc(n*sizeof(int));
     for (int i = 0; i<n; i++) {
         for (int j=0; j<m; j++) {
             a[i][j] = rand()%200-50;
             cout << a[i][j];
             cout << " ";
         }
     }
     for (int i = 0; i<n; i++) {
         b[i] = 1;
     }
     for (int i = 0; i<n; i++) {
         for (int j = 0; j<m; j++) {
             if (a[i][j]<0) {
                 k = k+1;
             }
         }
     }
     cout << "Количество отрицательных цифр: " << k << endl;
 }

