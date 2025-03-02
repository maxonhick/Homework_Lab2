#include <iostream>

int main(){ // Главная функция программы
	std::cout << "Введите имя пользователя: "; // Сообщение для ползьователя
	std::string name; // Создаём переменную для имени
	std::getline(std::cin, name); // Считываем введённоу имя
	std::cout << "Hello world from " << name <<  std::endl; // Вывод
	return 0; // Завершаем программу
}
