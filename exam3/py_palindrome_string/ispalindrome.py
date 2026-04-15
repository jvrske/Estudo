def isPalindrome(s):
    new_s = ''.join(c.lower() for c in s if c.isalnum())
    return new_s == new_s[::-1]


if __name__ == "__main__":
    print(isPalindrome('madam'))
    print(isPalindrome('A man, a plan, a canal: Panama'))
    print(isPalindrome('race a car'))
    print(isPalindrome(''))
    print(isPalindrome('12321'))
    print(isPalindrome('Able was I ere I saw Elba'))
