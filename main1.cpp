// Московский государственный технический университет им. Н.Э. Баумана (МГТУ им. Н.Э. Баумана)
// Кафедра «Информационная безопасность» (ИУ8)
// Петросян А.Р.
// ИУ8-12
// Лабораторная работа №3

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
 int main()
 {
     float *a;
     int n;
     cout << "Введите количество элементов массива: ";
     cin >> n;
     cout << "Введите элементы массива: ";
     a = new float [n];
     for (int i=0; i<n; i++)
      cin >> a[i];
     int maxx = a[0];
     int minn = a[0];
     for (int i=0; i<n; i++) {
         if(a[i] > maxx)
         {
             maxx = a[i];
         }
         if(a[i] < minn)
         {
             minn = a[i];
         }
     }
     cout << "Максимальное значение элементов массива: " << maxx <<", минимальное значение: " << minn << endl;
     }
