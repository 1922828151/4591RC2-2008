/*
 * func-name: ??0DynLib@@QAE@ABV0@@Z
 * func-address: 0x1007e6a0
 * callers: none
 * callees: none
 */

DynLib *__thiscall DynLib::DynLib(DynLib *this, const struct DynLib *a2)
{
  std::string::string(this, a2);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  return this;
}
