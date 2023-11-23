/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"
#include "task_6.h"
#include "task_7.h"
#include "task_8.h"
#include "task_9.h"
#include "task_10.h"

int main() {
    std::cout << "Task 1" << std::endl;
    int a, b;

    std::cin >> a;
    std::cin >> b;

    if (a < b) {
        ascendingOrder(a, b);
    } else {
        descendingOrder(a, b);
    }
    std::cout << std::endl;
    std::cout << "/////////////////////////////////////" << std::endl;
    
    std::cout << "Task 2" << std::endl;
    
    int n2;
    std::cin >> n2;
    bool isPowerOfTwo = secondTask(n2);
    if(isPowerOfTwo){
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    std::cout << std::endl;
    std::cout << "/////////////////////////////////////" << std::endl;
    
    std::cout << "Task 3" << std::endl;
    
    int n3;
    std::cin >> n3;
    int sum = sumOfDigits(n3);
    std::cout << sum << std::endl;
    std::cout << "/////////////////////////////////////" << std::endl;

    std::cout << "Task 4" << std::endl;
    
    int n4;
    std::cin >> n4;
    if(isPrime(n4)){
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    std::cout << std::endl;
    std::cout << "/////////////////////////////////////" << std::endl;

    std::cout << "Task 5" << std::endl;

    std::string s5;
    std::cin >> s5;

    std::cout << isPalindrome(s5, 0, s5.length() - 1) << std::endl;
    std::cout << "/////////////////////////////////////" << std::endl;

    std::cout << "Task 6" << std::endl;




    std::cout << "/////////////////////////////////////" << std::endl;

    std::cout << "Task 7" << std::endl;

    int n7;
    std::cin >> n7;
    int numberOfDigits = countDigit(n7);

    std::cout << reverseNum(n7, numberOfDigits - 1) << std::endl;

    std::cout << "/////////////////////////////////////" << std::endl;

    std::cout << "Task 8" << std::endl;

    std::string number1, number2;

    std::getline(std::cin, number1);
    std::getline(std::cin, number2);

    std::cout << multiply(number1, number2) << std::endl;

    std::cout << "/////////////////////////////////////" << std::endl;
    return 0;
}
