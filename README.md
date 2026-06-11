# Arduino-Simulator-Flight
# Um ESP32 Web Flight Simulator ✈️

Um experimento de interação humano-computador usando **ESP32**, **MPU6050** e **Web Serial API**. O projeto permite controlar um objeto na tela do navegador através da inclinação física do sensor.

## 🛠️ Tecnologias
- **Hardware:** ESP32, Sensor MPU6050.
- **Linguagem:** C++ (Arduino Framework).
- **Frontend:** HTML5, CSS3, JavaScript (Web Serial API).

## 🚀 Como usar
1. Carregue o código C++ no seu ESP32 usando a Arduino IDE.
2. Certifique-se de que o sensor MPU6050 está conectado nos pinos I2C (G21/G22).
3. Abra o arquivo `index.html` em um navegador baseado em Chromium (Chrome, Edge, Opera).
4. Clique em **"Conectar ESP32"**, selecione a porta serial do dispositivo e clique em Conectar.
5. Incline o sensor para movimentar o avião na tela.

## ⚠️ Requisitos
- O navegador deve suportar a **Web Serial API** (Verifique em `caniuse.com/serial`).
- O ESP32 deve estar conectado via cabo USB de dados.

### 📦 Lista de Peças

 **1x ESP32** (Qualquer modelo com USB-Serial integrado).
 **1x Sensor MPU6050** (Acelerômetro).
 **4x Jumpers** (Fêmea-Fêmea).
 **1x Cabo USB** de boa qualidade.
   
---
Este projeto é uma base excelente para um portfólio, pois te ajuda a demonstrar conhecimento em hardware, protocolos de comunicação serial e desenvolvimento web moderno.


