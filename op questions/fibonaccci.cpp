//using binet formula 
 
#include <bits/stdc++.h>
using namespace std;

int calculateFibonacci(int n) {
    double phi = (1 + sqrt(5)) / 2; // Golden ratio

    double nthFibonacci = (pow(phi, n) - pow(1 - phi, n)) / sqrt(5);
    
    return round(nthFibonacci); // Round to the nearest integer
}

int main() {
    int n;
    cout << "Enter the value of n to find the nth Fibonacci number: ";
    cin >> n;

    int result = calculateFibonacci(n);
    cout << "The " << n << "th Fibonacci number is: " << result <<endl;

    return 0;
}
