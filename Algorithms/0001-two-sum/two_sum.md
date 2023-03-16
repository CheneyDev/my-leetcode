# Two Sum

## Algorithm

It turns out we can do it in one-pass. While we are iterating and inserting elements into the hash table, we also look back to check if current element's complement already exists in the hash table. If it exists, we have found a solution and return the indices immediately.

## Complexity Analysis

Time complexity: O(n). We traverse the list containing nnn elements only once. Each lookup in the table costs only O(1) time.

Space complexity: O(n). The extra space required depends on the number of items stored in the hash table, which stores at most nnn elements.

## References

[https://leetcode.com/problems/two-sum/solutions/127810/two-sum/](https://leetcode.com/problems/two-sum/solutions/127810/two-sum/)