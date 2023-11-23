#include <vector>

class Heap {
private:
   std::vector<int> heap;

   void maxHeapify(int i, int heapSize) {
       int left = 2 * i + 1;
       int right = 2 * i + 2;
       int largest = i;

       if (left < heapSize && heap[left] > heap[largest]) {
           largest = left;
       }

       if (right < heapSize && heap[right] > heap[largest]) {
           largest = right;
       }

       if (largest != i) {
           std::swap(heap[i], heap[largest]);
           maxHeapify(largest, heapSize);
       }
   }

public:
   void buildMaxHeap() {
       int heapSize = heap.size();

       for (int i = heapSize / 2 - 1; i >= 0; --i) {
           maxHeapify(i, heapSize);
       }
   }

   void heapsort() {
       int heapSize = heap.size();

       buildMaxHeap();

       for (int i = heapSize - 1; i >= 1; --i) {
           std::swap(heap[0], heap[i]);
           maxHeapify(0, i);
       }
    }

    void insertNumbers(int numbers) {
       heap.push_back(numbers);
   }

    void printHeapElemnts() {
       for (int i = 0; i < heap.size(); ++i) {
           std::cout << heap[i] << " ";
       }
       std::cout << std::endl;
   }

};



  
