class Solution {
public:
    string ones[20] = {"", " One", " Two", " Three", " Four", " Five", " Six", " Seven", " Eight"," Nine", " Ten", " Eleven", " Twelve", " Thirteen", " Fourteen", " Fifteen", " Sixteen", " Seventeen", " Eighteen", " Nineteen"};

    string tens[10] = {"", " Ten", " Twenty", " Thirty", " Forty", " Fifty", " Sixty", " Seventy", " Eighty", " Ninety"};

    string thousands[4] = {"", " Thousand", " Million", " Billion"};

    string convertWord(int n)
    {
        if (n < 20) return ones[n];
        if (n < 100) return tens[n / 10] + convertWord(n % 10);
        if (n < 1000) return convertWord(n / 100) + " Hundred" + convertWord(n % 100);
        for (int i = 3;i >= 0;--i)
            if (n >= pow(1000, i))
                return convertWord(n / pow(1000, i)) + thousands[i] + convertWord(n % int(pow(1000, i)));
        return "";
    }

    string numberToWords(int num) {
        if (num == 0) return "Zero";
        return convertWord(num).substr(1);
    }
};