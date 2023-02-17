#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <ccomplex>
#define brightcyan     "\033[96m"

using namespace std;
 
int main()
{
    setlocale(0,"");
    double a,b,c,y;
    cout << "Введіть дані для a,b,c \n";
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "c:";
    cin >> c;
    y=((sqrt(b*c)+pow(a,2))+5)/(1/tan(b))+(sin(a));
    cout << y << "\n";
    cout << brightcyan
	 << "(code by alexandrov 🦄)\n";
    system("pause");
    return 0;
}

