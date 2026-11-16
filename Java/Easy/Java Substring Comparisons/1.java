// tags - string
// date - 2026/10/06
// score - 10.00/10.00

import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = new String(new char[k]).replace("\0", "z"); // some number of ZZZs (case sensitive, equivalent to STRING_MAX effectively)
        String largest = new String(new char[k]).replace("\0", "AAA"); // some number of aaas (case sensitive, STRING_MIN)
        
        
        // dynamic programming? --------------------------------------------
            // store previously encountered sequences
        // get all substrings
            // compare char values of all strings len k
                // keep running track of the max and min
                
        // holy bruh this is java...
        int i, j;
        String substring;
        for(i = 0, j = i + k; i < s.length() - (k-1); i++, j++){
            
            substring = s.substring(i, j);
            // System.out.println(substring);
            if(substring.compareTo(smallest) < 0){
                smallest = substring;
            }
            if(substring.compareTo(largest) > 0){
                largest = substring;
            }
            
        }
        
        return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}
