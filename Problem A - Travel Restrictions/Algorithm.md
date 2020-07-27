For each starting country ss, the set of destination countries which it's possible to reach must form some consecutive interval A_s..B_sA 
s
​	 ..B 
s
​	 , such that A_s \leq s \leq B_sA 
s
​	 ≤s≤B 
s
​	 .
We can begin by assuming that B_s = sB 
s
​	 =s, and then repeatedly increase B_sB 
s
​	  until it has reached either country NN or the first country after ss which is unreachable from it. As long as B_s < NB 
s
​	 <N, it should be incremented if flights are allowed from country B_sB 
s
​	  to country B_s+1B 
s
​	 +1, which is the case if and only if O_{B_s} = I_{B_s+1} =O 
B 
s
​	 
​	 =I 
B 
s
​	 +1
​	 = "Y".
The above process can be performed for each starting country ss, and repeated similarly to compute each A_sA 
s
​	  value. A_{1..N}A 
1..N
​	  and B_{1..N}B 
1..N
​	  may then be used to populate the required PP matrix. Each part of this solution takes O(N^2)O(N 
2
 ) time.

