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
			cout << "������� �������� num" << endl;
			cin >> x;
			if (x == num)
			{
				cout << "������������ ������" << endl;
			}
			else if (x > num)
			{
				cout << "�����" << endl;
			}
			else if (x < num)
			{
				cout << "����" << endl;
			}
		} while (x != num);

		cout << "������ ������� ��� ���? (y/n): ";
		cin >> playAgain;

	} while (playAgain == 'y' || playAgain == 'Y');

	cout << "������� �� ����!" << endl;
	return 0;
}