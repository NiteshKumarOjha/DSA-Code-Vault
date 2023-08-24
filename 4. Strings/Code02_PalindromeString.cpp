// Write a program that checks whether a given sentence is a palindrome or not. A palindrome is a sequence of characters that reads the same forwards as it does backward.

#include <bits/stdc++.h>
using namespace std;
void palindrome(char sentence[])
{
    int length = strlen(sentence);
    int i = 0;
    int j = length - 1;
    while (i < j)
    {
        if (sentence[i] != sentence[j])
        {
            cout << "Not a Palindrome";
            return;
        }

        i++;
        j--;
    }
    cout << "Palindrome";
}

int main()
{
    char sentence[100];
    cin.getline(sentence, 100);
    palindrome(sentence);
}
