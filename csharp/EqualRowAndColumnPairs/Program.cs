public class Solution
{
    public int EqualPairs(int[][] grid)
    {
        List<List<int>> tempGrid = new List<List<int>>();
        for (int i = 0; i < grid.Length; i++)
        {
            for (int j = 0; j < grid[i].Length; j++)
            {
                if (j >= tempGrid.Count)
                {
                    tempGrid.Add(new List<int>());
                }
                tempGrid[j].Add(grid[i][j]);
            }
        }
        int count = 0;
        foreach (var gridItem in grid)
        {
            foreach (var tempGridItem in tempGrid)
            {
                count = gridItem.SequenceEqual(tempGridItem) ? count + 1 : count;
            }
        }
        return count;
    }
}