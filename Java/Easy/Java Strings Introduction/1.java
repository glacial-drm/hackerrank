// tags - string input
// date - 2026/10/xx
// score - 5.00/5.00

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        
        /* Enter your code here. Print output to STDOUT. */
        String lex = A.charAt(0) > B.charAt(0) ? "Yes" : "No";
        
        System.out.printf("%d\n%s\n%s %s\n", 
            A.length()+B.length(), 
            lex,
            A.substring(0, 1).toUpperCase() + A.substring(1),
            B.substring(0, 1).toUpperCase() + B.substring(1));
    }
}
