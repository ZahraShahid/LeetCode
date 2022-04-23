// Encodes and Decodes a URL Based on the TinyURL algorithm
// https://leetcode.com/problems/encode-and-decode-tinyurl/
class Solution
{
    unordered_map<string, string> sURL, lURL;

public:
    string randomString()
    {
        const string ch = "abcdefghijklmnopqrstuvwxyzABSCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
        string str = "";
        for (int i = 0; i < 6; i++)
        {
            str += ch[rand() % 62];
        }
        return "http://tinyurl.com/" + str;
    }

    // Encodes a URL to a shortened URL.
    string encode(string longUrl)
    {
        if (lURL.find(longUrl) != lURL.end())
            return lURL[longUrl];
        string str = randomString();
        while (sURL.find(str) != sURL.end())
            str = randomString();
        sURL[str] = longUrl;
        lURL[longUrl] = str;
        return str;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl)
    {
        return sURL[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));