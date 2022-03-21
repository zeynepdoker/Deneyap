#include <iostream>
using namespace std;
class Nokta{
    int x,y;
    public:
    void git(int, int);
    void goster();
    void sifirmi();
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
void Nokta::sifirmi()
{
    if ((x == 0) && (y == 0))
        cout << "nokta sıfır noktasındadır." << endl;
    else
        cout << "nokta sıfır noktasında değildir." << endl;
}
int main() {
    Nokta a;
    a.git(13,89);
    a.goster();
    return 0;
}
