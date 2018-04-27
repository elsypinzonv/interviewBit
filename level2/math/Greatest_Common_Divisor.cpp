/*
Greatest Common Divisor
https://www.interviewbit.com/problems/greatest-common-divisor/
*/

int Solution::gcd(int A, int B) {
    int C;
    if(B > A){
        C = B;
        B = A;
        A = C;
    }
    if(B == 0) return A;
    return gcd(B, A%B);
}
