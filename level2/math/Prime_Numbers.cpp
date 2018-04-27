/*
Prime Numbers
https://www.interviewbit.com/problems/prime-numbers/
*/

vector<int> Solution::sieve(int n) {
    vector<int> sieve(n + 2);
    vector<int> primes;
    if(n >= 2) primes.push_back(2);
    for(int i = 4;  i <=n; i+=2)
        sieve[i] = 2;
    for(long long int i = 3; i <= n; i+=2)
        if(!sieve[i]){
            for(long long int j = i *i; j <= n; j+=i)
                if(!sieve[j]) sieve[j] = i;
            primes.push_back(i);
        }
    return primes; 
}
