#include <iostream>
#include "clsString.h"
#include <vector>

using namespace std;

int main()
{
    clsString String1;

    String1.Value = "Mohammed Saqer Abu-Hadhoud @Programming Advices";
    cout << "String1 = " << String1.Value << endl;

    cout << "\nCount Words: " << String1.CountWords() << endl;

    String1.PrintFirstLetterOfEachWord();

    String1.UpeerFirstLetterOfEachWord();
    cout << "\nUpper First Letter of Each Word: " << String1.Value << endl;

    String1.LowerFirstLetterOfEachWord();
    cout << "\nLower First Letter of Each Word: " << String1.Value << endl;

    String1.UpperAllString();
    cout << "\nUpper All String: " << String1.Value << endl;

    String1.LowerAllString();
    cout << "\nLower All String: " << String1.Value << endl;

    String1.InvertAllStringLetterCase();
    cout << "\nInvert All String Letter Case: " << String1.Value << endl;

    cout << "\nCount Capital Letters: " << String1.CountCapitalLetters() << endl;
    cout << "\nCount Small Letters: " << String1.CountSmallLetters() << endl;

    cout << "\nCount Specific Letter 'a': " << String1.CountSpecificLetter('a') << endl;
    cout << "\nCount Letter 'a' (ignore case): " << String1.CountLetter('a') << endl;

    cout << "\nCount Vowels: " << String1.CountVowels() << endl;

    String1.PrintVowels();

    String1.PrintEachWordInString();

    vector<string> vSplit = String1.SplitString(" ");
    cout << "\nSplit String Result:\n";
    for (string s : vSplit)
    {
        cout << s << endl;
    }

    String1.TrimLeft();
    cout << "\nAfter TrimLeft: " << String1.Value << endl;

    String1.TrimRight();
    cout << "\nAfter TrimRight: " << String1.Value << endl;

    String1.Trim();
    cout << "\nAfter Trim (Left + Right): " << String1.Value << endl;

    vector<string> vWords = { "Hello", "World", "From", "clsString" };
    cout << "\nJoin String: " << clsString::JoinString(vWords, "-") << endl;

    string arr[] = { "one", "two", "three" };
    cout << "\nJoin String With Array: " << clsString::JoinStringWithArray(arr, 3, ", ") << endl;

    cout << "\nReverse Words In String: " << clsString::ReverseWordsInString("Learn Programming Easily") << endl;

    cout << "\nReplace Word Using BuiltIn: " << String1.ReplaceWordInStringUsingBuiltInFunction("mohammed", "MOH") << endl;

    cout << "\nReplace Word Using Split: " << String1.ReplaceWordInStringUsingSplit("saqer", "SAQ") << endl;

    cout << "\nRemove Punctuations: " << clsString::RemovePunctuationsFromString("Hello, World! How are you?") << endl;

    system("pause > 0");
    return 0;
}
