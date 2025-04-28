use std::io;

fn main() {
    let mut nums = Vec::new();
    for _ in 0..3 {
        let mut input = String::new();
        io::stdin().read_line(&mut input).unwrap();
        nums.push(input.trim().parse::<i32>().unwrap());
    }
    nums.sort();
    for num in nums {
        println!("{}", num);
    }
}