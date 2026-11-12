# Mapeamento de Problemas ICPC / Maratona SBC (2022 – 2025)

Este documento organiza os **51 problemas** das edições **2022 (Regional)**, **2023 (Regional)**, **2024 (Regional)** e **2025 (Sub-Regional Brasil)** agrupados por tema principal, com tópicos específicos, nível sugerido e caixa de seleção para acompanhamento.

---

## 📊 Resumo Quantitativo por Tema

| Tema Principal | Qtd. de Problemas | Iniciante | Intermediário | Avançado |
| :--- | :---: | :---: | :---: | :---: |
| **1. Ad-hoc e Simulação** | 6 | 4 | 2 | 0 |
| **2. Grafos e Caminhos Mínimos** | 10 | 0 | 6 | 4 |
| **3. Árvores** | 5 | 0 | 2 | 3 |
| **4. Geometria Computacional** | 6 | 1 | 2 | 3 |
| **5. Programação Dinâmica e Gulosos** | 6 | 1 | 5 | 0 |
| **6. Strings e Parsing** | 4 | 1 | 2 | 1 |
| **7. Estruturas de Dados Avançadas** | 4 | 0 | 1 | 3 |
| **8. Matemática, Combinatória e Álgebra** | 10 | 1 | 5 | 4 |
| **Total Geral** | **51** | **8** | **25** | **18** |

---

## 1. Ad-hoc e Simulação

| Status | Edição | Prob. | Nome do Problema | Tópicos Específicos | Dificuldade |
| :---: | :--- | :---: | :--- | :--- | :--- |
| [ ] | 2022 Regional | **C** | City Folding | Matemática, recursão, simulação reversa de dobras em potências de 2 e bits | Intermediário |
| [ ] | 2022 Regional | **D** | Daily Trips | Simulação básica, controle de estados e inventário simples | Iniciante |
| [ ] | 2024 Regional | **A** | Append and Panic! | Strings, identificação e separação de sufixo ordenado sem duplicatas | Iniciante |
| [ ] | 2025 Sub-Regional | **A** | Alimentação saudável | Matemática básica, máximos de preferências por turma e limitantes inferiores | Iniciante |
| [ ] | 2025 Sub-Regional | **C** | Collatz polinomial | Simulação, manipulação de bits e operações com polinômios em $\mathbb{F}_2$ (XOR/shifts) | Intermediário |
| [ ] | 2025 Sub-Regional | **J** | João João | Vetor de contagem e identificação de elementos ausentes em conjunto de tamanho 4 | Iniciante |

---

## 2. Grafos e Caminhos Mínimos

| Status | Edição | Prob. | Nome do Problema | Tópicos Específicos | Dificuldade |
| :---: | :--- | :---: | :--- | :--- | :--- |
| [ ] | 2022 Regional | **A** | Asking for Money | Fecho transitivo, componentes fortemente conexos (SCC) e buscas em grafos direcionados | Intermediário |
| [ ] | 2022 Regional | **H** | Horse Race | Ordenação topológica (Topological Sort) e restrições de ordenação parcial via DAG | Intermediário |
| [ ] | 2022 Regional | **I** | Italian Calzone & Pasta Corner | Busca em grade, guloso, Priority Queue e expansão com restrição de ordem | Intermediário |
| [ ] | 2022 Regional | **K** | Kind Baker | Grafos em grade e design construtivo de subgrafos conexos para combinações binárias | Intermediário |
| [ ] | 2022 Regional | **M** | Maze in Bolt | Busca em grade cilíndrica (BFS/DFS), bitmask para colisões e rotação de anéis | Intermediário |
| [ ] | 2023 Regional | **M** | Meeting Point | Caminhos mínimos, Dijkstra, árvore de caminhos mínimos (SPT) e pontes em DAGs | Intermediário |
| [ ] | 2024 Regional | **B** | Biketopia's Cyclic Track | 2-Conectividade, componentes biconexos (BCC) e ciclos fundamentais | Avançado |
| [ ] | 2024 Regional | **D** | Diverse T-Shirts | Grafos bipartidos, emparelhamento máximo, Teorema de König e conjunto independente | Avançado |
| [ ] | 2024 Regional | **H** | Heraclosures | DAG, álgebra linear, propagação de tempos com atualizações e soma $\pmod{10^9+7}$ | Avançado |
| [ ] | 2025 Sub-Regional | **D** | Dominós | Ciclo e caminho euleriano, bitmask e subgrafos de dominó | Avançado |

