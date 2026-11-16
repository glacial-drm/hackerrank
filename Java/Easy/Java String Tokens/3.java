// tags - regex string input
// date - 2026/10/xx
// score - 15.00/15.00

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        scan.useDelimiter("\\Z");
        String s = scan.nextLine().trim();
        // Write your code here.
        scan.close();
        if(1 <= s.length() && s.length() <= 400000){
            String[] sArr = s.split("[\\s,?'!_.@]+");
            int size = sArr.length;
            System.out.println(size);
            for(int i = 0; i < size; i++){
                System.out.println(sArr[i]);            
            }
        }
        else{
            System.out.println(0);
        }
    }
}
