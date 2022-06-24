//https://leetcode.com/problems/construct-target-array-with-multiple-sum


class Solution {
    public boolean isPossible(int[] target) {
        if(target.length == 1) return target[0]==1;
        
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
        int sum = 0;
        
        for(int i:target){
            pq.add(i);
            sum += i;
        }
        
        while(pq.peek()!=1){
            int cur = pq.poll();
            
            if(sum - cur == 1) return true;
            
            int x = cur % (sum - cur);
            sum = sum - cur + x;
            
            if(x==0 || x==cur) return false;
            else pq.add(x);
        }
        
        return true;
    }
}
