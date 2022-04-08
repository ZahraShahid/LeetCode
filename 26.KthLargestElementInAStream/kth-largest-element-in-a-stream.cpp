// Returns the kth largest element in the given stream
// https://leetcode.com/problems/kth-largest-element-in-a-stream/

class KthLargest {
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
public:
    KthLargest(int k, vector<int>& nums) {
        n=k;
        for(auto const &x:nums){
            if(pq.size()<k){
                pq.push(x);
            }else{
                if(pq.top()<x){
                    pq.pop();
                    pq.push(x);
                }
            }
        }
        
    }
    
    int add(int val) {
        if(pq.size()<n){
            pq.push(val);
        }else{
            if(pq.top()<val){
                pq.pop();
                pq.push(val);
            }
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */