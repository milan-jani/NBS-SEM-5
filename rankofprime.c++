//write a code for finding the rank of a prime number
//problem statement:if p1 ranks is r1 so reverse the p1 i.e p2 and the rank of p2 is r2 , and  r2 is reverse of r1
//return all pi which statisfied above condition

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n%i == 0) return false; 
    }
    return true;
}
int rev_num(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}
// Function to find the rank of a prime number and its reverse and if satidfied the condition push that prime number into new vector
vector<int> find_rank_of_prime(int n) {
   vector<int > primes;
   for(int i = 2; i <= n; ++i) {
       if (is_prime(i)) {
           primes.push_back(i);
       }
   } 
    vector<int> result;
    for(int p:primes){
        //first find the rank of prime number 
        int rank=find(primes.begin(), primes.end(), p) - primes.begin() + 1;
        //second find the reverse of prime number
        int reversed = rev_num(p);
        //check reversed p is prime or not
        if (is_prime(reversed)) {
            //third find the rank of reversed prime number
        int reversed_rank = find(primes.begin(), primes.end(), reversed) - primes.begin() + 1;
        //fourth check if the rank   of prime number and reversed prime number are reverse of each
        if (rank == rev_num(reversed_rank)) {
            result.push_back(p);
        }
        }
        


    }
    return result;
}

int main(){
    int n;
    cout << "Enter the limit:";
    cin >> n;
    vector<int> result = find_rank_of_prime(n);
    cout << "Primes satisfy condition: ";
    for (int prime : result) {
        cout << prime << " ";
    }
    cout << endl;

}




