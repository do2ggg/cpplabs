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
    y=(3*sin(a+(b/c)))/(tan(c-b)+pow(a,2))+(b*c);
    cout << y << "\n";
    cout << brightcyan
	 << "(code by alexandrov 🦄)\n";
    system("pause");
    return 0;
}

