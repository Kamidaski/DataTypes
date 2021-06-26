#include <iostream>
#include<conio.h>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    /*int h, w, i, j;

    cout << "Введите высоту шахматной доски.\nh = ";
    cin >> h;
    cout << "Введите ширину шахматной доски.\nw = ";
    cin >> w;
    setlocale(LC_ALL, "C");
    for (i = 0; i < h; i++)
    {
        setlocale(LC_ALL, "C");
        for (j = 0; j < w; j++)
        {
            setlocale(LC_ALL, "C");
            ((j % 2 && i % 2) || (!(j % 2) && !(i % 2))) ? (cout << '◼') : (cout << '◻');
            cout << (char)i << " ";
        }
        cout << '\n';
    }
    cout << "\n\n\n";*/
    int n;
    cout << "Введите размер фигуры: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            setlocale(LC_ALL, "");
            cout << "▢ ";
        }
        cout << endl;
    }

}