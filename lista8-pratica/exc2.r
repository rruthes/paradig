# 1. Criar data frame com os dados dos caranguejos
praias <- c("Joaquina", "Campeche", "Armação", "Praia Mole")
caranguejos <- c(42, 34, 59, 18)
df <- data.frame(praia = praias, caranguejos = caranguejos)

# 2. Praias com menos de 30 caranguejos
print("Praias com menos de 30 caranguejos:")
print(df[df$caranguejos < 30, ])

# 3. Adicionar coluna de região
df$regiao <- ifelse(df$praia %in% c("Joaquina", "Praia Mole"), "leste", "sul")

# 4. Praias do leste com menos de 20 caranguejos
print("Praias do leste com menos de 20 caranguejos:")
print(df[df$regiao == "leste" & df$caranguejos < 20, ])

# 5. Praias do sul com mais de 40 caranguejos
print("Praias do sul com mais de 40 caranguejos:")
print(df[df$regiao == "sul" & df$caranguejos > 40, ])

# 6. Região com praias de mais de 50 caranguejos
print("Região com praias de mais de 50 caranguejos:")
print(unique(df[df$caranguejos > 50, "regiao"]))