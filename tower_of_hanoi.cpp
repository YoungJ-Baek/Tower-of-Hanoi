#include <iostream>
using namespace std;

void Hanoi(int num, char start, char middle, char end);

int main()
{
	int num = 0;
	cout << "enter the num: ";
	cin >> num;
	Hanoi(num, 'A', 'B', 'C');
	system("pause");
	return 0;
}

void Hanoi(int num, char start, char middle, char end)
{
	if (num == 1)
	{
		cout << start << "->" << end << endl;
	}
	else
	{
		Hanoi(num - 1, start, end, middle);
		cout << start << "->" << end << endl;
		Hanoi(num - 1, middle, start, end);
	}
}