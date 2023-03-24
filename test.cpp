#include <iostream>
#include <sstream>
using namespace std;

class Person {
	protected:
		string name;
		double money;
	public:
		Person(string text) {name = text; money = 0;}
		void addMoney(double n) {
			money += n;
		}
		double getMoney() {return money;}
		virtual string getName() {return name;}
};

class Racer : public Person
{
	protected:
		string team;
		int number, win;
	public:
		Racer(string name, string teamName, int n, int w) : Person(name)
		{
			team = teamName; number = n, w = win;
		}
		virtual string getName() {
			stringstream output;
			output << name << " " << team << " " << number;
			return output.str();
		}
};

int main() {
	Racer maxv("Max", "Red Bull", 1, 44);
	cout << maxv.getName() << endl;

}