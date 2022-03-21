#include <iostream>
using namespace std;
class Nokta{
    int x,y;
    public:
    void git(int, int);
    void goster();
    void sifir_mi();
};
void Nokta::git(int x2, int y2)
{
    x = x2;
    y = y2;
}
void Nokta::goster()
{
    cout << "x noktasi: " << x << ", y noktasi: " << y << endl;
}
void Nokta::sifir_mi()
{
    if ((x == 0) && (y == 0))
        cout << "nokta su anda sifir noktasindadir." << endl;
    else
        cout << "nokta su anda sifir noktasinda degildir." << endl;
}
int main() {
    Nokta a;
    a.git(13,89);
    a.goster();
    return 0;
}
