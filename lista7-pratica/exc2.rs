use std::io;

fn main() {
    let mut num1 = String::new();
    let mut num2 = String::new();
    io::stdin().read_line(&mut num1).unwrap();
    io::stdin().read_line(&mut num2).unwrap();
    let num1: i32 = num1.trim().parse().unwrap();
    let num2: i32 = num2.trim().parse().unwrap();

    println!("{}", num1 + num2);
}