// Encodes and Decodes a URL Based on the TinyURL algorithm
// https://leetcode.com/problems/encode-and-decode-tinyurl/
class Solution
{
    vector<pair<string, string>> v;

public:
    string randomString()
    {
        string str = "AAAAAA";
        str[0] = rand() % 26 + 65;
        str[1] = rand() % 26 + 65;
        str[2] = rand() % 26 + 65;
        str[3] = rand() % 10 + 48;
        str[4] = rand() % 10 + 48;
        str[5] = rand() % 10 + 48;
        return str;
    }
    bool checkString(string s)
    {
        for (auto &x : v)
        {
            if (x.first == s)
                return true;
        }
        return false;
    }
    string addString(string longURL)
    {
        string shortURL = "http://tinyurl.com/" + randomString();
        while (checkString(shortURL))
        {
            shortURL = "http://tinyurl.com/" + randomString();
        }
        v.push_back(make_pair(shortURL, longURL));
        return shortURL;
    }

    // Encodes a URL to a shortened URL.
    string encode(string longUrl)
    {
        string s = addString(longUrl);
        return s;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl)
    {
        for (auto &x : v)
        {
            if (x.first == shortUrl)
                return x.second;
        }
        return "x";
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));