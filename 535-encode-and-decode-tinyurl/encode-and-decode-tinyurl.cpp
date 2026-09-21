class Solution {
public:
    unordered_map<string,string> mp;
    int id = 1;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string key = to_string(id);
        id++;
        mp[key] = longUrl;
        return "http://tinyurl.com/" + key;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string key = shortUrl.substr(19); //we get 1
        return mp[key]; // 1 contains the original longurl
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));