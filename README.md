# Inversion-Count-and-Puzzles
## Understanding of concept and implementation of Sorting Algos.
Coding Problems  <br />
Inversion Count for an array indicates – how far (or close) the array is from being sorted. If the array is already sorted, then the inversion count is 0, but if the array is sorted in the reverse order, the inversion count is the maximum.  <br />
Formally speaking, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j  <br />
Example:  <br />
Input: arr[] = {8, 4, 2, 1}  <br />
Output: 6  <br />
Explanation: Given array has six inversions: <br />
(8, 4), (4, 2), (8, 2), (8, 1), (4, 1), (2, 1).  <br />

Input: arr[] = {3, 1, 2}  <br />
Output: 2  <br />
Explanation: Given array has two inversions:  <br />
(3, 1), (3, 2)  <br />


Puzzles  <br />
Guess your hat color  <br />
Being one of the 10 prisoners, you have to make a strategy to save maximum lives from a dangerous exercise going to happen the next day. About the exercise, Jailer is going to show you a box full of an infinite number of black and white hats. All the prisoners are standing in a queue with random hats put on their heads. They do not know the color of hat they are wearing but they can see the color of hats of all the persons standing before them (if there are any). Example: the last person can see the color of 9 hats in front of him while the first person can see none. Now, Jailer is going to start from the last person and ask him to guess the color of hat he is wearing. If the answer is correct then he survives, else he is shot dead. Jailer is going to do this to the 9th prisoner, then to the 8th and so on till person 1. Make a strategy to save the maximum number of prisoners. Please note all the prisoners can listen to others answers but they are supposed to say either black or white on their turn. 
Variant of 10 prisoners puzzle  <br />
For the same 10 prisoners and 2 types of hat problem. Solve it considering there are 3 types of hats given, say black, while and red.  <br /> 
Generic solution to prisoners puzzle  <br />
Solve the same puzzle when there are K types of hats given, red, white, black, orange….K  and n number of prisoners.  <br />

Counterfeit coin  <br />
There are 12 identical coins given. All of them are of same weight except one. You can call it a counterfeit coin. But you don't know whether it is lighter or heavier than others. You are given a weighing balance which you can use only 3 times max. Can you find which is the counterfeit coin and tell whether it is lighter or heavier than others. 
