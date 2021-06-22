#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <iomanip> 
#include <cstring>
#include <windows.h>
#include "DATE.h"
#include "Common.h"

using namespace std;

Common::Common() {
    balance = 0;
}

void Common::print_menu() {
    cout << "\n\tБаза данных: delivery1\n\n";
    cout << "\t\tМЕНЮ ДЛЯ DELIVERY1\n";
    cout << "__________________________________________________________________\n";
    cout << "\t1 -->> Добавить новый элемент\n";
    cout << "__________________________________________________________________\n";
    cout << "\t2 -->> Распечатать базу поставщиков\n";
    cout << "__________________________________________________________________\n";
    cout << "\t3 -->> Поиск поставщика по названию фирмы\n";
    cout << "__________________________________________________________________\n";
    cout << "\t4 -->> Фильтр по типу(найти поставщиков заданного типа)\n";
    cout << "__________________________________________________________________\n";
    cout << "\t5 -->> Сортировать по уменьшению сальдо\n";
    cout << "__________________________________________________________________\n";
    cout << "\t6 -->> Найти все поставки с заданной датой \n";
    cout << "__________________________________________________________________\n";
    cout << "\t7 -->> Найти все поставки с датой больше, чем заданная\n";
    cout << "__________________________________________________________________\n";
    cout << "\n\tБаза данных: delivery2\n\n";
    cout << "\t\tМЕНЮ ДЛЯ DELIVERY2\n";
    cout << "__________________________________________________________________\n";
    cout << "\t8 -->> Добавить новый элемент\n";
    cout << "__________________________________________________________________\n";
    cout << "\t9 -->> Распечатать базу поставщиков\n";
    cout << "__________________________________________________________________\n";
    cout << "\t10 -->> Поиск поставщика по названию фирмы\n";
    cout << "__________________________________________________________________\n";
    cout << "\t11 -->> Сортировать по уменьшению сальдо\n";
    cout << "__________________________________________________________________\n";
    cout << "\t12 -->> Найти все поставки с заданной датой \n";
    cout << "__________________________________________________________________\n";
    cout << "\t13 -->> Найти все поставки с датой больше, чем заданная\n";
    cout << "__________________________________________________________________\n";
    cout << "\t14 -->> Выход из программы\n";
    cout << "__________________________________________________________________\n\n";
};

int Common::scan_flag() {
    int a;
    while ((scanf("%d", &a)) != 1) {
        cout << "Введено некорректное зачение, попробуйте еще раз: ";
        scanf("%*[^\n]");
    }
    return(a);
};

int Common::scan_int() {
    int a;
    while ((scanf("%d", &a)) != 1) {
        cout << "Введено некорректное зачение, попробуйте еще раз: ";
        scanf("%*[^\n]");
    }
    return(a);
};

/*
int Common::scan_int() {
    double a;
    while ((scanf("%lf", &a)) != 1) {
        cout << "Введено некорректное зачение, попробуйте еще раз: ";
        scanf("%*[^\n]");
    }
    return(a);
};
*/

int Common::scan_type() {
    int type = 0;
    while (type != 1 && type != 2) {
        type = scan_int();
        if (type == 1 || type == 2) {
            break;
        }
        cout << "Введено некорректное зачение, попробуйте еще раз: ";
    }
    return type;
}

void Common::scan_month(char* buf) {
    int i = 0;
    int k = 1;
    while (k != 0) {
        if (i > 0) printf("Неверно ввёден месяц(попробуйте с маленькой буквы): ");
        scanf("%s", buf);
        if (strcmp(buf, "январь") == 0) k = 0;
        if (strcmp(buf, "февраль") == 0) k = 0;
        if (strcmp(buf, "март") == 0) k = 0;
        if (strcmp(buf, "апрель") == 0) k = 0;
        if (strcmp(buf, "май") == 0) k = 0;
        if (strcmp(buf, "июнь") == 0) k = 0;
        if (strcmp(buf, "июль") == 0) k = 0;
        if (strcmp(buf, "август") == 0) k = 0;
        if (strcmp(buf, "сентябрь") == 0) k = 0;
        if (strcmp(buf, "октябрь") == 0) k = 0;
        if (strcmp(buf, "ноябрь") == 0) k = 0;
        if (strcmp(buf, "декабрь") == 0) k = 0;
        i++;
    }
}