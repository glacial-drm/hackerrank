// tags - vector foreach math
// date - 2026/06/xx
// score - 10.00/10.00

use std::env;
use std::fs::File;
use std::io::{self, BufRead, Write};

/*
 * Complete the 'breakingRecords' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY scores as parameter.
 */

fn breakingRecords(scores: &[i32]) -> Vec<i32> {
    let mut min = scores[0];
    let mut max = scores[0];
    
    let mut scoreVect = vec![0, 0];
    
    for &score in scores{
        if(score < min){
            scoreVect[1] += 1;
            min = score;
        }
        else if(score > max){
            scoreVect[0] += 1;
            max = score;
        }
    }
    
    
    
    scoreVect
}

fn main() {
    let stdin = io::stdin();
    let mut stdin_iterator = stdin.lock().lines();

    let mut fptr = File::create(env::var("OUTPUT_PATH").unwrap()).unwrap();

    let n = stdin_iterator.next().unwrap().unwrap().trim().parse::<i32>().unwrap();

    let scores: Vec<i32> = stdin_iterator.next().unwrap().unwrap()
        .trim_end()
        .split(' ')
        .map(|s| s.to_string().parse::<i32>().unwrap())
        .collect();

    let result = breakingRecords(&scores);

    for i in 0..result.len() {
        write!(&mut fptr, "{}", result[i]).ok();

        if i != result.len() - 1 {
            write!(&mut fptr, " ").ok();
        }
    }

    writeln!(&mut fptr).ok();
}

