public class Solution
{
    public bool CanConstruct(string ransomNote, string magazine)
    {
        bool found = false;
        for (int i = 0; i < ransomNote.Length; i++)
        {
            for (int j = 0; j < magazine.Length && found == false; j++)
            {
                if (ransomNote[i] == magazine[j])
                {
                    found = true;
                    magazine = magazine.Remove(j, 1);
                }
            }
            if (found == false)
            {
                return false;
            }
            else
            {
                found = false;
            }
        }
        return true;
    }
}