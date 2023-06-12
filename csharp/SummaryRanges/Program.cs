public class Solution
{
    public IList<string> SummaryRanges(int[] nums)
    {
        if (!nums.Any())
        {
            return new List<string>();
        }
        List<string> output = new List<string>();
        List<int> tempNumList = new List<int>();
        int? previousNum = null;
        foreach (var item in nums)
        {
            if (previousNum != null)
            {
                if (previousNum == item - 1)
                {
                    tempNumList.Add(item);
                }
                else
                {
                    if (tempNumList.Count == 1)
                    {
                        output.Add(tempNumList.FirstOrDefault().ToString());
                    }
                    else if (tempNumList.Count > 1)
                    {
                        output.Add(tempNumList.FirstOrDefault().ToString() + "->" + tempNumList.LastOrDefault().ToString());
                    }
                    tempNumList.Clear();
                    tempNumList.Add(item);
                }
            }
            else
            {
                tempNumList.Add(item);
            }
            previousNum = item;
        }
        if (tempNumList.Count == 1)
        {
            output.Add(tempNumList.FirstOrDefault().ToString());
        }
        else if (tempNumList.Count > 1)
        {
            output.Add(tempNumList.FirstOrDefault().ToString() + "->" + tempNumList.LastOrDefault().ToString());
        }
        return output;
    }
}