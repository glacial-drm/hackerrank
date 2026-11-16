// tags - math input
// date - 2026/10/06
// score - 20.00/20.00

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;



public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        String n = bufferedReader.readLine();
    
        bufferedReader.close();
        
        BigInteger num = new BigInteger(n);
        System.out.println(num.isProbablePrime(1) ? "prime" : "not prime");
        
    }
}
