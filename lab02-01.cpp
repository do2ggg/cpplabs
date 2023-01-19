#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#define reset          "\033[0m"
#define black          "\033[30m"
#define red            "\033[31m"
#define green          "\033[32m"
#define yellow         "\033[33m"
#define blue           "\033[34m"
#define magenta        "\033[35m"
#define cyan           "\033[36m"
#define white          "\033[37m"
#define brightblack    "\033[90m"
#define brightred      "\033[91m"
#define brightgreen    "\033[92m"
#define brightyellow   "\033[93m"
#define brightblue     "\033[94m"
#define brightmagenta  "\033[95m"
#define brightcyan     "\033[96m"
#define brightwhite    "\033[97m"


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
    return 0;
}

