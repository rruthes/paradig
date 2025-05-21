## Lista 9 - Exercício 1
````scala
object CalculoEsfera {
  def calcularVolume(raio: Double, pi: Double = 3): Double = {
    (4.0 / 3.0) * pi * raio * raio * raio
  }
  
  def calcularArea(raio: Double, pi: Double = 3): Double = {
    4 * pi * raio * raio
  }
  
  def main(args: Array[String]): Unit = {
    val raio = 6.0
    val pi = 3
    
    val volume = calcularVolume(raio, pi)
    val area = calcularArea(raio, pi)
    
    println(s"volume da esfera com raio ${raio}cm: ${volume} cm³")
    println(s"area da superfície da esfera com raio ${raio}cm: ${area} cm²")
  }
}
````

## Lista 9 - Exercício 2
````scala
object ConversorTemperatura {
  def celsiusParaFahrenheit(celsius: Double): Double = {
    (celsius * 9/5) + 32
  }
  
  def main(args: Array[String]): Unit = {
    val temperaturaCelsius = 30.0
    val temperaturaFahrenheit = celsiusParaFahrenheit(temperaturaCelsius)
    
    println(s"${temperaturaCelsius}°C equivalem a ${temperaturaFahrenheit}°F")
  }
}
````
## Lista 10 - Exercício 1
````scala
object SilhuetaEdificios {
  def calcularSilhueta(edificios: List[(Int, Int, Int)]): List[Int] = {
    val pontos = edificios.flatMap { case (esq, alt, dir) => 
      List((esq, alt, "inicio"), (dir, alt, "fim"))
    }
    val pontosOrdenados = pontos.sortBy { case (x, alt, tipo) => 
      (x, if (tipo == "inicio") -alt else alt)
    }
    
    import scala.collection.mutable
    val heapMax = mutable.PriorityQueue.empty[Int]
    heapMax.enqueue(0)  // Altura do chão
    
    val silhueta = mutable.ListBuffer.empty[Int]
    var alturaAnterior = 0
    
    for ((x, alt, tipo) <- pontosOrdenados) {
      tipo match {
        case "inicio" => 
          heapMax.enqueue(alt)
        case "fim" => 
          heapMax.dequeueFirst(_ == alt)
      }
      
      val alturaAtual = heapMax.head
      if (alturaAtual != alturaAnterior) {
        silhueta += x
        silhueta += alturaAtual
        alturaAnterior = alturaAtual
      }
    }
    
    silhueta.toList
  }
  
  def main(args: Array[String]): Unit = {
    val edificios = List((1, 11, 5), (2, 6, 7), (3, 13, 9), (12, 7, 16), (14, 3, 25), (19, 18, 22), (23, 13, 29), (24, 4, 28))
    val resultado = calcularSilhueta(edificios)
    
    println("Silhueta dos edifícios:")
    println(resultado.mkString(", "))
  }
}
````
## Lista 10 - Exercício 2
Capítulo 1: Introdução
CUDA: Arquitetura da NVIDIA para computação paralela em GPUs.

Objetivo: Acelerar aplicações (ML, simulações, processamento de imagens) usando paralelismo massivo.

Capítulo 2: Modelo de Programação
Kernels:

Funções executadas em paralelo (__global__).

Chamadas com <<<blocks, threads>>>.

Hierarquia de Threads:

Thread → Block → Grid.

Warps: Grupos de 32 threads que executam a mesma instrução.

Memória:

Global (lenta), compartilhada (rápida por bloco), constante (read-only).

Hardware:

SMs (Streaming Multiprocessors): Unidades de execução com múltiplos núcleos CUDA.

Foco: Paralelismo eficiente usando GPU, com controle de threads e memória.
## Lista 11 - Exercício 1
````haskell
volumeEsfera :: Double -> Double -> Double
volumeEsfera raio pi = (4.0 / 3.0) * pi * raio ^ 3

areaEsfera :: Double -> Double -> Double
areaEsfera raio pi = 4 * pi * raio ^ 2

main :: IO ()
main = do
    let raio = 6.0
        pi = 3
        volume = volumeEsfera raio pi
        area = areaEsfera raio pi
    
    putStrLn $ "Volume da esfera com raio " ++ show raio ++ " cm: " ++ show volume ++ " cm³"
    putStrLn $ "Área da superfície da esfera com raio " ++ show raio ++ " cm: " ++ show area ++ " cm²"
````

## Lista 11 - Exercício 2
````haskell
celsiusParaFahrenheit :: Double -> Double
celsiusParaFahrenheit celsius = (celsius * 9/5) + 32
main :: IO ()
main = do
    let celsius = 30.0
        fahrenheit = celsiusParaFahrenheit celsius
    
    putStrLn $ show celsius ++ "°C equivalem a " ++ show fahrenheit ++ "°F"
````