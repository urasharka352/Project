#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	srand(time(NULL));
	char playAgain;
	do 
	{
		int num = 1 + rand() % 20;
		int x;
		

		do
		{	
			cout << "Введите значение num" << endl;
			cin >> x;
			if (x == num)
			{
				cout << "Пользователь угадал" << endl;
			}
			else if (x > num)
			{
				cout << "Много" << endl;
			}
			else if (x < num)
			{
				cout << "Мало" << endl;
			}
		} while (x != num);

		cout << "Хотите сыграть еще раз? (y/n): ";
		cin >> playAgain;

	} while (playAgain == 'y' || playAgain == 'Y');

	cout << "Спасибо за игру!" << endl;
	return 0;
}