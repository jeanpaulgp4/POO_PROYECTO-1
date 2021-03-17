#include <iostream>
#include "menu.h"

int main()
{
    int opcion, i;
    std::cout << "\n";
    do
    {
        opcion = menu();
        switch (opcion)
        {
        case 0:
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
        default:
            std::cout << "\nNumero invalido\n" << std::endl;
            break;
        }
    } while (opcion != 0);
    return 0;
}