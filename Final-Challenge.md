# Problem Statement

Implement a simple maze solving algorithm. Consider the initial condition of the maze as a N*N array of 0s. The corners of the array are fixed and only the start and end points of the maze lie on the edges(not including vertices) of the outer layer of the array. The input shall be the start point and end point and the output will be the path traced from start point to end point indicated by X marks on the maze grid. Remember the path traced must have minimum distance between the start and end points. Also the path tracing takes place only in the inner layers(i.e no X mark must be found in the outer layers except at the start and end points) and can only go in up,down,left,right directions(i.e no diagonal paths)

# Input Format
The first line of the input will be a single integer N, the size of the square array, N
(1 ≤ T ≤ 100). Followed by the size, each line of input contains 2 integers separated by a
single space X Y (1 ≤ X,Y ≤ 100). X and Y are the Coordinates of the Start and End point.

# Output Format
The initial array with the path between the start and end points

## Example 
### Input:
              4
              0 1
              3 2

### Output
              0 X 0 0
              0 X 0 0
              0 X X 0
              0 0 X 0
