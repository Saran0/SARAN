bool isPalindrome(int x){
    if (x < 0) { 
        return false;
    }
    
    long a = x;
    long rev = 0;
    
    while (x > 0) {
        long g = x % 10;
        rev = rev * 10 + g;
        x /= 10;
    }
    
    return a == rev;
    
}
