// Types.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
//#include <cmath>

#pragma region BOOLEAN EXAMPLES
void isPair(int number) {
	if (number % 2 == 0) {
		std::cout << "is pair" << "\n";
	}
	else {
		std::cout << "is not pair" << "\n";
	}
}
void isAdult(int age) {
	if (age >= 18) {
		std::cout << "is adult" << "\n";
	}
	else {
		std::cout << "is not adult" << "\n";
	}
}
void isVocal(char letter) {
	letter = tolower(letter);
	if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
		std::cout << "is vocal" << "\n";
	}
	else {
		std::cout << "is not vocal" << "\n";
	}
}
void isLeapYear(int year) {
	bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	if (isLeap) {
		std::cout << "is leap year" << "\n";
	}
	else {
		std::cout << "not leap year" << std::endl;
	}
}

void isPalindrome(const std::string& word) {
	std::string reversedWord;
	int length = word.length();


	for (int i = length - 1; i >= 0; i--) {
		reversedWord += word[i]; // Concatenar caracteres
	}

	std::cout << "Reversed Word: " << reversedWord << "\n";
	std::cout << "Original Word: " << word << "\n";

	// Comparar las palabras
	if (word == reversedWord) {
		std::cout << "The word is a palindrome.\n";
	}
	else {
		std::cout << "The word is not a palindrome.\n";
	}
}
#pragma endregion


#pragma region INTEGER EXAMPLES
int sum(int a, int b) {
	return a + b;
}
int substraction(int a, int b) {
	return a - b;
}
int multiply(int a, int b) {
	return a * b;
}
int maxNumber(int a, int b, int c) {
	return std::max({ a,b,c });
}
int minNumber(int a, int b, int c) {
	return std::min({ a,b,c });
}
int factorial(int number) {
	if (number < 0) {
		return -1;
	}
	int fact = 1;
	for (int i = 1; i <= number; i++) {
		fact *= i;
	}
	return fact;
}
int countDigits(int number) {
	if (number == 0) {
		return 1;
	}
	int counter = 0;
	while (number != 0)
	{
		number /= 10;
		counter++;
	}
	return counter;
}
#pragma endregion


#pragma region FLOATING POINT EXAMPLES
float usdConversion(float coin, float rate) {
	return coin * rate;
}

float pointDistance(int x1, int y1, int x2, int y2) {
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

float percentage(float number, float percentage) {
	return number * (percentage / 100);
}

float hypotenuse(int a, int b) {
	return sqrt(pow(a, 2) + pow(b, 2));
}
#pragma endregion

int main()
{
#pragma region BOOLEAN

	std::cout << "Boolean examples\n";
	int number = 10;
	isPair(number);

	int age = 25;
	isAdult(age);

	char letter = 'A';
	isVocal(letter);

	int year = 2024;
	isLeapYear(year);

	std::string word = "abaaa";
	isPalindrome(word);
#pragma endregion


#pragma region INTEGER
	std::cout << "\n";
	std::cout << "Integer examples\n";

	int a = 10;
	int b = 15;
	int c = 5;
	int digits = 234234;
	std::cout << "Sum: " << sum(a, b) << "\n";
	std::cout << "Subtraction: " << substraction(a, b) << "\n";
	std::cout << "Multplication: " << multiply(a, b) << "\n";
	std::cout << "Max number: " << maxNumber(a, b, c) << "\n";
	std::cout << "Min number: " << minNumber(a, b, c) << "\n";
	std::cout << "Factorial: " << factorial(c) << "\n";
	std::cout << "Number of digits: " << countDigits(digits) << "\n";
#pragma endregion

#pragma region FLOATING POINT
	std::cout << "\n";
	std::cout << "Floating point examples\n";

	float usd = 100.0;
	float rate = 11.03;
	std::cout << "Bs: " << usdConversion(usd, rate) << "\n";

	int x1 = 2;
	int y1 = 3;
	int x2 = 5;
	int y2 = 4;
	std::cout << "Point distance: " << pointDistance(x1, y1, x2, y2) << "\n";

	number = 100;
	int percent = 20;
	std::cout << "Percentage: " << percentage(number, percent) << "\n";

	int aSide = 9;
	int bSide = 12;
	std::cout << "Hypotenuse: " << hypotenuse(aSide, bSide) << "\n";

#pragma endregion


	return 0;
}
