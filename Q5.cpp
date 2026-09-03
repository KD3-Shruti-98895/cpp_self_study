#include <iostream>
using namespace std;

int my_strlen(const char str[])
{
    int length = 0;

    while(str[length] != '\0')
        length++;

    return length;
}

void my_strcpy(char destination[], const char source[])
{
    int i = 0;

    while(source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
}

int main()
{
    char str1[100];
    char str2[100];

    cout << "Enter a string: ";
    cin.getline(str1, 100);

    cout << "Length = " << my_strlen(str1) << endl;

    my_strcpy(str2, str1);

    cout << "Copied String = " << str2 << endl;

    return 0;
}