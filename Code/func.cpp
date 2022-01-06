#include "headers.h"
#include <assert.h>
int sum(int a, int b)
{
    return a + b;
}
void show()
{

    std::cout << "hello" << std::endl;
}
void RePlaceBlank(char string[], int length)
{
    if (string == NULL && length <= 0)
        return;
    int originalLength = 0;
    int numberOfBlank = 0;
    int i = 0;
    while (string[i] != '\0')
    {
        ++originalLength;
        if (string[i] == ' ')
        {
            ++numberOfBlank;
        }
        ++i;
    }
    int newLength = originalLength + numberOfBlank * 2;
    if (newLength > length)
        return;
    int indexOfOriginal = originalLength;
    int indexOfNew = newLength;
    while (indexOfOriginal >= 0 && indexOfNew > indexOfOriginal)
    {
        if (string[indexOfOriginal] == ' ')
        {
            string[indexOfNew--] = '0';
            string[indexOfNew--] = '2';
            string[indexOfNew--] = '%';
        }
        else
        {
            string[indexOfNew--] = string[indexOfOriginal];
        }
        --indexOfOriginal;
    }
}


int myStrCmp(char *s1, char *s2)
{
    //断言，指针不为空
    assert(s1 != NULL && s2 != NULL);
    while (*s1 == *s2)
    {
        if (*s1 == '\0')
            return 0;
        ++s1;
        ++s2;
    }
    return *s1 - *s2;
}