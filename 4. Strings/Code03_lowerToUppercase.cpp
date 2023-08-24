// Write a program that takes a sentence as input and converts all lowercase letters in the sentence to uppercase. 

#include <bits/stdc++.h>
using namespace std;
void lowerToUpper(char sentence[])
{
    int length = strlen(sentence);

    for (int i = 0; i < length; i++)
    {
        if (sentence[i] >= 97 && sentence[i] <= 122)
        {
            sentence[i] = (sentence[i] - 'a' + 'A'); // sentence[i] - 32;
        }
    }
}

int main()
{
    char sentence[100];
    cin.getline(sentence, 100);
    lowerToUpper(sentence);
    cout << sentence;
}
