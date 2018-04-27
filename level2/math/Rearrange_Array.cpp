/*
Rearrange Array
https://www.interviewbit.com/problems/rearrange-array/
*/

void Solution::arrange(vector<int> &A) {
   int N = A.size();
    for(int i = 0; i < N; ++i) {
        A[i] = A[i] + (A[A[i]]%N) * N;
    }

    for(int i = 0; i < N; ++i) {
        A[i] = A[i] / N;
    }
   
}

void Solution::arrange2(vector<int> &A) {
 long long int num = 0;
   for(int i = 0; i < A.size(); i++){
       num = num*10 + A[A[i]];
   }
   int x;
   for(int i = A.size() - 1; i >= 0; i--){
        x = num%10;  
        num = num/10;
        A[i] = x;
   }

}
