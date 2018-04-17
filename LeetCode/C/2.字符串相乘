给定两个以字符串形式表示的非负整数 num1 和 num2，返回 num1 和 num2 的乘积，它们的乘积也表示为字符串形式。

示例 1:

输入: num1 = "2", num2 = "3"
输出: "6"
示例 2:

输入: num1 = "123", num2 = "456"
输出: "56088"
说明：

num1 和 num2 的长度小于110。
num1 和 num2 只包含数字 0-9。
num1 和 num2 均不以零开头，除非是数字 0 本身。
不能使用任何标准库的大数类型（比如 BigInteger）或直接将输入转换为整数来处理。

class Solution {
public:
    string multiply(string num1, string num2) {
       int l = num1.length();
        int r = num2.length();
        vector<int> num(l+r,0);
        for(int i=0;i<l;i++)
        {
            int n1=num1[l-1-i]-'0';
            int tmp=0;
            for(int j=0;j<r;j++)
            {
                int n2=num2[r-1-j]-'0';
                tmp=tmp+num[i+j]+n1*n2;
                num[i+j]=tmp%10;
                tmp/=10;
            }
            num[i+r]=tmp;
        }
        int i=l+r-1;
        while(i>0&&num[i]==0)i--;
        string result="";
        while(i>=0)result+=static_cast<char>('0'+num[i--]);
        return result;
    }
};
