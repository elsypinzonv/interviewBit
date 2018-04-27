/*
Find Duplicate in Array
https://www.interviewbit.com/problems/find-duplicate-in-array/
*/

//with XOR
int Solution::repeatedNumber(const vector<int> &A) {
   int xor1=0;
    for(int i=1; i<A.size(); i++) {
        xor1^=A[i];
        xor1^=i;
    }
    xor1^=A[0];
    return xor1;
}

//With memory
int Solution::repeatedNumber2(const vector<int> &A) {
    vector<bool> v(A.size(), false);
    for( int i = 0; i < A.size(); i++){
        if(v[A[i]] == true ) return A[i];
        v[A[i]] = true;
    }
    return -1;
}
