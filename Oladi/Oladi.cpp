// Oladi.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	cout << "*********Переворачиваем оладьи**************\n";

    int oladi[] = { 54, 55, 9, 46, 36, 8, 41, 63 ,39, 97 };

    int arSize = sizeof(oladi) / sizeof(int);
    int buff;
    int max;
    int maxArrayElement;
    
    for (int i = 0; i < arSize; i++)
    {
        cout << "Радиус оладушка №[" << i+1 << "] = " << oladi[i] << endl;
    }

    for (int i = arSize - 1; i >= 0; i--)
    {
        max = oladi[i];
        maxArrayElement = i;
        for (int j = i; j >= 0; j--)
        {
            if (oladi[j] > max)
            {
                max = oladi[j];
                maxArrayElement = j;
                
            }
            
        }
        for (int flip = 0; flip <= maxArrayElement / 2; flip++)
        {
            
            if (maxArrayElement == 0)
            {
                break;
            }

            buff = oladi[flip];
           oladi[flip] = oladi[maxArrayElement - flip];
            oladi[maxArrayElement - flip] = buff;
        }
        for (int flip = 0; flip <= i / 2; flip++)
        {
            buff = oladi[flip];
            oladi[flip] = oladi[i - flip];
           oladi[i - flip] = buff;
        }
    }

    cout << endl << "Окончательная стопка оладьев: \n";
    
    for (int i = 0; i < arSize; i++)
    {
        cout << "Оладушек №[" << i+1 << "] = " << oladi[i] << endl;
    }
    

   


}


