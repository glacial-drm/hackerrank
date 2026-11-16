// tags - string input
// date - 2026/10/06
// score - 10.00

import java.util.Scanner;

public class Solution {
    
    public static String sort(String s){
        
        char[] chars = s.toLowerCase().toCharArray();
        java.util.Arrays.sort(chars);
        
        return new String(chars);
    }
    
    static boolean isAnagram(String a, String b) {
        // Complete the function
            // sort both strings, compare equality
            
        if(sort(a).equals(sort(b))){
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
