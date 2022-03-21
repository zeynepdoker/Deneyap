#include <iostream>
#include <string>
using namespace std;
class Basketbolcu
{
public:
	string ad;
	int forma;
	int basket;

	Basketbolcu(string x_ad, int x_forma, int x_basket){
    	ad = x_ad;
    	forma = x_forma;
    	basket = x_basket;
	}
};
int main()
{
	Basketbolcu a("ad soyad", 8 , 13);
	Basketbolcu b("ad soyad", 9, 17);
	cout << a.ad << " " << a.forma << " " << a.basket << "\n";
	cout << b.ad << " " << b.forma << " " << b.basket << "\n";
	return 0;
}
