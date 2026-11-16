// tags - input class
// date - 2026/10/xx
// score 12.00/15.00
// error - incorrect

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class Result {

    /*
     * Complete the 'findDay' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts following parameters:
     *  1. INTEGER month
     *  2. INTEGER day
     *  3. INTEGER year
     */

    public static String findDay(int month, int day, int year) {
        Calendar cl = Calendar.getInstance();

        cl.set(year, month-1, day);
        String date = "";
        
        switch(cl.getTime().toString().split(" ")[0]){
            
            case "Mon":
                date = "MONDAY";
                break;
            case "Tue":
                date = "TUESDAY";
                break;
            case "Wed":
                date = "WEDNESDAY";
                break;
            case "Thur":
                date = "THURSDAY";
                break;
            case "Fri":
                date = "FRIDAY";
                break;
            case "Sat":
                date = "SATURDAY";
                break;
            case "Sun":
                date = "SUNDAY";
                break;
        }

        return date;
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String[] firstMultipleInput = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

        int month = Integer.parseInt(firstMultipleInput[0]);

        int day = Integer.parseInt(firstMultipleInput[1]);

        int year = Integer.parseInt(firstMultipleInput[2]);

        String res = Result.findDay(month, day, year);

        bufferedWriter.write(res);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}

