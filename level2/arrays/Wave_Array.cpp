/*
Wave Array
https://www.interviewbit.com/problems/wave-array/
*/

vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(), A.end());
    vector<int> v(A.size());
    int Asize = A.size();
    if(Asize%2 != 0){
        v[Asize - 1] = A[Asize - 1];
        Asize--;  
    } 
    for(int i = 1; i < Asize; i+=2){
        v[i - 1] = A[i];    
    }
    
    for(int i = 0; i < Asize; i+=2){
        v[i + 1] = A[i];
    }

    return v;
}
