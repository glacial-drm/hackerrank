// date - 2026/10/04
// tags - math input 
// score - 10.00/10.00

import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            
            int val = a + b;
            int pow = b;
            for(int j = 0; j < n; j++){
                System.out.printf("%d ", val);
                pow = pow*2;
                val += pow;
            }
            System.out.println("");
        }
        in.close();
    }
}
