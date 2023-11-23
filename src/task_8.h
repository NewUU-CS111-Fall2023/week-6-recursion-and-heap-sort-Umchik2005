#include <bits/stdc++.h>
 
std::string findSum(std::string str1, std::string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
 
    std::string str = "";
 
    int n1 = str1.length();
    int n2 = str2.length();
 
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
 
    int carry = 0;
    for (int i = 0; i < n1; i++) {
 
        int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
 
        carry = sum / 10;
    }
 
    for (int i = n1; i < n2; i++) {
        int sum = ((str2[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
 
    if (carry)
        str.push_back(carry + '0');
 
    reverse(str.begin(), str.end());
 
    return str;
}
 
std::string findDiff(std::string str1, std::string str2)
{
    std::string str = "";
 
    int n1 = str1.length(), n2 = str2.length();
 
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
 
    int carry = 0;
 
    for (int i = 0; i < n2; i++) {
        int sub = ((str1[i] - '0') - (str2[i] - '0') - carry);
 
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
 
        str.push_back(sub + '0');
    }
 
    for (int i = n2; i < n1; i++) {
        int sub = ((str1[i] - '0') - carry);
 
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
 
        str.push_back(sub + '0');
    }
 
    reverse(str.begin(), str.end());
 
    return str;
}
 
std::string removeLeadingZeros(std::string str)
{
    const std::regex pattern("^0+(?!$)");
 
    str = std::regex_replace(str, pattern, "");
    return str;
}
 
std::string multiply(std::string A, std::string B)
{
    if (A.length() > B.length())
        swap(A, B);
 
    int n1 = A.length(), n2 = B.length();
    while (n2 > n1) {
        A = "0" + A;
        n1++;
    }
 
    if (n1 == 1) {
 
        int ans = stoi(A) * stoi(B);
        return std::to_string(ans);
    }
 
    if (n1 % 2 == 1) {
        n1++;
        A = "0" + A;
        B = "0" + B;
    }
 
    std::string Al, Ar, Bl, Br;
 
    for (int i = 0; i < n1 / 2; ++i) {
        Al += A[i];
        Bl += B[i];
        Ar += A[n1 / 2 + i];
        Br += B[n1 / 2 + i];
    }
 
    std::string p = multiply(Al, Bl);
    std::string q = multiply(Ar, Br);
 
    std::string r = findDiff(
        multiply(findSum(Al, Ar), findSum(Bl, Br)),
        findSum(p, q));
 
    for (int i = 0; i < n1; ++i)
        p = p + "0";
 
    for (int i = 0; i < n1 / 2; ++i)
        r = r + "0";
 
    std::string ans = findSum(p, findSum(q, r));
 
    ans = removeLeadingZeros(ans);
 
    return ans;
}