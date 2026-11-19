// tags - limits reference math fstring function
// date - 2026/05/xx
// score - 01.54/10.00
// error - incorrect

using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Result
{

    /*
     * Complete the 'miniMaxSum' function below.
     *
     * The function accepts INTEGER_ARRAY arr as parameter.
     */

    public static int miniMax(List<int> arr, ref int bound, bool min_max){
        
        // min_max | true = max, false = min
        int min = Int32.MaxValue, max = Int32.MinValue; 
        
        foreach(int i in arr){
            
            if(min_max)
            {
                if(i > max && i < bound)
                {
                    max = i;
                }
            }
            else
            {
                if(i < min && i > bound)
                {
                    min = i;
                }
            }
            
        }
        
        if(min_max)
        {
            
            if(max == Int32.MaxValue)
            {
                return -1;
            }
            
            return max;
        }
        else
        {
            
            if(min == Int32.MinValue)
            {
                return -1;
            }
            
            return min;
        }
    }

    public static void miniMaxSum(List<int> arr)
    {
       int minBound = Int32.MinValue, maxBound = Int32.MaxValue;
       int minSum = 0, maxSum = 0;
       int max, min;
       
       for(int i = 0; i < 4; i++)
       {
            // get max each iteration 
                // with a bounded max
            max = miniMax(arr, ref maxBound, true);
            
            if(max > 0) // return -1 on fail
            {
                maxBound = max;
                maxSum += maxBound;
            }

            min = miniMax(arr, ref minBound, false);
            
            if(min > 0) // return -1 on fail
            {
                minBound = min;
                minSum += minBound;
            }


       }
       
       Console.WriteLine($"{minSum} {maxSum}");
        
    }  

}

class Solution
{
    public static void Main(string[] args)
    {

        List<int> arr = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arrTemp => Convert.ToInt32(arrTemp)).ToList();

        Result.miniMaxSum(arr);
    }
}
