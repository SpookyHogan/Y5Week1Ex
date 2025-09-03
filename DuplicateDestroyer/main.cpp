#include <iostream>
#include "string.h"

using namespace std;

int main()
{
    cout << "Please enter your text and I, in my infinite wisdom, will remove any duplicate characters\n";

    string enteredText; // TODO: figure out how to get multiple words

    //getline(std::cin, enteredText);

    cin >> enteredText;

    int length = enteredText.length();

    int length2 = 0;

    char index = 'q';

    do
    {
        index = enteredText[length2]; // counts the number of characters in the text
        length2++;
    } while (index != '\0');

    // length2 includes the null character at the end

    char* usedCharacters = new char[length2] {'\0'};

    for (int i = 0; i < length2; i++)
    {
        bool isUnique = true;
        int j = 0;
        while (usedCharacters[j] != '\0' && isUnique) // check against all letters already registered
        {
            if (enteredText[i] == usedCharacters[j])
            {
                isUnique = false;
            }
            j++;
        }
        //if (enteredText[i] & usedCharacters[j])
        //{
        //    isUnique = false;
        //}
        if (isUnique)
        {
            //usedCharacters = usedCharacters + enteredText[i];
            j = 0;
            while (usedCharacters[j] != '\0')
            {
                j++;
            }
            usedCharacters[j] = enteredText[i];
        }


        //for (int j = 0; j < length2; j++)
        //{

        //}
    }


    int bp = 5;

    cout << "\n" << usedCharacters;


    if (usedCharacters)
    {
        delete[] usedCharacters;
    }

    return 0;
}