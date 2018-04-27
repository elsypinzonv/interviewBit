/*
FizzBuzz
https://www.interviewbit.com/problems/fizzbuzz/
*/

vector<string> Solution::fizzBuzz(int A) {
    vector<string> v(A);
    for(int i = 1; i<= A; i++){
        if(i%3 != 0 && i%5 != 0){
            v[i-1] = to_string(i);
            continue;
        }
        if(i%3 == 0 && i%5 == 0){
            v[i-1] = "FizzBuzz";
            continue;
        }
        if(i%3 == 0){
            v[i-1] = "Fizz";
            continue;
        }
        if(i%5 == 0){
            v[i-1] = "Buzz";
            continue;
        }
    }
    return v;
}
