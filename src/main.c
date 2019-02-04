#include <stdbool.h>

const int program[] = {
  PSH, 5,
  PSH, 6,
  ADD,
  POP,
  HLT
};


int ip = 0;
bool running = true;

typedef enum {
  PSH,
  ADD,
  POP,
  SET,
  HLT,
} InstructionSet;

void eval(int instr) {
  switch(instr) {
    case HLT:
      running = false;
      break;
  }
}

int fetch() {
  return program[ip];
}

int main() {
  while (running) {
    eval(fetch());
    ip++;
  }
  return 0;
}
