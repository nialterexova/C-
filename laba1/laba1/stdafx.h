// stdafx.h: включаемый файл для стандартных системных включаемых файлов
// или включаемых файлов для конкретного проекта, которые часто используются, но
// не часто изменяются
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int val(string a, string b, string c);
int valconst(const string a, const string b, const string c);
int point(string *a, string *b, string *c);
int pointconst(const string *a, const string *b, const string *c);
int adress(string &a, string &b, string &c);
int adressconst(const string &a, const string &b, const string &c);

// TODO: Установите здесь ссылки на дополнительные заголовки, требующиеся для программы
