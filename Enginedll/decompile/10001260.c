/*
 * func-name: ??0Factory@@QAE@ABV0@@Z
 * func-address: 0x10001260
 * callers: none
 * callees: none
 */

Factory *__thiscall Factory::Factory(Factory *this, const struct Factory *a2)
{
  *(_DWORD *)this = &Factory::`vftable';
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  *((_BYTE *)this + 5) = *((_BYTE *)a2 + 5);
  std::string::string((char *)this + 8, (char *)a2 + 8);
  return this;
}
