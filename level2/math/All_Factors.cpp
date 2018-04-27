/*
All Factors
https://www.interviewbit.com/problems/all-factors/
*/

vector<int> Solution::allFactors(int A) {
    vector<int> factors;
    factors.push_back(1);
    for(int i=2; i*i <= A; i++){
        if(A%i == 0){
          factors.push_back(i);
          if(A/i != i)factors.push_back(A/i);
        } 

    }
    if(A != 1)factors.push_back(A);
    sort(factors.begin(), factors.end());
    return factors;
}
