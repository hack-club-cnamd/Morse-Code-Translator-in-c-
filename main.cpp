#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string word;

    short int i;

    bool newLine;

    getline(cin, word);

    cout << endl << endl;

    for(i = 0; i <= word[i]; i++)
    {
        newLine = false;

        switch(word[i])
        {
            case 'a' : cout << ".-"; break;
            case 'b' : cout << "-..."; break;
            case 'c' : cout << "-.-."; break;
            case 'd' : cout << "-.."; break;
            case 'e' : cout << "."; break;
            case 'f' : cout << "..-."; break;
            case 'g' : cout << "--."; break;
            case 'h' : cout << "...."; break;
            case 'i' : cout << ".."; break;
            case 'j' : cout << ".---"; break;
            case 'k' : cout << "-.-"; break;
            case 'l' : cout << ".-.."; break;
            case 'm' : cout << "--"; break;
            case 'n' : cout << "-."; break;
            case 'o' : cout << "---"; break;
            case 'p' : cout << ".--."; break;
            case 'q' : cout << "--.-"; break;
            case 'r' : cout << ".-."; break;
            case 's' : cout << "..."; break;
            case 't' : cout << "-"; break;
            case 'u' : cout << "..-"; break;
            case 'v' : cout << "...-"; break;
            case 'w' : cout << ".--"; break;
            case 'x' : cout << "-..-"; break;
            case 'y' : cout << "-.--"; break;
            case 'z' : cout << "--.."; break;

            case ' ' : newLine = true; break;
        }
        if(newLine == true)
        {
            cout << endl;
        }
        else
        {
            cout << "   ";
        }
    }
    cout << endl << endl;
}


























