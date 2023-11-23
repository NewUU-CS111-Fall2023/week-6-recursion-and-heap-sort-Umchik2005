bool secondTask(int n){
    if(n == 1){
        return true;
    } else if (n % 2 != 0 || n < 1){
        return false;
    }
    return secondTask(n / 2);
}