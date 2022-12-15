#include "C:\Users\Тетяна\Downloads\Parcel.cpp"
#include "C:\Users\Тетяна\Downloads\Date.cpp"
using namespace std;

int main() {
	Date fir, sec;
	cout << "Enter the Date:  "; cin >> fir ;
	cout << "Enter the Date:  "; cin >> sec;
	cout << "       BEFORE" << endl << fir << endl << sec << endl;
	fir++; sec--;
	cout << "        AFTER" << endl << fir << endl << sec << endl;

	Parcel one, two, three; //(1, 2, fir, sec, 200, 1, 3, 1234, 0, "A", "B");
	(one + two).print();
	if (one == two) { cout << "Parsel_1 = Parsel_2" << endl; }
	if (one != two) { cout << "Parsel_1 != Parsel_2" << endl; }
}
