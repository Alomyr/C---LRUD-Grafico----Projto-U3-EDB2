# 📊 Análise de Complexidade – Movimento LRUD (O(N²) vs O(N log N))

https://atcoder.jp/contests/abc291/tasks/abc291_c



Este projeto tem como objetivo comparar o desempenho de **duas abordagens para a detecção de posições repetidas em um movimento bidimensional**, utilizando uma sequência de comandos no formato **LRUD**:

* **L** → Left (esquerda)
* **R** → Right (direita)
* **U** → Up (cima)
* **D** → Down (baixo)

A comparação é feita entre:

* Uma solução **ineficiente O(N²)** utilizando `vector` e verificação por força bruta.
* Uma solução **eficiente O(N log N)** utilizando `set` da STL.

Além disso, os tempos de execução são medidos e plotados em um gráfico para análise visual da diferença de desempenho.

---

## 🧠 Problema

Dado:

* Um número inteiro `N` (1 ≤ N ≤ 2 × 10⁵)
* Uma string `S` de tamanho `N` contendo apenas os caracteres `L`, `R`, `U` e `D`

Partindo da posição inicial `(0, 0)`, a cada movimento o ponto é atualizado.
O objetivo é verificar **se alguma posição foi visitada mais de uma vez**.

* Se repetir → saída `"Yes"`
* Caso contrário → saída `"No"`

---

## ⚙️ Implementações

### ✅ Versão Ineficiente — O(N²)

* Armazena todas as posições em um `vector<pair<int,int>>`
* Compara todos os pares de posições com **dois loops aninhados**
* Ideal apenas para valores pequenos de `N`
* Pode causar **Time Limit Exceeded** no AtCoder

### ✅ Versão Eficiente — O(N log N)

* Armazena as posições em um `set<pair<int,int>>`
* Cada nova posição é verificada em **tempo logarítmico**
* Totalmente **aceita pelo AtCoder**
* Escalável até `2 × 10⁵`

---

## ⏱️ Medição de Tempo

As duas versões foram adaptadas para gerar como saída:

```
N tempo_em_milisegundos
```

Esses dados foram salvos nos arquivos:

* `ineficiente.csv`
* `eficiente.csv`

---

## 📈 Geração do Gráfico (Python)

O gráfico de comparação foi gerado com `matplotlib`, utilizando o script `plot.py`, onde:

* **Eixo X:** Tamanho da entrada (N)
* **Eixo Y:** Tempo de execução (ms)
* Curva azul → O(N²)
* Curva laranja → O(N log N)

O resultado evidencia claramente a superioridade da abordagem eficiente para grandes entradas.

---

## 🛠️ Tecnologias Utilizadas

* **C++**
* STL (`vector`, `set`, `pair`)
* **Python 3**
* `matplotlib` para plotagem
* Linux (execução via terminal)

---

## ✅ Conclusão

Os experimentos demonstram na prática a importância da escolha correta de estruturas de dados.
Enquanto a solução O(N²) cresce rapidamente e é inviável para grandes entradas, a solução O(N log N) mantém desempenho estável e escalável.
___


## Para compilar

#### como os aquivos CSV's e ja estao feito para rodar o grafico basta (dentro da pasta src/Grafico/)

- caso nao tenha a matplotlib:

        sudo apt update
        sudo apt install python3-matplotlib

- se ja tiver a matplotlib:

        python3 plot.py


na pasta C-LRUD_CPP para compilar e rodar o aquivo eficiente usando set:
    
        g++ CLRUDEficiente.cpp -o ef
        ./enf 

na pasta C-LRUD_CPP para compilar e rodar o aquivo ineficiente usando vector:

        g++ CLRUDIneficiente.cpp -o inef
        ./inf

para rodar o grafico:
- na pasta grafico/folderGeradr
        g++ gerador.cpp -O2 -o gerador

        ./gerador 1000    > input_1000.txt
        ./gerador 5000    > input_5000.txt
        ./gerador 10000   > input_10000.txt
        ./gerador 20000   > input_20000.txt
        ./gerador 50000   > input_50000.txt
        ./gerador 100000  > input_100000.txt
        ./gerador 200000  > input_200000.txt


        ./inef < input_1000.txt    >> ineficiente.csv
        ./inef < input_5000.txt    >> ineficiente.csv
        ./inef < input_10000.txt   >> ineficiente.csv
        ./inef < input_20000.txt   >> ineficiente.csv
        ./inef < input_50000.txt   >> ineficiente.csv
        ./inef < input_100000.txt  >> ineficiente.csv
        ./inef < input_200000.txt  >> ineficiente.csv

        ./ef < input_1000.txt    >> eficiente.csv
        ./ef < input_5000.txt    >> eficiente.csv
        ./ef < input_10000.txt   >> eficiente.csv
        ./ef < input_20000.txt   >> eficiente.csv
        ./ef < input_50000.txt   >> eficiente.csv
        ./ef < input_100000.txt  >> eficiente.csv
        ./ef < input_200000.txt  >> eficiente.csv


e por ultimo mande inicialize o plot do gratico estando dentro da pasta src/Grafico/

        python3 plot.py


---

## ✍️ Autor

 **Matheus Vinícius Silva Freire de Castro**


DIM0117 - ESTRUTURAS DE DADOS BÁSICAS II - T01 (2025.2) 
