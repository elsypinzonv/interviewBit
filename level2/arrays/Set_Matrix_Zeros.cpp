/*
Set Matrix Zeros
https://www.interviewbit.com/problems/set-matrix-zeros/
*/

void rewriteR(vector<vector<int> > &A, int row){
    for(int i = 0; i< A[0].size(); i++){
        if(A[row][i] != 0) A[row][i] = 0;
    }
}

void rewriteC(vector<vector<int> > &A, int col){
    for(int i = 0; i< A.size(); i++){
         if(A[i][col] != 0) A[i][col] = 0;
    }
}
void Solution::setZeroes(vector<vector<int> > &A) {
    
    set<int> vrow;
    set<int> vcol;
    
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < A[i].size(); j++){
            if(A[i][j] != 0) continue;
            vrow.insert(i);
            vcol.insert(j);
        }
        
    }
    
   for(auto f : vrow) {
        rewriteR(A, f);
    }
    
    for(auto f : vcol) {
        rewriteC(A, f);
    }
    
}
