#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence, word = "";
    int maxLength = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    sentence = sentence + " ";

    for(int i = 0; i < sentence.length(); i++)
    {
        if(sentence[i] != ' ')
        {
            word = word + sentence[i];
        }
        else
        {
            if(word.length() > maxLength)
            {
                maxLength = word.length();
            }
            word = "";
        }
    }

    cout << "\nLongest Word(s):" << endl;

    word = "";

    for(int i = 0; i < sentence.length(); i++)
    {
        if(sentence[i] != ' ')
        {
            word = word + sentence[i];
        }
        else
        {
            if(word.length() == maxLength)
            {
                cout << word << endl;
            }
            word = "";
        }
    }

    cout << "Length: " << maxLength << endl;

    return 0;
}