

int SophieGermainPrimes(vector<int> numbers) {
    int a = 0;
    for (int i = 1; i <= numbers.size(); i++){
        if (isPrime(2*n.at(i-1)+1) && isPrime(numbers.at(i-1))) a++;
    }
    return a;
}

bool isPrime(int a){
    for (int j = 2; j<= sqrt(a); j++)
        if (a%j == 0) return false;
    return true;
}

int main(){
    vector<int> numbers = {3, 4, 5, 6, 7, 8, 9, 10};
    SophieGermainPrimes(numbers);
}
