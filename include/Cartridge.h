#ifndef NES_CARTRIDGE_H
#define NES_CARTRIDGE_H
#include<string>
#include<vector>
using std::string;
using std::vector;
namespace nes
{
    using Byte = std::uint8_t;
    using Address = std::uint16_t;

    class Cartridge
    {
        public:
        Cartridge();
        bool LoadFromFile(string path);
        const vector<Byte>& GetROM();
        const vector<Byte>& GetVROM();

        private:
        /* program data */
        vector<Byte> m_PRG_ROM;
        /* graphic data*/
        vector<Byte> m_CHR_ROM;
    };
} // namespace nes

#endif