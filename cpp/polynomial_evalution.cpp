#include <iostream>

using namespace std;

int hornerEvaluationOfPolynomial(int polynomial[], int polynomial_length, int x){
    int result = polynomial[0];
    for(int i=1; i<polynomial_length; i++)
        result = result * x + polynomial[i];
    return result;
}

int main(){

    // Evaluating x^{3}-6x^{2}+11x-6 for x = 3
    int polynomial[] = {1, -6, 11, -6};
    int x = 3, polynomial_length = 4;
    
    cout << hornerEvaluationOfPolynomial(polynomial, polynomial_length, x)<< endl;
}
