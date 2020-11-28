//homework_part2.cpp -- continued homework.cpp

// Task 5 - Напишите программу, которая запрашивает текущую численность населения Земли
//			и текущую численность населения США (или любой другой страны).
//			Информацию сохраните в переменных long long. В качестве результата
//			программа должна отображать процентное соотношение численности населения
//			страны и всего мира


#include <iostream>
#include <cstdlib>
float ratio(const long long world_population, const long long country_population);

int main()
{
	using namespace std;
	float procent;

	cout << "Enter world's population: ";
	long long world_population;
	cin >> world_population;
	cout << "Enter country_population: ";
	long long country_population;
	cin >> country_population;

	if (country_population > world_population)
	{
		cerr << "Incorrect input data" << end;
		return EXIT_FAILURE;
	}
	procent = ratio(world_population, country_population);
	cout << "The population of country is " << procent << " \% of the world population";

	return 0;
}

float ratio(const long long world_population, const long long country_population)
{
	return (country_population * 100.0) / world_population;
}


// Task 6 - Напишите программу, которая запрашивает количество пройденных
//			автомобилем километров и количество израсходованного бензина
//			в литрах. Выведите резуьтат расхода литров на 100 км.

#include <iostream>

float long_term(const short distance, const short gazoline);

int main()
{
	using namespace std;
	short distance, gazoline;
	float litresPerHundred;

	cout << "Enter traveled distance in km: ";
	cin >> distance;
	cout << "Enter how much you use gazoline up in litres: ";
	cin >> gazoline;
	litresPerHundred = long_term(distance, gazoline);
	cout << "Consumption: " << litresPerHundred << "/ 100 km" << endl;

	return 0;
}

float long_term(const short distance, const short gazoline)
{
	return ((float) gazoline / distance) * 100;
}