---

## 3. Árvores

| Status | Edição | Prob. | Nome do Problema | Tópicos Específicos | Dificuldade |
| :---: | :--- | :---: | :--- | :--- | :--- |
| [ ] | 2022 Regional | **F** | Favorite Tree | Isomorfismo de subárvores e hashing de árvores (Tree Isomorphism) | Intermediário |
| [ ] | 2023 Regional | **E** | Elevated Profits | Programação dinâmica em árvores, Centroid Decomposition e soma ponderada | Avançado |
| [ ] | 2023 Regional | **J** | Journey of the Robber | Caminhos mínimos em árvores, Centroid Decomposition ou Binary Lifting | Avançado |
| [ ] | 2024 Regional | **G** | Grand Glory Race | Estruturas em árvores (HLD / Centroid / LCA) e Diagrama de Voronoi em árvores | Avançado |
| [ ] | 2025 Sub-Regional | **E** | Expansão rodoviária | Reconstrução de árvore a partir do grafo de distâncias $\le 2$ (quadrado de árvore) | Intermediário |

---

## 4. Geometria Computacional

| Status | Edição | Prob. | Nome do Problema | Tópicos Específicos | Dificuldade |
| :---: | :--- | :---: | :--- | :--- | :--- |
| [ ] | 2022 Regional | **B** | Board Game | Dualidade ponto-linha e envoltória convexa (Convex Hull) dinâmica / varredura | Avançado |
| [ ] | 2022 Regional | **G** | Gravitational Wave Detector | Soma de Minkowski, polígonos convexos e teste de pertinência de ponto | Avançado |
| [ ] | 2023 Regional | **G** | GPS on a Flat Earth | Rotação de coordenadas (Distância de Manhattan para Chebyshev) e interseção | Intermediário |
| [ ] | 2023 Regional | **H** | Health in Hazard | Busca binária, interseção de semiplanos (Half-plane Intersection) e distância à origem | Avançado |
| [ ] | 2024 Regional | **J** | Jigsaw of Shadows | Trigonometria básica, linha de varredura (Sweep Line) e união de intervalos 1D | Iniciante |
| [ ] | 2025 Sub-Regional | **I** | Investigação Cósmica | Sistemas de inequações, busca binária e ajuste de raios em trajetórias ortogonais | Intermediário |

---

## 5. Programação Dinâmica e Algoritmos Gulosos

| Status | Edição | Prob. | Nome do Problema | Tópicos Específicos | Dificuldade |
| :---: | :--- | :---: | :--- | :--- | :--- |
| [ ] | 2022 Regional | **E** | Empty Squares | Programação dinâmica, Problema da Mochila (Knapsack) e partição de segmentos | Intermediário |
| [ ] | 2023 Regional | **K** | Keen on Order | Algoritmos gulosos, subsequências e cobertura de blocos completos de permutações | Intermediário |
| [ ] | 2024 Regional | **E** | Evereth Expedition | Guloso, construção e reconstrução de sequência unimodal (subida e descida) | Intermediário |
| [ ] | 2024 Regional | **F** | Finding Privacy | Construção, guloso e posicionamento com espaçamento mínimo e maximalidade | Intermediário |
| [ ] | 2024 Regional | **K** | Kool Strings | Guloso, programação dinâmica e modificação mínima em bits para evitar repetições | Iniciante |
| [ ] | 2025 Sub-Regional | **M** | Muralhas reforçadas | Busca binária na resposta, guloso e verificação em subintervalo deslizante | Intermediário |

