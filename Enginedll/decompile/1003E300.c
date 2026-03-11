/*
 * func-name: ??0XFileLoad@@QAE@XZ
 * func-address: 0x1003e300
 * callers: 0x1011aa80
 * callees: none
 */

XFileLoad *__thiscall XFileLoad::XFileLoad(XFileLoad *this)
{
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 44) = 0;
  *(_DWORD *)this = &XFileLoad::`vftable';
  std::string::string((char *)this + 48);
  return this;
}
