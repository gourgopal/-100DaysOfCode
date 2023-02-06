//Logger Rate Limiter
//https://leetcode.com/problems/logger-rate-limiter/description/
//https://leetcode.com/problems/logger-rate-limiter/submissions/892550522/

public class Logger {
    Dictionary<string, int> records;
    public Logger() {
        records = new Dictionary<string, int>();
    }
    
    public bool ShouldPrintMessage(int timestamp, string message) {
        if (!records.ContainsKey(message)) {
            records.Add(message, timestamp);
            return true;
        }

        int oldTimestamp = records[message];
        if (timestamp - oldTimestamp >= 10) {
            records[message] = timestamp;
            return true;
        }

        return false;
    }
}

/**
 * Your Logger object will be instantiated and called as such:
 * Logger obj = new Logger();
 * bool param_1 = obj.ShouldPrintMessage(timestamp,message);
 */
