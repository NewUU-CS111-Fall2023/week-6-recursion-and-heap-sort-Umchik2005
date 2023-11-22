/*
 * Author:
 * Date:
 * Name:
 */
void ascendingOrder(int A, int B) {
    if (A <= B) {
        std::cout << A << " ";
        ascendingOrder(A + 1, B);
    }
}

void descendingOrder(int A, int B) {
    if (A >= B) {
        std::cout << A << " ";
        descendingOrder(A - 1, B);
    }
}
