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

---

## ✍️ Autor

Desenvolvido por **Matheus Vinícius Silva Freire de Castro**
Projeto acadêmico – Estruturas de Dados
