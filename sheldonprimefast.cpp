#include <bits/stdc++.h>
using namespace std;

// Reverse integer (fast)
inline int reverse_num(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

// Generate primes using Sieve (optimized memory)
vector<int> generate_primes_sieve(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; 1LL * i * i <= limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    primes.reserve(limit / log(limit)); // approx prime count
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
    return primes;
}

void rank_prime(const vector<int>& primes, int limit) {
    // rank array (0 = not prime, else rank index)
    vector<int> prime_rank(limit + 1, 0);
    for (int i = 0; i < (int)primes.size(); i++) {
        prime_rank[primes[i]] = i + 1;  // rank 1-based
    }

    int ans = -1;
    for (int p1 : primes) {
        int r1 = prime_rank[p1];
        int p2 = reverse_num(p1);

        if (p2 > p1 && p2 <= limit && prime_rank[p2] != 0) {
            int r2 = prime_rank[p2];
            if (reverse_num(r2) == r1) {
                ans = p2;
            }
        }
    }
    cout << "Last prime satisfy condition: " << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int limit;
    cout << "Enter limit:\n";
    cin >> limit;

    auto start = chrono::high_resolution_clock::now();

    vector<int> primes = generate_primes_sieve(limit);
    rank_prime(primes, limit);

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> diff = end - start;
    cout << "Time taken = " << diff.count() << " sec\n";
}
