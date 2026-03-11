/*
 * func-name: ??1Game@@QAE@XZ_0
 * func-address: 0x1002c0e0
 * callers: 0x1000fcae
 * callees: 0x10003fe9
 */

void __thiscall Game::~Game(Game *this)
{
  sub_10003FE9();
  std::string::~string((char *)this + 68);
  std::string::~string((char *)this + 40);
  std::vector<Model *>::~vector<Model *>((char *)this + 16);
}
