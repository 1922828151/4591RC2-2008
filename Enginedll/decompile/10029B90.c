/*
 * func-name: ??0CacheWorld@@QAE@ABV0@@Z
 * func-address: 0x10029b90
 * callers: none
 * callees: 0x1000f380
 */

CacheWorld *__thiscall CacheWorld::CacheWorld(CacheWorld *this, const struct CacheWorld *a2)
{
  std::string::string(this, a2);
  sub_1000F380((int)this + 28, (int)a2 + 28);
  sub_1000F380((int)this + 44, (int)a2 + 44);
  sub_1000F380((int)this + 60, (int)a2 + 60);
  return this;
}
