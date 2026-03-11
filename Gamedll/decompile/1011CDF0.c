/*
 * func-name: ??0FEquip@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1011cdf0
 * callers: 0x10018228
 * callees: 0x1000b613, 0x1000cf40, 0x10011f27, 0x102c9f65
 */

GameClient::FEquip *__thiscall GameClient::FEquip::FEquip(
        GameClient::FEquip *this,
        const struct GameClient::FEquip *a2)
{
  GameClient::FEquip *result; // eax

  GameClient::FSystemPart::FSystemPart(this, a2);
  *(_DWORD *)this = &GameClient::FEquip::`vftable';
  std::string::string((char *)this + 272, (char *)a2 + 272);
  *((_DWORD *)this + 75) = *((_DWORD *)a2 + 75);
  *((_DWORD *)this + 76) = *((_DWORD *)a2 + 76);
  *((_DWORD *)this + 77) = *((_DWORD *)a2 + 77);
  *((_DWORD *)this + 78) = *((_DWORD *)a2 + 78);
  *((_DWORD *)this + 79) = *((_DWORD *)a2 + 79);
  *((_DWORD *)this + 80) = *((_DWORD *)a2 + 80);
  *((float *)this + 81) = *((float *)a2 + 81);
  *((_DWORD *)this + 82) = *((_DWORD *)a2 + 82);
  *((_BYTE *)this + 332) = *((_BYTE *)a2 + 332);
  *((_BYTE *)this + 333) = *((_BYTE *)a2 + 333);
  *((_DWORD *)this + 84) = *((_DWORD *)a2 + 84);
  *((_DWORD *)this + 85) = *((_DWORD *)a2 + 85);
  *((_DWORD *)this + 86) = *((_DWORD *)a2 + 86);
  *((_DWORD *)this + 87) = *((_DWORD *)a2 + 87);
  *((float *)this + 88) = *((float *)a2 + 88);
  *((float *)this + 89) = *((float *)a2 + 89);
  std::string::string((char *)this + 360, (char *)a2 + 360);
  std::string::string((char *)this + 388, (char *)a2 + 388);
  std::string::string((char *)this + 416, (char *)a2 + 416);
  sub_1000B613((int)a2 + 444);
  sub_1000B613((int)a2 + 460);
  std::string::string((char *)this + 476, (char *)a2 + 476);
  std::string::string((char *)this + 504, (char *)a2 + 504);
  *((float *)this + 133) = *((float *)a2 + 133);
  *((_DWORD *)this + 134) = *((_DWORD *)a2 + 134);
  std::string::string((char *)this + 540, (char *)a2 + 540);
  std::string::string((char *)this + 568, (char *)a2 + 568);
  std::string::string((char *)this + 596, (char *)a2 + 596);
  sub_1000B613((int)a2 + 624);
  sub_1000B613((int)a2 + 640);
  sub_1000B613((int)a2 + 656);
  sub_1000B613((int)a2 + 672);
  sub_1000B613((int)a2 + 688);
  `eh vector copy constructor iterator'(
    (char *)this + 704,
    (char *)a2 + 704,
    0x1Cu,
    5,
    std::string::string,
    std::string::~string);
  `eh vector copy constructor iterator'(
    (char *)this + 844,
    (char *)a2 + 844,
    0x1Cu,
    5,
    std::string::string,
    std::string::~string);
  `eh vector copy constructor iterator'(
    (char *)this + 984,
    (char *)a2 + 984,
    0x1Cu,
    5,
    std::string::string,
    std::string::~string);
  `eh vector copy constructor iterator'(
    (char *)this + 1124,
    (char *)a2 + 1124,
    0x1Cu,
    9,
    std::string::string,
    std::string::~string);
  `eh vector copy constructor iterator'(
    (char *)this + 1376,
    (char *)a2 + 1376,
    0x1Cu,
    9,
    std::string::string,
    std::string::~string);
  *((_BYTE *)this + 1628) = *((_BYTE *)a2 + 1628);
  sub_1000B613((int)a2 + 1632);
  sub_1000CF40((char *)a2 + 1648);
  sub_1000CF40((char *)a2 + 1728);
  sub_1000CF40((char *)a2 + 1808);
  sub_1000CF40((char *)a2 + 1888);
  sub_1000CF40((char *)a2 + 1968);
  std::string::string((char *)this + 2048, (char *)a2 + 2048);
  *((float *)this + 519) = *((float *)a2 + 519);
  result = this;
  *((float *)this + 520) = *((float *)a2 + 520);
  return result;
}
