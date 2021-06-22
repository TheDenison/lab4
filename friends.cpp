#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <iomanip> 
#include <cstring>
#include <windows.h>
#include "Common.h"
#include "DATE.h"
#include "delivery1.h"
#include "delivery2.h"
#include "FIO.h"
using namespace std;

istream& operator>>(istream& is, delivery1& t) {
    char buf[60];
    //ввод названия фирмы
    cout << "\n\tДобавление нового элемента в delivery11!\n";
    cout << "название фирмы поставщика: ";
    is >> buf;
    t.set_firma(buf);

    //ввод юридического адреса
    cout << "юридический адрес: ";
    is >> buf;
    t.set_adres(buf);

    //ввод типа поставщика
    cout << "тип поставщика( 1 - сырьё, 2 - оборудование): ";
    while (true) {
        is >> t.type;
        if (is.fail() || t.type > 2 || t.type < 1)
        {
            is.clear();
            is.ignore(32767, '\n');
            cout << "Введено некорректное зачение, попробуйте еще раз: ";
        }
        else break;
    }

    //ввод сальдо
    cout << "сальдо: ";
    while (true) {
        is >> t.balance;
        if (is.fail()) {
            is.clear();
            is.ignore(32767, '\n');
            cout << "Введено некорректное зачение, попробуйте еще раз: ";
        }
        else break;
    }
    //ввод даты
    cout << "введите дату поставки\n";
    //день
    cout << "день: ";
    while (true) {
        is >> t.date.day;
        if (is.fail() || t.date.day > 31 || t.date.day < 1) {
            is.clear();
            is.ignore(32767, '\n');
            cout << "Введено некорректное зачение, попробуйте еще раз: ";
        }
        else break;
    }
    //месяц
    cout << "месяц(слово): ";
    is >> buf;
    while ((strcmp(buf, "январь") != 0) && (strcmp(buf, "февраль") != 0) && strcmp(buf, "март") != 0 && strcmp(buf, "апрель") != 0 && (strcmp(buf, "май") != 0 && strcmp(buf, "июнь") != 0 && (strcmp(buf, "июль") != 0) && (strcmp(buf, "август") != 0) && (strcmp(buf, "сентябрь") != 0) && (strcmp(buf, "октябрь") != 0) && (strcmp(buf, "ноябрь") != 0) && (strcmp(buf, "декабрь") != 0))) {
        cout << "Введено некорректное зачение, попробуйте еще раз: ";
        is >> buf;
    }
    t.date.month = new char[strlen(buf) + 1];
    t.date.set_month(buf);
    //год
    cout << "год: ";
    while (true) {
        is >> t.date.year;
        if (is.fail() || t.date.year < 1) {
            is.clear();
            is.ignore(32767, '\n');
            cout << "Введено некорректное зачение, попробуйте еще раз: ";
        }
        else break;
    }
    return is;
}

istream& operator>>(istream& is, delivery2& t) {
    char buf[60];
    //ввод продавца
    cout << "\n\tДобавление нового элемента в delivery22!\n";
    cout << "Информация о продавце\n";

    //ввод имени
    cout << "имя: ";
    is >> buf;
    t.fio.set_firstname(buf);

    //ввод фамилии
    cout << "фамилия: ";
    is >> buf;
    t.fio.set_secondname(buf);

    //ввод отчества
    cout << "отчество: ";
    is >> buf;
    t.fio.set_lastname(buf);

    //ввод сальдо
    cout << "сальдо: ";
    while (true) {
        is >> t.balance;
        if (is.fail()) {
            is.clear();
            is.ignore(32767, '\n');
            cout << "Введено некорректное зачение, попробуйте еще раз: ";
        }
        else break;
    }
    //ввод даты
    cout << "введите дату поставки\n";
    //день
    cout << "день: ";
    while (true) {
        is >> t.date.day;
        if (is.fail() || t.date.day > 31 || t.date.day < 1) {
            is.clear();
            is.ignore(32767, '\n');
            cout << "Введено некорректное зачение, попробуйте еще раз: ";
        }
        else break;
    }
    //месяц
    cout << "месяц(слово): ";
    is >> buf;
    while ((strcmp(buf, "январь") != 0) && (strcmp(buf, "февраль") != 0) && strcmp(buf, "март") != 0 && strcmp(buf, "апрель") != 0 && (strcmp(buf, "май") != 0 && strcmp(buf, "июнь") != 0 && (strcmp(buf, "июль") != 0) && (strcmp(buf, "август") != 0) && (strcmp(buf, "сентябрь") != 0) && (strcmp(buf, "октябрь") != 0) && (strcmp(buf, "ноябрь") != 0) && (strcmp(buf, "декабрь") != 0))) {
        cout << "Введено некорректное зачение, попробуйте еще раз: ";
        is >> buf;
    }
    t.date.month = new char[strlen(buf) + 1];
    t.date.set_month(buf);
    //год
    cout << "год: ";
    while (true) {
        is >> t.date.year;
        if (is.fail() || t.date.year < 1) {
            is.clear();
            is.ignore(32767, '\n');
            cout << "Введено некорректное зачение, попробуйте еще раз: ";
        }
        else break;
    }
    return is;
}