---

## 6. Strings e Parsing

| Status | Edição | Prob. | Nome do Problema | Tópicos Específicos | Dificuldade |
| :---: | :--- | :---: | :--- | :--- | :--- |
| [ ] | 2022 Regional | **L** | Lazy Printing | Algoritmos de prefixo (KMP / Z-Function), periodicidade de substrings e PD/guloso | Avançado |
| [ ] | 2023 Regional | **D** | Deciphering WordWhiz | Simulação, força bruta e filtragem de dicionário contra padrões estilo Wordle | Iniciante |
| [ ] | 2023 Regional | **L** | Latam++ | Estruturas de dados, pilha, parsing de expressões e balanceamento de parênteses | Intermediário |
| [ ] | 2025 Sub-Regional | **L** | LLMs | Busca de N-gramas, produto escalar de vetores 2D e simulação com desempate | Intermediário |

---

## 7. Estruturas de Dados Avançadas

| Status | Edição | Prob. | Nome do Problema | Tópicos Específicos | Dificuldade |
| :---: | :--- | :---: | :--- | :--- | :--- |
| [ ] | 2022 Regional | **J** | Joining a Marathon | Geometria analítica, funções afins e consultas com Segment Tree / Fenwick Tree | Avançado |
| [ ] | 2023 Regional | **A** | Analyzing Contracts | Convex Hull Trick (CHT) dinâmico / Li Chao Tree para maximização linear | Avançado |
| [ ] | 2023 Regional | **C** | Candy Rush | Hashing aleatório (Random Hashing), prefixos e contagem de frequências iguais | Intermediário |
| [ ] | 2024 Regional | **C** | Cindy's Christmas Challenge | Programação dinâmica, Segment Tree e distância de edição restrita em janelas | Avançado |

---

## 8. Matemática, Combinatória, Álgebra e Teoria dos Jogos

| Status | Edição | Prob. | Nome do Problema | Tópicos Específicos | Dificuldade |
| :---: | :--- | :---: | :--- | :--- | :--- |
| [ ] | 2023 Regional | **B** | Blackboard Game | Teoria dos jogos, invariantes, estratégia de emparelhamento e paridades | Intermediário |
| [ ] | 2023 Regional | **F** | Forward and Backward | Teoria dos números, conversão de bases numéricas e palíndromos até $\mathcal{O}(\sqrt{N})$ | Iniciante |
| [ ] | 2023 Regional | **I** | Inversions | Combinatória, contagem de inversões e aritmética modular $\pmod{10^9+7}$ | Intermediário |
| [ ] | 2024 Regional | **I** | Inversion Insight | Combinatória, permutações e divisão e conquista para a $K$-ésima permutação | Avançado |
| [ ] | 2024 Regional | **L** | Latin Squares | Álgebra, teoria dos grafos e composição de permutações de linhas/colunas | Intermediário |
| [ ] | 2025 Sub-Regional | **B** | Baralho Alho | Permutações, teoria dos números, ciclos e Teorema Chinês dos Restos (CRT) | Avançado |
| [ ] | 2025 Sub-Regional | **F** | Frangolino ali na mesa | Probabilidade e estatística, programação dinâmica, valor esperado e inverso modular | Intermediário |
| [ ] | 2025 Sub-Regional | **G** | Gerador universal | Álgebra linear, Eliminação Gaussiana em $GF(2)$ e convolução XOR | Avançado |
| [ ] | 2025 Sub-Regional | **H** | Habilidades especiais | Transformada Rápida de Walsh-Hadamard (FWHT), inclusão-exclusão e bitmask | Avançado |
| [ ] | 2025 Sub-Regional | **K** | Knockout, suíço e outros formatos | Combinatória, exponenciação rápida, aritmética modular e fatoração de potências de 2 | Intermediário |