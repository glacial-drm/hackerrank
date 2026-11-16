// tags - input list
// date - 2026/10/xx
// score - 15.00/15.00

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int listSize = sc.nextInt();
        List<Integer> list = new ArrayList<>();
        
        for(int i = 0; i < listSize; i++){
            list.add(sc.nextInt());
        }
        
        int queryTotal = sc.nextInt();
        sc.nextLine(); // newLine following int
        int index, element;
        for(int i = 0; i < queryTotal; i++){
            
            switch(sc.nextLine()){
                
                case "Insert":
                    index = sc.nextInt();
                    element = sc.nextInt();
                    
                    if(index >= list.size()){
                        index = list.size();
                    }
                    
                    list.add(index, element);
                    break;
                case "Delete":
                    index = sc.nextInt();
                    list.remove(index);
                    break;
                
            }
            if(i != queryTotal - 1){
                sc.nextLine(); //newline following int    
            }
            
        }
        
        for(int i : list){
            System.out.printf("%d ", i);
        }
    }
}

