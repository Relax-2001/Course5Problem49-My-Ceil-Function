#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber()
{

	float Number = 0;

	cout << "Please enter a number : \n";

	cin >> Number;

	return Number;

}

float GetFraction(float Number)
{
	return Number - (int)Number;
}

int MyCeilFunction(float Number)
{

	
	if (abs(GetFraction(Number)) > 0)

		if (Number > 0)
		{
			return (int) ++Number;
		}
		else
		{
			return (int)Number;
		}
	else
	{
		return (int)Number;
	}

		
	
	
}


int main()
{

	float Number = ReadNumber();

	cout << "C++ Round function result : ";
	cout << ceil(Number) << "\n";

	cout << "My Round Result : ";
	cout << MyCeilFunction(Number) << "\n";
	



	return(0);
}