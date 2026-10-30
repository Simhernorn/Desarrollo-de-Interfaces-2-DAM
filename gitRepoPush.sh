#!/bin/bash

read -p "Mensaje del commit: " mensaje

if [ -z "$mensaje" ]; then
    echo "El mensaje no puede estar vacío."
    exit 1
fi

git add .
git commit -m "$mensaje"
git push -u origin main
