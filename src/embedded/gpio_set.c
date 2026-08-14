#include "GPIO.h"

void main() {
    GPIO &= ~(15 << 8);
    GPIO |= (13 << 8);
}
