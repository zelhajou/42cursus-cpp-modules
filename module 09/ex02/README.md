# Ford-Johnson (Merge-Insertion) Sort Algorithm

PmergeMe is an implementation of the Ford-Johnson merge-insert sort algorithm, a sorting technique that aims to minimize the number of comparisons.

## **Exercise Requirements**

1. Creating a program named PmergeMe
2. Taking a positive integer sequence as input
3. Implementing the Ford-Johnson (merge-insert) sorting algorithm
4. Using at least two different STL containers
5. Displaying:
    - The unsorted sequence
    - The sorted sequence
    - Time taken using the first container
    - Time taken using the second container
6. Handling at least 3000 different integers

## **The Ford-Johnson Algorithm**

The Ford-Johnson algorithm, also known as merge-insertion sort, is a comparison-based sorting algorithm designed to minimize the number of comparisons needed to sort a sequence, approaching the theoretical minimum possible.

**Key Idea**: Instead of comparing elements sequentially (like in Bubble Sort or Selection Sort), Merge-Insertion Sort first groups elements into pairs, sorts each pair, then merges them using a smart insertion technique.

1. **Pairing Elements**:
    - The elements are divided into pairs (if there's an odd number, one element is left alone).
    - Each pair is compared, and the larger element is selected.
2. **Sort the Larger Elements**:
    - The larger elements from each pair are sorted recursively, forming a sorted list.
3. **Insert the Remaining Elements**:
    - The smaller elements from the pairs (and the leftover element, if any) are inserted into the sorted list one by one.
    - To minimize comparisons, the insertions follow a special order based on the Jacobsthal sequence.

**Time Complexity**:

- Best-case: O(n log n)
- Worst-case: O(n log n) (fewer comparisons than Merge Sort)
- Space Complexity: O(n) (additional space for storing pairs)

## **The Algorithm in Simple Terms**

Imagine you have 8 people of different heights, and you want to sort them from shortest to tallest:

1. Pair them up and compare their heights.
2. Winners go into a "Champion's List" (Main Chain), losers go into a "Second Chance List" (Pend Chain).
3. Recursively sort the Champion's List until you have a single ordered sequence.
4. Insert the elements from the Pend Chain into the Champion's List in a strategic order to minimize comparisons.
5. You now have a sorted list!

The "magic" happens in step 4, where we don't just insert elements randomly - we use a special sequence to minimize comparisons (Jacobsthal numbers).

## **Understanding Jacobsthal Numbers**

Jacobsthal numbers follow the recurrence relation:

```
J(n) = J(n-1) + 2*J(n-2)
```

With the first few values:

```
J(0) = 0, J(1) = 1, J(2) = 1, J(3) = 3, J(4) = 5, J(5) = 11, J(6) = 21, ...
```

In our implementation, the Jacobsthal sequence is generated dynamically to cover the number of pairs needed:

```cpp
std::vector<int> PmergeMe::getJacob(size_t size)
{
    std::vector<int> jacobsthal;
    jacobsthal.push_back(0);
    jacobsthal.push_back(1);
    
    while (jacobsthal.back() < static_cast<int>(size))
    {
        int lastNum = jacobsthal.back();
        int secondLastNum = jacobsthal[jacobsthal.size() - 2];
        
        int next = lastNum + 2 * secondLastNum;
        jacobsthal.push_back(next);
    }
    
    return jacobsthal;
}
```

## **Optimized Insertion Order**

The updated algorithm uses an optimized approach to determine the insertion order based on the Jacobsthal sequence:

```cpp
std::vector<int> PmergeMe::getInsertPos(size_t size)
{
    std::vector<int> jacobSeq = getJacob(size);
    std::vector<int> order;
    std::vector<bool> used(size, false);
    used[0] = true;

    for (size_t i = 1; i < jacobSeq.size() && jacobSeq[i] < static_cast<int>(size); i++)
    {
        if (!used[jacobSeq[i]]) {
            order.push_back(jacobSeq[i]);
            used[jacobSeq[i]] = true;
        }
        
        for (int j = jacobSeq[i] - 1; j > jacobSeq[i-1]; j--) {
            if (j < (int)size && !used[j]) {
                order.push_back(j);
                used[j] = true;
            }
        }
    }

    for (size_t i = 1; i < size; i++) {
        if (!used[i]) {
            order.push_back(i);
        }
    }

    return order;
}
```

This function:
1. Generates a Jacobsthal sequence up to or beyond the size needed
2. Marks the first element (index 0) as already processed
3. For each Jacobsthal number, adds its index to the insertion order if not yet processed
4. For each range between consecutive Jacobsthal numbers, adds indices in reverse order
5. Adds any remaining indices that weren't covered by the Jacobsthal sequence

## **Example: Sorting the list `[9, 3, 7, 1, 8, 4, 6, 2, 5]`**

### Step 1: Pairing the Elements

First, we identify if we have a straggler (an odd element out). Since our list has 9 elements (odd), we set aside the last element as a straggler:
- Straggler: `5`
- Remaining list: `[9, 3, 7, 1, 8, 4, 6, 2]`

Now we group the elements into pairs:
- `(9, 3)`
- `(7, 1)`
- `(8, 4)`
- `(6, 2)`

### Step 2: Compare Each Pair

For each pair, we identify the larger and smaller element:
- `(9, 3)` → `9` is larger, `3` is smaller
- `(7, 1)` → `7` is larger, `1` is smaller
- `(8, 4)` → `8` is larger, `4` is smaller
- `(6, 2)` → `6` is larger, `2` is smaller

This gives us:
- Larger elements (Main Chain candidates): `[9, 7, 8, 6]`
- Smaller elements (Pend Chain): `[3, 1, 4, 2]`

### Step 3: Sort the Main Chain Recursively

We recursively apply the algorithm to the Main Chain `[9, 7, 8, 6]` until it's sorted: `[6, 7, 8, 9]`

### Step 4: Insert Pend Chain Elements

We now need to insert the Pend Chain elements `[3, 1, 4, 2]` into our sorted Main Chain `[6, 7, 8, 9]`.

The algorithm uses binary search (`std::lower_bound`) to efficiently find the correct insertion position for each element, following the optimized insertion order derived from the Jacobsthal sequence.

After this step, we have: `[1, 2, 3, 4, 6, 7, 8, 9]`

### Step 5: Insert the Straggler

Finally, we insert our straggler `5` using binary search:
- Find the correct position for `5` in our sorted array `[1, 2, 3, 4, 6, 7, 8, 9]`
- Insert `5` at the correct position: `[1, 2, 3, 4, 5, 6, 7, 8, 9]`

The fully sorted array is: `[1, 2, 3, 4, 5, 6, 7, 8, 9]`

## Implementation Details

The algorithm is implemented for two different containers:
1. `std::vector`: Provides dynamic array functionality with efficient random access
2. `std::deque`: Double-ended queue with efficient insertion at both ends

The implementation measures the performance of both containers to compare their efficiency for this specific algorithm.

## Performance Considerations

The Ford-Johnson algorithm is known for:
- Minimizing comparisons at the expense of more data movement operations
- Being more efficient for sorting small to medium-sized collections where comparison operations are expensive
- Having a slightly higher overhead for large collections compared to other O(n log n) algorithms like quicksort

In our implementation, we use the STL's `std::lower_bound` function which performs binary search with O(log n) complexity, making the insertion process highly efficient.

## **Visualization Tool**

To better understand the Ford-Johnson algorithm, my visualization tool can help you see how the elements are paired, compared, and inserted in each step. You can interact with the tool to see the algorithm in action!

[PmergeMe Visualization](https://pmergevis.vercel.app/)