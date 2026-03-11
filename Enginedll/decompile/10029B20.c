/*
 * func-name: ??1CacheWorld@@QAE@XZ
 * func-address: 0x10029b20
 * callers: none
 * callees: 0x1000db00
 */

void __thiscall CacheWorld::~CacheWorld(CacheWorld *this)
{
  sub_1000DB00((int *)this + 15);
  sub_1000DB00((int *)this + 11);
  sub_1000DB00((int *)this + 7);
  std::string::~string(this);
}
