
import java.util.Arrays;

public class Solution {

    public int xorAllNums(int[] inputOne, int[] inputTwo) {
        if (inputOne.length % 2 == 0 && inputTwo.length % 2 == 0) {
            return 0;
        }
        if (inputOne.length % 2 == 1 && inputTwo.length % 2 == 0) {
            return Arrays.stream(inputTwo).reduce(0, (subtotalXOR, n) -> subtotalXOR ^ n);
        }
        if (inputOne.length % 2 == 0 && inputTwo.length % 2 == 1) {
            return Arrays.stream(inputOne).reduce(0, (subtotalXOR, n) -> subtotalXOR ^ n);
        }

        return Arrays.stream(inputOne).reduce(0, (subtotalXOR, n) -> subtotalXOR ^ n)
                ^ Arrays.stream(inputTwo).reduce(0, (subtotalXOR, n) -> subtotalXOR ^ n);
    }
}
