#!/bin/bash

# Jogo de adivinhação

NUMERO=$((RANDOM % 10 + 1))

read -p "Adivinha o número 1-10: " tentativa

if [ $tentativa -eq $NUMERO ]; then

echo "Acertou!"

else

echo "Errou!"
echo "Era: $NUMERO"

fi
