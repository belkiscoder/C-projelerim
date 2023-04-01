//Girilen sýcaklýk derecesine göre suyun durumunu belirten program
#include <iostream>
using namespace std;
int main()
{
	cout<< "Lutfen bir sayi giriniz!"<<endl;
	int sayi;
	cin >> sayi;
	if (sayi >=100)
	cout << "buhar";
	else if (sayi<0)
	cout<< "buz";
	else 
	cout << "su";

	return 0;
}
