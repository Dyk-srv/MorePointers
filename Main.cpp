﻿#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// направление указателя на нейтральный адрес
	/*int* pointer;
	
	// 1-й способ - old
	pointer = 0; // нейтральный адрес
	if (pointer)
		std::cout << pointer << std::endl;
	else
		std::cout << "Указатель не инициализирован.\n";
	// *pointer = 15;	// Ошибка, т.к. в нейтральной памяти нельзя записывать данные

	// 2-й способ - old
	pointer = NULL;	// нейтральный адрес
	if (pointer)
		std::cout << pointer << std::endl;
	else
		std::cout << "Указатель не инициализирован.\n";

	// 3-й способ - правильный
	pointer = nullptr;
	if (pointer != nullptr)
		std::cout << pointer << std::endl;
	else
		std::cout << "Указатель не инициализирован.\n";*/

	// Модификации указателей
	n = 15;
	
	// Указатель на константу. Может быть перенаправлен на другие области памяти. 
	// С его помощью невозможно поменять значение переменной, на которую он направлен.
	const int* pn1;
	pn1 = &n;
	//*pn1 = 1	// Ошибка!
	pn1 = &m;

	// Константный указатель или указатель-константа. Не может быть перенаправлен на другие области памяти. 
	// Должен быть инициализирован сразу в момент создания
	// С его помощью можно менять значение переменной, на которую он направлен.
	int* const pn2 = &n;
	//pn2 = &m;	//	Ошибка!
	*pn2 = 20;

	// Константный указатель на константу. Не может быть перенаправлен на другие области памяти. 
	// Должен быть инициализирован сразу в момент создания
	// С его помощью невозможно поменять значение переменной, на которую он направлен.
	const int* const pn3 = &n;
	//pn3 = &m;	// Ошибка!
	//*pn = 30;	// Ошибка!
	std::cout << *pn3 << std::endl;

	return 0;
}