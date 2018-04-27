/* 
Merge Intervals
https://www.interviewbit.com/problems/merge-intervals/
*/

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    vector<Interval> answer;
    
    Interval custom = Interval(0,0);
    bool first = true;
    bool second = false;
    for(int i = 0; i < intervals.size(); i++){
        
        Interval current = intervals[i];
        
        //part one
        if(newInterval.start <= current.end && first){
            first = false;
            if(newInterval.end >= current.start){
                custom = Interval(min(newInterval.start, current.start), max(newInterval.end, current.end));
                if(newInterval.end > current.end ){
                    second = true;
                    continue;
                }
                answer.push_back(custom);
            }else {
                answer.push_back(newInterval);
                answer.push_back(current);
            }
            continue;    
        }
        
        //part 2
        if(second){
            if(newInterval.end >= current.start){
                custom.end = max(current.end, newInterval.end);
            }else{
                second = false;
                 answer.push_back(custom);
                 answer.push_back(current);
            }
            continue;
        }
        
        answer.push_back(current);
        
    }
    
    if(first) answer.push_back(newInterval);
    if(second) answer.push_back(custom);
    
    return answer;
    
}
