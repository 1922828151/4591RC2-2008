/*
 * func-name: ??0FRobotFramework@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1018ba40
 * callers: 0x10002cf7
 * callees: 0x1000b613, 0x100104b0, 0x10019a97, 0x102c9f65
 */

GameClient::FRobotFramework *__thiscall GameClient::FRobotFramework::FRobotFramework(
        GameClient::FRobotFramework *this,
        const struct GameClient::FRobotFramework *a2)
{
  GameClient::Flyweight::Flyweight(this, a2);
  *(_DWORD *)this = &GameClient::FRobotFramework::`vftable';
  *((float *)this + 27) = *((float *)a2 + 27);
  *((float *)this + 28) = *((float *)a2 + 28);
  *((float *)this + 29) = *((float *)a2 + 29);
  *((float *)this + 30) = *((float *)a2 + 30);
  *((_DWORD *)this + 31) = &Volume::`vftable';
  *((_DWORD *)this + 32) = *((_DWORD *)a2 + 32);
  *((_DWORD *)this + 33) = *((_DWORD *)a2 + 33);
  *((_DWORD *)this + 34) = *((_DWORD *)a2 + 34);
  *((_DWORD *)this + 31) = &BBox::`vftable';
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 35);
  *((_DWORD *)this + 36) = *((_DWORD *)a2 + 36);
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 37);
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  *((_DWORD *)this + 39) = *((_DWORD *)a2 + 39);
  *((_DWORD *)this + 40) = *((_DWORD *)a2 + 40);
  *((float *)this + 41) = *((float *)a2 + 41);
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 42);
  *((_DWORD *)this + 43) = *((_DWORD *)a2 + 43);
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 44);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 45);
  std::string::string((char *)this + 184, (char *)a2 + 184);
  std::string::string((char *)this + 212, (char *)a2 + 212);
  std::string::string((char *)this + 240, (char *)a2 + 240);
  *((float *)this + 67) = *((float *)a2 + 67);
  *((float *)this + 68) = *((float *)a2 + 68);
  *((float *)this + 69) = *((float *)a2 + 69);
  *((float *)this + 70) = *((float *)a2 + 70);
  std::string::string((char *)this + 284, (char *)a2 + 284);
  std::string::string((char *)this + 312, (char *)a2 + 312);
  std::string::string((char *)this + 340, (char *)a2 + 340);
  std::string::string((char *)this + 368, (char *)a2 + 368);
  std::string::string((char *)this + 396, (char *)a2 + 396);
  sub_100104B0((int)a2 + 424);
  sub_1000B613((int)a2 + 440);
  sub_1000B613((int)a2 + 456);
  sub_1000B613((int)a2 + 472);
  `eh vector copy constructor iterator'(
    (char *)this + 488,
    (char *)a2 + 488,
    0x1Cu,
    50,
    std::string::string,
    std::string::~string);
  return this;
}
