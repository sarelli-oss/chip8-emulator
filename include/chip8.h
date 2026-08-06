#ifndef CHIP8_H
#define CHIP8_H

#include <string>
#include <cstdint>

class chip8 {
    public: 

        uint8_t memory[4096];
        uint8_t V[16];
        uint16_t I;

        uint16_t stack[16];
        uint16_t PC;
        uint8_t SP;

        uint8_t delayTimer;
        uint8_t soundTimer;
        uint8_t display[2048];

        uint8_t keypad[16];

        void init();
        void loadROM(const std::string& filename);
        void cycle();








};



#endif