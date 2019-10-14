This problem is to find two numbers in a list, which add up to a specific number(target).

We can easy figure out a solution, using two loops.
The time complexity of this solution is O(n^2).

With the help of some data structures, we can solve the problem in O(n) time complexity.
In the O(n) time complexity solution, we use only one loop.
We want to judge whether there is the target pair in the list in O(1) time complexity.
To this end, we use hashmap, which can find the item in O(1) time complexity.

