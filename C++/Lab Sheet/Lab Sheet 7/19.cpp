// 19. Write a program to join multiple strings into one sentence using strcat().

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[100], str2[100], str3[100];
    char sentence[300];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);
    cout << "Enter third string: ";
    cin.getline(str3, 100);
    strcpy(sentence, str1);
    strcat(sentence, " ");
    strcat(sentence, str2);
    strcat(sentence, " ");
    strcat(sentence, str3);
    cout << "sentence: " << sentence;
}

/*
OUTPUT

Enter first string: qwe
Enter second string: asd
Enter third string: zxc
sentence: qwe asd zxc

*/