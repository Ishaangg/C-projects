#include <iostream>
using namespace std;
int main()
{
    char letter;
    cout<<"Enter an alphabet in lowercase\n";
    cin>>letter;

    switch (letter)
    {
    case 'a':
        cout<<"Its a vowel\n";
        break;

    case 'e':
        cout<<"Its a vowel\n";
        break;

    case 'i':
        cout<<"Its a vowel\n";
        break;
    case 'o':
        cout<<"Its a vowel\n";
        break;
    case 'u':
        cout<<"Its a vowel\n";
        break;
    
    default:
        cout<<"Its a consonant\n";
        break;
    }
    return 0;
}
