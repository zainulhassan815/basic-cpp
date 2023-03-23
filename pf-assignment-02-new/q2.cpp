/*

*/

int countLetterInWordSearch(char letter, char **grid, int numRows, int numCols)
{
    int count = 0;

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            if (grid[i][j] == letter)
            {
                count++;
            }
        }
    }

    return count;
}

#include <iostream>

using namespace std;

int main()
{
    char data[] = [[]];

    return 0;
}