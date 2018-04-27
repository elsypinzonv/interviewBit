/*
Min Steps in Infinite Grid
https://www.interviewbit.com/problems/min-steps-in-infinite-grid/
*/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int dif = 0;
    int x,y;
    x = A[0];
    y = B[0];
    for(int i = 1; i < A.size(); i++){
        dif += max(abs(x - A[i]), abs(y - B[i]));
        x = A[i];
        y = B[i];
    }   
    return dif;
}
