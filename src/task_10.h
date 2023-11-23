#include <string>
#include <vector>
#include <algorithm>

bool isVowel(char character) {
    character = tolower(character);
    return character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u';
}

std::string sortVowels(std::string word) {
    std::vector<std::pair<char, int>> vowels;

    for (int i = 0; i < word.length(); ++i) {
        if (isVowel(word[i])) {
            vowels.push_back({word[i], i});
        }
    }

    sort(vowels.begin(), vowels.end());

    for (int i = 0, j = 0; i < word.length(); ++i) {
        if (isVowel(word[i])) {
            word[i] = vowels[j++].first;
        }
    }

    return word;
}
