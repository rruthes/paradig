use std::collections::HashMap;

fn main() {
    let texto = "Olá mundo! Olá, programação em Rust.";
    let palavras = texto.split_whitespace();
    let mut contagem = HashMap::new();
    for palavra in palavras {
        let palavra_limpa = palavra.trim_matches(|c: char| !c.is_alphabetic()).to_lowercase();
        if !palavra_limpa.is_empty() {
            *contagem.entry(palavra_limpa).or_insert(0) += 1;
        }
    }

    println!("{:?}", contagem);
}