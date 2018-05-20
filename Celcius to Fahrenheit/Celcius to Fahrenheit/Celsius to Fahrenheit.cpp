#include <iostream>

using namespace std;

int main()
{

	cout << "Program to turn a temperature in Celsius into Fahrenheit" << endl;
	cout << "========================================================" << endl;
	cout << endl;

	cout << "Enter a temperature in Celsius > " << flush;

	int Temperature;
	int Fahrenheit;

	cin >> Temperature;

	Fahrenheit = Temperature * 9 / 5 + 32;

	cout << endl << endl;
	cout << "In Celsius the temperature was: " << Temperature << endl;
	cout << endl;
	cout <<	"In Fahrenheit the temperature is: " << Fahrenheit << endl;

	cout << endl;
	cout << "Program to turn a temperature in Fahrenheit into Celsius" << endl;
	cout << "========================================================" << endl;
	cout << endl;

	cout << "Enter a temperature in Fahrenheit > " << flush;
	
	int TemperatureF;
	int Celsius;

	cin >> TemperatureF;

	//Celsius = ((TemperatureF * 5)-(5 * 32))/9;

	Celsius = (TemperatureF - 32) * 5 / 9;

	cout << endl;
	cout << "In Fahrenheit the temperature was: " << TemperatureF << endl;
	cout << endl;
	cout << "In Celsius the temperature is: " << Celsius << endl;

	int iTemp;
	cin >> iTemp;

	return(0);
}