public class my_frist_try {

    // --------------
    // Wrong Answer
    // int Max overflow
    // --------------

    public boolean isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else if (x == 0) {
            return true;
        } else if (x % 10 == 0) {
            return false;
        } else {
            int final_value = 0;
            int dividedNumber = x;
            int lastDigit = 0;
            while (dividedNumber != 0) {
                lastDigit = dividedNumber % 10;
                dividedNumber = dividedNumber / 10;
                final_value = final_value * 10 + lastDigit;
            }
            if (final_value == x) {
                return true;
            }
            return false;
        }
    }
}
