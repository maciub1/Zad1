#include <iostream>
void credits()
{
    std::cout << "\nFibCalc\n";
    std::cout << "Maciej Banaszak\n";
    std::cout << "GR01\n";
}

int main()
{
    credits();

    int w = 1;
    while (w > 0)
    {
        int l1 = 0, l2 = 1, l3 = 0;

        std::cout << "Podaj liczbe elementow ciagu Fibonacciego lub -1 aby wyjsc: ";
        std::cin >> w;

        if (w > 0)
        {
            for (int i = 1; i <= w; ++i)
            {

                if (i == 1)
                {
                    std::cout << l1 << ", ";
                    continue;
                }
                if (i == 2)
                {
                    std::cout << l2 << ", ";
                    continue;
                }
                l3 = l1 + l2;
                l1 = l2;
                l2 = l3;

                std::cout << l3 << ", ";
            }
            credits();
        }
        else
            break;
    }
    std::cout << "Wychodzenie z programu ...";
    credits();
    //koniec
    return 0;
}