#include <iostream>
using namespace std;
int main(){
	cout << "Введите имя пользователя: ";
	string name;
	getline(cin, name);
	cout << "Hello world from " << name <<  endl;
	return 0;
}
