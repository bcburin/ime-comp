
# Sincronização por Hardware

- Muitos sistemas proveem suporte de hardware para resolver o problema da seção crítica
- Monoprocessadores – podem desativar interrupções
	- O código corrente executa sem preempção

```
desabilita_interrupções;
seção crítica
habilita_interrupções;
```

As máquinas modernas oferecem instruções de hardware **atômicas** (não interrompíveis) especiais.

#so

