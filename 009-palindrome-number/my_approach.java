public class my_approach {

// --------------
// Wrong Answer
// --------------

    public boolean isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else if (x == 0) {
            return true;
        } else if (x % 10 == 0) {
            return false;
        } else {
            int y, z;
            int divider = 10;
            int final_value = 0;
            int position = 1;
            y = x;
            while (y != 0) {
                z = y % divider;
                y = y / divider;
                final_value = final_value + z * position;
                position *= 10;
            }
            if (final_value == x) {
                return true;
            }
            return false;
        }
    }
}
