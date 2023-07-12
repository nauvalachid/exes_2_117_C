#include <iostream>
using namespace std;

int nauval[17];
int lowerbound = 0;
int upperbound = n - 1;
int mid = (lowerbound + upperbound) / 2;
int n;

void input()
{
	while (true)
	{
		cout << "Masukkan jumlah elemen dalam array : ";
		cin >> n;
		if ((n > 0) && (n <= 17))
			break;
		else
			cout << "\nArray harus memiliki 17 elemen.\n\n";
	}


	cout << "\n-------------------\n";
	cout << " memasukkan elemen array \n";
	cout << "---------------------\n";
	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> nauval[i];
	}
}

void Display()
{
	char ch;
	int ctr;

	do
	{

		cout << "\nMasukkan elemen yang ingin Anda cari: "; 
		int item;
		cin >> item;

		ctr = 0;
		for (int i = 0; i < n; i++)							
		{
			ctr++;
			if (nauval[i] == item)								
			{
				cout << "\n" << item << " Found " << (i + 1) << endl;
				break;
			}
		}

		if (n == n)
			cout << "\n" << item << " Not Found\n";
		cout << "\nJumlah perbandingan: " << ctr << endl;

		cout << "\nLanjutkan pencarian (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
	input();
	Display();
}