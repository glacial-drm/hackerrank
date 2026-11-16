// tags - regex string input
// date - 2026/10/xx
// score - 8.27/15.00

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        // Write your code here.
        scan.close();
        if(1 <= s.length() && s.length() <= 400000){
            String[] sArr = s.split("[ !,?.\\_'@]+");
            int size = sArr.length;
            System.out.println(size);
            for(int i = 0; i < size; i++){
                System.out.println(sArr[i]);            
            }
        }
    }
}
