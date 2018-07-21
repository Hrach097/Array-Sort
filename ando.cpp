#include <iostream>
#include <string>
using namespace std;

struct car{
		string name;
		int number;

};

int main()
{
		cout<<"how many cars to put in the catalog?: ";
		int quantity;
		cin >> quantity;
		car* ps = new car[quantity];
		for(int i = 0; i < quantity; ++i){
				cout<< "car: #"<< i<< endl;
				cout<< "input manufacturer: ";
				cin>> ps[i].name;
				cout<< "date of manufacture: ";
				cin>> ps[i].number;

		}
		for(int i = quantity; i < quantity; ++i){
				cout<< ps[i].name<< "/t"<< ps[i].number;

		}
		delete []ps;

		return 0;

}
