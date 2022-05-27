# 5.2.b

### 1. Fractional Knapsack Problem

 [![image](https://www.linkpicture.com/q/KnapsackCartoon.jpeg)](https://www.linkpicture.com/view.php?img=LPic61add7c201bf8972476766)

- **What is KnapSack Problem ?**

    A Thief goes to a house to Steal n Objects having some price values but his knapsack can hold only a fixed amount of weight. Thus, He needs to select the items very smartly so that he maximizes the amount of money he can make from them. 

    **Note : Object can be broken in the pieces**

### 5.1 Problem Statement

- We are given N items with their corresponding weights and values, we have a knapsack weighing W. We have to choose among these N items to put into the Knapsack such that the value of the knapsack is maximum.

    **For Example :**

    **Input :** Items[] = [ [60, 10], [100, 20], [120, 30] ]

    Knapsack Capacity = 50

    **Output :** Maximum Possible Value = 240

    **Explanation :** By taking full items of 10 kg, 20 kg and 2/3rd of last item of 30 kg.

    Total Value = 60 + 100 + 120*2/3 = 240

    **Which item will you pick first ?**

    - To maximize the profit with every choice , we will pick the item with the largest ratio of value/weight.
    - This will reach us to globally optimal profit.

    **Solution Steps**

    - Find the value/weight ratio of each given item.
    - Sort the items based on the ratio of value/weight.
    - Then Start picking up the item with the highest ratio untill that item is completely taken up. After that we will move to the next highest.

    ```jsx
    ***Psuedo-code***

    def fractionalKnapsack( int K, item A[], int N )
    {
    		Sort(A, A+N);
    		totalValue = 0.0;
    		int currentUsedWeight = 0;
    		
    		for(int i = 0 to N-1){

    				if(A[i].weight < K){
    					totalValue = totalValue + A[i].value
    					currentUsedWeight = currentUsedWeight + A[i].weight
    				}

    				else{
    					int availaibleSpace = K - currentUsedSpace
    					totalValue = totalValue + A[i].value*(availaibleSpace/A[i].weight)
    					break
    				}
    		}

    }
    ```

    ### 5.2 Complexity Analysis

    **Time Complexity**

    - Time complexity of the sorting + Time Complexity of the loop to maximize profit
    - Total Time = O(NlogN) + O(N) = O(NlogN)

    **Space Complexity**

    - No Extra Space : O(1)
