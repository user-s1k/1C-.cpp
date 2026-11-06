#include <iostream>
#include <Windows.h>
#include <string>

#pragma once

#ifdef _WIN32
#include <windows.h>
namespace onec_detail
{
    inline bool init_console()
    {
       
        bool utf8 = static_cast<unsigned char>("я"[0]) == 0xD1;
        UINT cp = utf8 ? CP_UTF8 : GetACP();
        SetConsoleOutputCP(cp);
        SetConsoleCP(cp);
        return true;
    }
    static const bool console_ready = init_console();
}
#endif

#define Если if
#define Иначе else
#define ИначеЕсли else if
#define Тогда {
#define КонецЕсли }
#define Пока while
#define Возврат return
#define Перем auto
#define Истина true
#define Ложь false
#define Цикл {
#define КонецЦикла }
#define Процедура int
#define Сообщить(x) std::cout << x << '\n'
#define Конец }
#define Начало {
#define И &&
#define ИЛИ || 
#define НЕ !
#define ДляКаждого for
#define Из :
#define Число double
#define Строка std::string
#define Булево bool
#define Неопределено nullptr
#define Главная main
//#define ВклРуссЯз1 SetConsoleOutputCP(65001);
//#define ВклРуссЯз2 SetConsoleCP(65001);
