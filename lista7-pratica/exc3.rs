use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let num: i32 = input.trim().parse().unwrap();

    for i in 1..=10 {
        println!("{} x {} = {}", num, i, num * i);
    }
}