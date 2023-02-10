
# Limpeza

---

### Dados incorretos

Em aplicações práticas, é comum a existência de dados que estejam **incompletos**, **ruidosos** ou **inconsistentes**

- **Incompletos** -> informação ausente para determinados atributos ou dados pouco detalhados
- **Ruidosos** -> dados errados ou que contenham valores considerados divergentes
- **Inconsistentes** -> Contêm algum tipo de discrepância semântica entre si

---

### Envolve

- Verificação da consistência das informações
- Correção de possíveis erros
- Complementação ou eliminação de valores desconhecidos
- Eliminação de valores não pertencentes ao domínio

---

### Objetivo

Corrigir a base de dados, **eliminando consultas desnecessária**, que poderiam ser executadas futuramente pelos algoritmos de minerações de dados.

---

### Métodos

- Exclusão de casos
- Complementação manual de valores
- Complementação com valores globais constantes
- Complementação com medidas estatísticas
- Complementação com métodos de mineração de dados

*Os quatro primeiros são tendenciosos.*

*O último utiliza valores existentes para prever novos valores.*

- *Separar dados em conjunto de treino (dados corretos) e conjunto de complementação (dados incorretos)*
- *Usar conjunto de treino para prever dados incorretos*

---

Tags: #inteligencia-artificial

