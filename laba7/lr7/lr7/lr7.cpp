/*
Необходимо реализовать консольное приложение «Глоссарий».У приложения должны быть следующие возможности: 
1) Добавить термин и пояснение к нему.Если данный термин уже есть, то надо предложить пользователю следующие варианты :
	а) Заменить пояснение к нему
	б) Обновить(добавить) пояснение.
	в) Отменить операцию и вывести сообщение о ее отмене с причиной.
2) Обновить пояснение к термину.Если такого термина нет, то предложить пользователю следующие варианты :
	а) Добавить термин с пояснением
	б) Отменить операцию и вывести сообщение о ее отмене с причиной.
3) Удалить термин с его пояснением.Если такого термина нет, то:
	а) Отменить операцию и вывести сообщение о ее отмене с причиной.
4) Вывести все термины(без пояснений к ним).
5) Вывести пояснение к термину.Если такого термина нет, то:
	а) Отменить операцию и вывести сообщение о ее отмене с причиной.
6) Сохранить все термины с пояснениями в файл.Если некоторые термины были загружены в него ранее, то заменить их пояснения. 
7) При запуске приложения должна проводится загрузка терминов с пояснениями из файла(базы данных).
*/

#include "stdafx.h"



int main()
{
	setlocale(0, "");
	cout << "Приветствуем в Глоссарии!" << endl;
	cout << endl;
	map <string, string> glossary;
	map <string, string> ::iterator it;
	string key;
	string desc;
	string d;
	//------Считывание-с-файла-Глоссария-начало-------
	ifstream file("glossary.txt");
	if (file.is_open()) {
		string str;
		while (!file.eof()) {
			getline(file, str);
			auto pos = str.find("=");
			if (pos != string::npos)
			{
				key = str.substr(0, pos);
				desc = str.substr(pos + 1);
				glossary[key] = desc;
			}
		}
		file.close();
	}
	//------Считывание-с-файла-Глоссария-конец-------

instruction:
	cout << "Нажмите: " << endl;
	cout << "1 - чтобы добавить термин; " << endl;
	cout << "2 - чтобы обновить пояснение; " << endl;
	cout << "3 - чтобы удалить термин; " << endl;
	cout << "4 - чтобы вывести все; " << endl;
	cout << "5 - чтобы вывести пояснение;" << endl;
	cout << "6 - чтобы сохранить изменения;" << endl;
	cout << "7 - чтобы выйти." << endl;
	int inp = 0;
	cin >> inp;

	switch (inp)
	{
	case 1:
		cout << "Введите термин: ";
		cin >> key;
		if (glossary.count(key)==0) {
add:
			cout << "Введите пояснение: ";
			cin >> desc;
			glossary[key] = desc+" ";
		}
		else {
			cout << "Данный термин уже есть. Нажмите: " << endl;
change:
			cout << "1 - чтобы заменить пояснение; " << endl;
			cout << "2 - чтобы дописать к существующему пояснению; " << endl;
			cout << "3 - чтобы отменить операцию. " << endl;
			cin >> inp;
			if (inp == 1 || inp == 2) {
				cout << "Введите пояснение: ";
				cin >> d;
				d += " ";
				it = glossary.find(key);
				desc = it->second;
				if (inp == 2) glossary[key] = desc += d;
				else it->second = d;
			}
			else {
				goto instruction;
			}
		}
		break;
	case 2:
		cout << "Введите термин: ";
		cin >> key;
		if (glossary.count(key) == 1) {
			goto change;
		}
		else {
			cout << "Данного термина нет. Нажмите: " << endl;
			cout << "1 - чтобы добавить пояснение; " << endl;
			cout << "2 - чтобы отменить операцию. " << endl;
			cin >> inp;
			if (inp == 1) {
				goto add;
			}
			else {
				goto instruction;
			}
		}
		break;
	case 3:
		cout << "Введите термин: ";
		cin >> key;
		if (glossary.count(key) == 1) {
			it = glossary.find(key);
			glossary.erase(it);
		}
		else {
			cout << "Данного термина нет. Нажмите: " << endl;
			cout << "1 - чтобы отменить операцию. " << endl;
			cin >> inp;
			goto instruction;
		}
		break;
	case 4:
		for (auto it : glossary) {
			cout << it.first << "  ";
		}
		cout << endl;
		break;
	case 5:
		for (auto it : glossary) {
			cout << it.first << "  - " << it.second << endl;
		}
		break;
	case 6: {
		ofstream fil("glossary.txt");
		for (auto it : glossary) {
			fil << it.first << "=" << it.second << endl;
		}
		fil.close(); }
		break;
	case 7:
		goto end;
		break;
	default:
		cout << "Ошибка команды. Попробуйте еще раз." << endl;
		goto instruction;
		break;
	}
	cout << "Успешно!" << endl;
	goto instruction;
end:
	system("pause");
    return 0;
}

