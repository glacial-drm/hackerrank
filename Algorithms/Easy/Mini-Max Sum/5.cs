// tags - limits reference math fstring class function
// date - 2026/05/xx
// score - 10.00/10.00

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
    static List<int> indicesMin = new List<int>();
    static List<int> indicesMax = new List<int>();
    
    public static long miniMax(List<int> arr, long bound, bool min_max){
        
        // min_max | true = max, false = min
        long min = Int64.MaxValue, max = Int64.MinValue; 
        
        int index = 0, chosenIndex = 0;
        foreach(int i in arr){
            
            if(min_max)
            {
                if(i > max && i <= bound && !indicesMax.Contains(index))
                {
                    max = i;
                    chosenIndex = index;
                }
            }
            else
            {
                // Console.WriteLine($"{indicesMin}");
                // indicesMin.ForEach(Console.WriteLine);

                if(i < min && i >= bound && !indicesMin.Contains(index))
                {
                    min = i;
                    chosenIndex = index;
                }
            }
            
            index++;
        }
        
        
        
        if(min_max)
        {
            
            if(max == Int32.MinValue)
            {
                return -1;
            }
            
            indicesMax.Add(chosenIndex);
            return max;
        }
        else
        {
            
            if(min == Int32.MaxValue)
            {
                return -1;
            }
            
            // Console.WriteLine($"{chosenIndex}");
            // Console.WriteLine($"{min}");
            
            
            indicesMin.Add(chosenIndex);
            return min;
        }
    }

    public static void miniMaxSum(List<int> arr)
    {
       long minBound = Int64.MinValue, maxBound = Int64.MaxValue;
       long minSum = 0, maxSum = 0;
       long max, min;
       
       for(int i = 0; i < 4; i++)
       {
            // get max each iteration 
                // with a bounded max
            
            // need to account for duplicates
                // use position (keep track of the elements searched, meaning another search arr.In())
                    
            max = miniMax(arr, maxBound, true);
            
            if(max > 0) // return -1 on fail
            {
                maxBound = max;
                maxSum += maxBound;
            }
            
            
            min = miniMax(arr, minBound, false);
            
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
