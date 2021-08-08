/*
Nearest Exit from Entrance in Maze
Difficulty:Medium
You are given an m x n matrix maze (0-indexed) with empty cells (represented as '.') and walls (represented as '+'). You are also given the entrance of the maze, where entrance = [entrancerow, entrancecol] denotes the row and column of the cell you are initially standing at.

In one step, you can move one cell up, down, left, or right. You cannot step into a cell with a wall, and you cannot step outside the maze. Your goal is to find the nearest exit from the entrance. An exit is defined as an empty cell that is at the border of the maze. The entrance does not count as an exit.

Return the number of steps in the shortest path from the entrance to the nearest exit, or -1 if no such path exists.

 

Example 1:


Input: maze = [["+","+",".","+"],[".",".",".","+"],["+","+","+","."]], entrance = [1,2]
Output: 1
Explanation: There are 3 exits in this maze at [1,0], [0,2], and [2,3].
Initially, you are at the entrance cell [1,2].
- You can reach [1,0] by moving 2 steps left.
- You can reach [0,2] by moving 1 step up.
It is impossible to reach [2,3] from the entrance.
Thus, the nearest exit is [0,2], which is 1 step away.
Example 2:


Input: maze = [["+","+","+"],[".",".","."],["+","+","+"]], entrance = [1,0]
Output: 2
Explanation: There is 1 exit in this maze at [1,2].
[1,0] does not count as an exit since it is the entrance cell.
Initially, you are at the entrance cell [1,0].
- You can reach [1,2] by moving 2 steps right.
Thus, the nearest exit is [1,2], which is 2 steps away.
Example 3:


Input: maze = [[".","+"]], entrance = [0,0]
Output: -1
Explanation: There are no exits in this maze.
 */

int nearestExit(char **maze, int mazeSize, int *mazeColSize, int *entrance, int entranceSize)
{

    int i, j, u = 0, d = 0, l = 0, r = 0;
    int a[4];

    //  if(entrance[0] !=0 && entrance[1]!=0 ){
    i = entrance[0];
    j = entrance[1];

    if (maze[i - 1][j] == '.')
    {
        while (maze[i - 1] != 0 && maze[i - 1][j] == '.')
        {
            a[0]++;
            i--;
        }
    }
    else
    {
        a[0] = -1;
    }

    i = entrance[0];
    j = entrance[1];

    if (maze[i + 1][j] == '.')
    {
        while (maze[i + 1] != mazeSize && maze[i + 1][j] == '.')
        {
            a[1]++;
            i++;
        }
    }
    else
    {
        a[1] = -1;
    }

    i = entrance[0];
    j = entrance[1];

    if (maze[i][j - 1] == '.')
    {
        while (maze[j - 1] != 0 && maze[i][j - 1] == '.')
        {
            a[2]++;
            j--;
        }
    }
    else
    {
        a[2] = -1;
    }

    i = entrance[0];
    j = entrance[1];

    if (maze[i][j + 1] == '.')
    {
        while (maze[j + 1] != mazeColSize && maze[i][j + 1] == '.')
        {
            a[3]++;
            j++;
        }
    }
    else
    {
        a[3] = -1;
    }

    int min = a[0];
    for (i = 0; i < 4; i++)
    {
        if (a[i] < min)
            min = a[i];
    }

    return min;
}