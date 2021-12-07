#include <iostream>
#include "lang.hpp"
using namespace std;

int main()
{
    char text[16];
    while (true)
    {
        printf("lang > ");
        scanf("%16s", text);
        printf("%s\n", text);
    }
    return 0;
}
