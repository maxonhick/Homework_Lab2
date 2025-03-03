#include <iostream>

int main(){ // The main function of the program
	std::cout << "Введите имя пользователя: "; // Message to user
	std::string name; // Create a variable for the name
	std::getline(std::cin, name); // We read the entered name
	std::cout << "Hello world from " << name <<  std::endl; // Conclusion
	return 0; // We are finishing the program
}
