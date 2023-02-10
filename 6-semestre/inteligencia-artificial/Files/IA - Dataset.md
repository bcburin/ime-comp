
# Dataset

---

### Definição

O par $D=(\tau,\Sigma)$ é um **dataset** se $\tau$ é um conjunto de fatos observados e $\Sigma$ é um conjunto de condições definidas sobre $\tau$.

Cada elemento de $\tau$ é chamado de **transação** e cada elemento de $\Sigma$ é chamado de **item**.

Dada uma transação $r \in \tau$ e um item $i \in \Sigma$, diz-se que **$r$ satisfaz $i$** se e só se $i$ for verdadeiro em $r$.

Escreve-se $r[i]=1$ se $r$ satisfaz $i$ senão $r[i]=0$.

*Pode-se visualizar um dataset como uma tabela em que $\tau$ representa o conjunto das linhas e $\Sigma$ o conjunto dos pares "coluna=valor", onde "coluna" é o rótulo da colunas e "valor" é o valor da célula (linha, coluna).*

---

Tags: #inteligencia-artificial

