Let F_AF 
A
​	  and F_BF 
B
​	  be the number of "A" (auburn) shards and the number of "B" (black) shards, respectively.
We can observe that every time shards are fused F_AF 
A
​	  and F_BF 
B
​	  each decrease by 11. One implication of this is that total number of shards F_A + F_BF 
A
​	 +F 
B
​	  decreases by 22 each time. Since NN is initially a positive odd integer, this means that the sequence of shards will always be reduced to a single shard after enough fusing operations, as long as they can all be performed safely. A more interesting implication is that F_A - F_BF 
A
​	 −F 
B
​	  remains constant between operations. Since F_A - F_BF 
A
​	 −F 
B
​	  must be equal to either 11 or -1−1 when there's one shard remaining, we must also have |F_A - F_B| = 1∣F 
A
​	 −F 
B
​	 ∣=1 in the initial sequence in order for that final state to be achievable.
So far, we've shown that the answer must be "N" if |F_A - F_B| \neq 1∣F 
A
​	 −F 
B
​	 ∣≠1. The remaining question is whether the answer is always "Y" if |F_A - F_B| = 1∣F 
A
​	 −F 
B
​	 ∣=1. The only way it could be "N" is if it were impossible to perform a fusing operation at any point while there are three or more shards. This is only impossible if all shards are the same colour (as there must otherwise be at least one consecutive triple of shards not all sharing the same colour), which cannot ever be the case if N \geq 3N≥3 and |F_A - F_B| = 1∣F 
A
​	 −F 
B
​	 ∣=1 (as we must have F_A \geq 1F 
A
​	 ≥1 and F_B \geq 1F 
B
​	 ≥1).
Therefore, we have only to loop over the shards in O(N)O(N) time to compute F_AF 
A
​	  and F_BF 
B
​	 , and then check whether or not |F_A - F_B| = 1∣F 
A
​	 −F 
B
​	 ∣=1.

