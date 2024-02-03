// practci4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct Point {
    double x, y, z;
};

int main()
{
    setlocale(LC_ALL, "ru");
    FILE* file;


    if (fopen_s(&file, "coordinates.txt", "r") != 0) {
        cout << "Не удалось открыть файл";
        return 1;
    }
    

    Point point;

    while (fscanf_s(file, "%lf %lf %lf", &point.x, &point.y, &point.z) == 3) {
        cout << "Точки x: " << point.x << " y: " << point.y << " z: " << point.z << endl;
        double result = sqrt(pow(point.x, 2) + pow(point.y, 2) + pow(point.z, 2));
        cout << "Результат: " << result << endl;
    }
    fclose(file);
    return 0;
}


