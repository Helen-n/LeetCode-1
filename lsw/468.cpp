class Solution {
public:
    string validIPAddress(string IP) 
    {
       regex ipv4(R"(^((\d|[1-9]\d|1\d{2}|2[0-4]\d|25[0-5])\.){3}(\d|[1-9]\d|1\d{2}|2[0-4]\d|25[0-5])$)");
        if (regex_match(IP, ipv4)) {
            return "IPv4";
        }
        regex ipv6(R"(^([\da-fA-F]{1,4}:){7}[\da-fA-F]{1,4}$)");
        if (regex_match(IP, ipv6)) {
            return "IPv6";
        }
        return "Neither";
    }
};
