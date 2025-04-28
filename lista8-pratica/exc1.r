# Dados
idade <- c(71, 64, 43, 67, 56, 73, 68, 56, 76, 65, 45, 58, 45, 53, 49, 78, 73, 68)
massa <- c(82, 91, 100, 68, 87, 73, 78, 80, 65, 84, 116, 76, 97, 100, 105, 77, 73, 78)

plot(idade, massa, xlab = "idade", ylab = "massa muscular", main = "diagrama de dispersão")

correlacao <- cor(idade, massa)
print(paste("coeficiente de correlação:", correlacao))

modelo <- lm(massa ~ idade)
print(summary(modelo))

nova_idade <- data.frame(idade = 50)
massa_estimada <- predict(modelo, nova_idade)
print(paste("massa muscular estimada aos 50 anos:", massa_estimada))