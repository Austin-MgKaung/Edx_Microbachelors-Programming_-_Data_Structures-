#include<iostream>
using namespace std;

void reverse(int n, int &rev);
int is_palindrome(int num);
int main() 
{
    cout << is_palindrome(12321)<<endl;
    return 0;
}

void reverse(int n, int &rev)
{
    if (n == 0) {
        return;
    }
 
    rev = rev * 10 + (n % 10);
    reverse(n / 10, rev);
}
 
int is_palindrome(int num)
{
    int rev = 0;
    reverse(num, rev);
    return (num == rev);
}
 