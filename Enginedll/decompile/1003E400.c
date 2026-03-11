/*
 * func-name: ??0XFileLoad@@QAE@ABV0@@Z
 * func-address: 0x1003e400
 * callers: none
 * callees: 0x10010320
 */

XFileLoad *__thiscall XFileLoad::XFileLoad(XFileLoad *this, const struct XFileLoad *a2)
{
  ILoad::ILoad(this, a2);
  *(_DWORD *)this = &XFileLoad::`vftable';
  std::string::string((char *)this + 48, (char *)a2 + 48);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  return this;
}
