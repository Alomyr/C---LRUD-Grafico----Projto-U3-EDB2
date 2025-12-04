import matplotlib.pyplot as plt

x1, y1 = [], []
x2, y2 = [], []

with open("ineficiente.csv") as f:
    for linha in f:
        a, b = linha.split()
        x1.append(int(a))
        y1.append(float(b))

with open("eficiente.csv") as f:
    for linha in f:
        a, b = linha.split()
        x2.append(int(a))
        y2.append(float(b))

plt.plot(x1, y1, label="Ineficiente O(N²)")
plt.plot(x2, y2, label="Eficiente O(N log N)")

plt.xlabel("Tamanho da Entrada (N)")
plt.ylabel("Tempo de Execução (ms)")
plt.legend()
plt.grid(True)
plt.show()
