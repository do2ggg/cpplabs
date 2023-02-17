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
    float a,b,c;
    cout << "Введіть сторони трикутнику:\n";
	cout << "Введіть сторону AB:"; cin >> a;
	cout << "Введіть сторону BC:"; cin >> b;
	cout << "Введіть сторону AC:"; cin >> c;
	if (a==b && b==c && a==c) {
	cout << brightgreen << "ТАК\n";
	}
	else {
	cout << brightred << "НІ\n";
	}
	cout << brightcyan
	 << "(code by alexandrov 🦄)\n";
	system("pause");
    return 0;
}


