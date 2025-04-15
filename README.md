# Monty Hall - Simulador de Escolha de Portas 🎁🚪

Este é um programa simples em C que simula o famoso **problema de Monty Hall**, inspirado em um game show onde o participante escolhe uma entre três portas, uma das quais esconde um prêmio.

Após a escolha inicial, o apresentador revela uma porta vazia e oferece a opção de trocar de porta. O programa então revela se o jogador ganhou ou perdeu.

## 📋 Como funciona

1. O jogador escolhe uma porta: 1, 2 ou 3.
2. O programa sorteia aleatoriamente a porta premiada.
3. O programa revela uma das portas vazias (que não foi escolhida e não é premiada).
4. O jogador decide se quer trocar de porta.
5. O programa informa o resultado: vitória ou derrota, e mostra as escolhas feitas.

## 🤔 Sobre o problema de Monty Hall

O problema de Monty Hall é um paradoxo da probabilidade baseado em um antigo programa de TV. Quando o jogador escolhe uma porta e uma das portas perdedoras é revelada, ele tem a chance de manter a escolha ou trocar.

Matematicamente, a melhor estratégia é **trocar de porta**, pois isso aumenta as chances de vitória de **1/3 para 2/3**. Esse programa simula essa situação, permitindo que você experimente e comprove essa teoria de forma prática.

## 🚀 Como compilar e executar

### Usando `gcc`:

```bash
gcc -o montyhall montyhall.c
./montyhall
