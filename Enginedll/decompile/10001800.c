/*
 * func-name: ??0XMLSystem@@QAE@ABV0@@Z
 * func-address: 0x10001800
 * callers: 0x1003e7e0, 0x100d2aa0
 * callees: none
 */

XMLSystem *__thiscall XMLSystem::XMLSystem(XMLSystem *this, const struct XMLSystem *a2)
{
  std::string::string(this, a2);
  *((_BYTE *)this + 28) = *((_BYTE *)a2 + 28);
  *((_BYTE *)this + 29) = *((_BYTE *)a2 + 29);
  *((_BYTE *)this + 30) = *((_BYTE *)a2 + 30);
  *((_BYTE *)this + 31) = *((_BYTE *)a2 + 31);
  std::string::string((char *)this + 32, (char *)a2 + 32);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_BYTE *)this + 64) = *((_BYTE *)a2 + 64);
  *((_BYTE *)this + 65) = *((_BYTE *)a2 + 65);
  *((_BYTE *)this + 66) = *((_BYTE *)a2 + 66);
  *((_BYTE *)this + 67) = *((_BYTE *)a2 + 67);
  *((_BYTE *)this + 68) = *((_BYTE *)a2 + 68);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 21);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  return this;
}
