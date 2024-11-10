
#include <iostream>

template<class T>
void display(T &a)
{
    for (int k = 0; k < sizeof(a) / sizeof(a[0]); ++k)
        std::cout << a[k] << " ";
    std::cout << std::endl;
}
//Hepsi int türden dizi olmasına rağmen T türü int[3], int[5], int[10] olduğu için
//compiler 3 ayrı işlev yazmıştır.
int main()
{
    int a1[5] = {1, 2, 3, 4, 5};
    display(a1);

    int a2[3] = {10, 20, 30};
    display(a2);

    int a3[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    display(a3);

    return 0;
}