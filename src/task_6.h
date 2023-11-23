
int secondLargest(int numbers[], int n) {
   if (n == 1) {
       return numbers[0];
   } else {
       int largest = std::max(numbers[0], numbers[1]);
       int secondLargest = std::min(numbers[0], numbers[1]);
       for (int i = 2; i < n; i++) {
           if (numbers[i] > largest) {
               secondLargest = largest;
               largest = numbers[i];
           } else if (numbers[i] > secondLargest) {
               secondLargest = numbers[i];
           }
       }
       return secondLargest;
   }
}