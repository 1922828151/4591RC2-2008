/*
 * func-name: ??4CacheWorld@@QAEAAV0@ABV0@@Z
 * func-address: 0x1002dc30
 * callers: none
 * callees: 0x10011510
 */

void *__thiscall CacheWorld::operator=(void *this, int a2)
{
  std::string::operator=(this, a2);
  sub_10011510((int)this + 28, a2 + 28);
  sub_10011510((int)this + 44, a2 + 44);
  sub_10011510((int)this + 60, a2 + 60);
  return this;
}
