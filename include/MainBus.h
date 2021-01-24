#ifndef NES_MAINBUS_H
#define NES_MAINBUS_H
#include "Cartridge.h"

namespace nes
{
    class MainBus
    {
    public:
        MainBus();
        Byte Read(Address addr);
    }
} // namespace nes

#endif