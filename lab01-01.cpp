#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#define brightcyan     "\033[96m"


using namespace std;
 
int main()
{
    setlocale(0,"");
    float a,b,c,y;
    cout << "Введіть дані для a,b,c \n";
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "c:";
    cin >> c;
    y=(b+cos(c))/(2*b+4*sqrt(a+c))-6*tan(c);
    cout << y << "\n";
    cout << brightcyan
	 << "(code by alexandrov 🦄)\n";
    system("pause");
    return 0;
}

