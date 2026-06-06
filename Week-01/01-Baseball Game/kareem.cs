public class Solution {
    public int CalPoints(string[] operations) {
        List<int> records = new List<int>();
            foreach( var op in operations)
            {
                if (op == "C" && records.Count != 0)
                {
                    records.RemoveAt(records.Count - 1);
                }
                else if(op == "D")
                {
                    var lastRecord = records[records.Count - 1];
                    records.Add((lastRecord * 2));
                }
                else if( op == "+")
                {
                    var lastRecord = records[records.Count - 1];
                    var secondlastRecord = records[records.Count - 2];
                    records.Add((lastRecord + secondlastRecord));
                }
                else
                {
                    records.Add(int.Parse(op));
                }
            }
        var sum = records.Sum();
        return sum;
    }
}
