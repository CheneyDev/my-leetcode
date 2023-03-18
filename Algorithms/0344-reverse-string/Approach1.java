class Approach1 {
    public void reverseString(char[] s) {
        int arrLen = s.length;
        int i = 0;
        int j = arrLen - 1;
        while (i < j) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;

            i++;
            j--;
        }

    }
}