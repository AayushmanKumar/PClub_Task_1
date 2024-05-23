<h1 align="center">Aadit Diffs Aalekh</h1>
<p align="center">
time limit per test: 2 seconds <br>
memory limit per test: 256 megabytes <br>
input: standard input <br>
output: standard output
</p>

Aadit and Aalekh were getting bored in the summer and they decided to play a game with arrays as their summer project !

They are given an array $A$ consisting of $n$ integers. Each player would play alternatively and would keep **one or more** elements of the array $A$ from any one of its ends with them.

**They cannot skip their turn and must select atleast one integer**

The game ends when the array $A$ is empty and all the elements have been taken by Aadit and Aalekh.

The score of a player is the sum of all the elements that they have taken from the array $A$.

Aadit convinces Aalekh that he would take the first chance unbeknownst to Aalekh that whoever starts the game can never lose !
It is clear that Aadit wants to maximise the difference while Aalekh wants to minimise it.

**NOTE: The elements of the array $A$ are integers and hence can be positive, zero and negative!**

After the end of a game they ask you to keep track of the **difference of scores with which Aadit wins**.
Help them by printing out the difference of scores for each test case if both the players play **optimally**.

## Input
The first line of the input contains $t  (1 ≤ t ≤ 100)$ -- the number of test cases.

The first line of each test case contains an integer $n  (1 ≤ n ≤ 100)$ — the number of elements in the array $A$.

The second line of each test case contains n integers of the array $A$.

## Output
For each test case, output one integer — the maximum difference of score Aadit can achieve !

## Example
### Input
$2$ <br>
$4$ <br>
$4$ $-8$ $-16$ $10$ <br>
$4$ <br>
$1$ $2$ $3$ $4$<br>
### Output
$2$ <br>
$10$



