// Створіть клас Circle (коло). Реалізуйте через перевантажені оператори: 
//-Перевірку на рівність радіусів двох кіл(операція « == »);
#include <iostream>
using namespace std;
class Circle
{
private:
	double r;
public:
	Circle();
	friend std::istream& operator>>(std::istream& in, Circle& t) {//перевантаженя оператора <<
		std::cout << "Enter radius of circle: " << std::endl;
		in >> t.r;
		return in;
	}
	bool operator ==(const Circle& other) {//перевантаження оператора  ==
		if (this->r == other.r) { 
			return true; }		
		else {
			return false; }
	}
	
};
int main()
{
	Circle A;
	Circle B;
	cin >> A;
	cin >> B;
	bool ans = A ==B; // перевантаження оператора==
	cout << endl;
	if (ans == 1) {//якщо 1 рівні ,якщо 0 не рівні
		cout << "The radius of the circles is equal " << endl;
	}
	else {		
		cout << "The radius of the circles is different " << endl;
	}	
}
Circle::Circle()
{
	r = 0;
}

