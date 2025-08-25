#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <chrono>   // timing include
using namespace std;

void print(vector<int> v) {
    for (int x : v) cout << x << " ";
    cout << endl;
}

// Reverse integer
int reverse_num(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

// Generate primes using Sieve algo
vector<int> generate_primes_sieve(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2 ; i <= limit; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
    return primes;
}

void rank_prime(unordered_map<int,int> &prime_rank, vector<int> primes) {
    int ans = -1;
    for (int p1 : primes) {
        int r1 = prime_rank[p1];
        int p2 = reverse_num(p1);

        if (p1 != p2 && prime_rank.find(p2) != prime_rank.end()) {
            int r2 = prime_rank[p2];
            if (p2 > p1 && reverse_num(r2) == r1) {
                ans = p2;
            }
        }
    }
    cout << "Primes satisfy condition: "<< ans << endl;
}

int main() {
    cout << "Enter the limit:\n";
    int limit;
    cin >> limit;

    auto start = chrono::high_resolution_clock::now(); // start timing

    // Generate primes using sieve
    vector<int> primes = generate_primes_sieve(limit);

    unordered_map<int,int> prime_rank;
    int r = 1;
    for (int p : primes) {
        prime_rank[p] = r++;
    }

    rank_prime(prime_rank, primes);

    auto end = chrono::high_resolution_clock::now();   // end timing
    chrono::duration<double> diff = end - start;
    cout << "Time taken = " << diff.count() << " sec\n";

    return 0;
}
