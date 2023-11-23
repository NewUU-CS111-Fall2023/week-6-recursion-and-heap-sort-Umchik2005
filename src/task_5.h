#include <string>
std::string isPalindrome(std::string word, int i, int j){
    if(i >= j){
        return "Yes";
    } else if(word[i] != word[j]){
        return "No";
    }
    return isPalindrome(word, i + 1, j - 1);
}