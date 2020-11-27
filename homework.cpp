//homework -- some tasks from act 3 (Prata)

//Task 1 -- Напишите короткую программу, которая запрашивает рост
//			в дюймах и преобразует их в футы и дюймы. Программа должна
//			использовать символ подчеркивания для обозначения позиции,
//			где будет производиться ввод.

/*
#include <iostream>
int main()
{
	using namespace std;
	const short converter = 12;

	cout << "Enter your height in inches: ";
	short height_inch, height_foot;
	cin >> height_inch;
	height_foot = height_inch / converter;
	height_inch = height_inch % converter;
	cout << "Your height is "
		 << height_foot << " foots and " 
		 << height_inch << " inches" << endl;

	return 0; 
}
*/

//Task 2 -- Напишите программу, которая запрашивает рост в футах и дюймах
//			и вес в фунтах. Программа должна выдать индекс массы тела
//			(body mass index - BMI). Сначала рост в футах в дюймы
//			(1 фут - 12 дюймов), затем рост в дюймах в метры, умножив 0.0254
//			Далее вес в фунтах в массу в кг., разделив на 2.2. После рассчитать
//			BMI, разделив массу в кг на квадрат роста в метрах.

/*
#include <iostream>
float heightConvert(short height_foot, short height_inch);
float weightConvert(short weight_lb);
void BMI(float meter_height, float kilo_weight);

int main()
{
	using namespace std;
	const short ftToIn = 12; // 1 foot - 12 inches
	
	cout << "Enter your height in foots: ";
	short height_foot, height_inch, weight_lb;
	cin >> height_foot;
	cout << "Enter your height in inches: ";
	cin >> height_inch;
	cout << "Enter your weight in lb.: ";
	cin >> weight_lb;
	
	float meter_height, kilo_weight;
	meter_height = heightConvert(height_foot, height_inch);
	kilo_weight = weightConvert(weight_lb);
	BMI(meter_height, kilo_weight);

	return 0;

	// Вариант 1 - всё внутри main

//	short in_height;
//	in_height = height_foot / 12 + height_foot % 12 + height_inch;
//	float meter_height;
//	meter_height = in_height * 0.0254;

//	float kilo_weight;
//	kilo_weight = weight_lb / 2.2;

//	float BMI;
//	BMI = (meter_height * meter_height) / kilo_weight;
//	cout << "BMI is " << BMI << endl;

//	return 0;
}

	// Вариант 2 - модульность

float heightConvert(short height_foot, short height_inch)
{
	short in_height;
	in_height = height_foot / 12 + height_foot % 12 + height_inch;

	return in_height * 0.0254;
}
float weightConvert(short weight_lb)
{
	return weight_lb / 2.2;
}

void BMI(float meter_height, float kilo_weight)
{
	using namespace std;
	float BMI;

	BMI = (meter_height * meter_height) / kilo_weight;
	cout << "BMI: " << BMI << endl;
}
*/


// Task 3 -- Напишите программу, которая запрашивает широту в градусах,
//			 минутах и секундах, после чего отображает широту в десятичном
//			 формате. В одной минуте 60 угл. секунд, а в одном градусе
//			 60 угловых минут; представьте эти значения в виде констант.
//			 Для каждого вводимого значения должна использоваться
//			 отдельная переменная.

/*
#include <iostream>

int main()
{
	using namespace std;
	const float minToDeg = 60;
	const float secToDeg = 3600;

	cout << "Enter latitude in degrees, minutes and seconds." << endl;
	cout << "Enter degrees: ";
	short degrees, minutes, seconds;
	cin >> degrees;
	cout << "Enter minutes: ";
	cin >> minutes;
	cout << "Enter seconds: ";
	cin >> seconds;
	float result;
	result = degrees + (minutes / minToDeg) + (seconds / secToDeg);
	cout << degrees << " degrees, "
		 << minutes << " minutes, "
		 << seconds << " seconds = "
		 << result << " degrees"
		 << endl;

	return 0;
}
*/

//Task 4 -- Напишите программу, которая запрашивает количество секунд
//			в виде целого значения (long или long long) и затем
//			отображает эквивалентное значение в сутках, часах,
//			минутах и секундах. Для количества часов в сутках,
//			минут в часе и секунд в минуте используйте константы

#include <iostream>

int main()
{
	using namespace std;
	const short hoursInDay = 24;
	const short minutesInHour = 60;
	const short secondsInMinute = 60;

	cout << "Enter the number of seconds: ";
	long time, tmp;
	cin >> tmp;
	time = tmp;

	int days, hours, minutes, seconds;
	days = time / (hoursInDay * minutesInHour * secondsInMinute);
	time = time - days * (hoursInDay * minutesInHour * secondsInMinute);
	hours = time / (minutesInHour * secondsInMinute);
	time = time - hours * (minutesInHour * secondsInMinute);
	minutes = time / secondsInMinute;
	time = time - minutes * secondsInMinute;
	seconds = time;

	cout << tmp << " seconds = " 
		 << days << " days, " 
		 << hours << " hours, " 
		 << minutes << " minutes, "
		 << seconds << " seconds."
		 << endl;

	return 0;
}