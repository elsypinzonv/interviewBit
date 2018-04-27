/*
First Missing Integer
https://www.interviewbit.com/problems/first-missing-integer/
*/

int Solution::firstMissingPositive(vector<int> &A) {
    vector<bool> v(A.size(), false);
    for(int i = 0; i < A.size(); i++){
        if(A[i] > 0 && A[i] <= A.size()) v[A[i] - 1] = true;
    }
    for(int i = 0; i < v.size(); i++){
        if(v[i] == false) return (i + 1);
    }
    return v.size() + 1;
}
