/*
 * func-name: ??0ILoad@@QAE@XZ
 * func-address: 0x1000d140
 * callers: none
 * callees: none
 */

ILoad *__thiscall ILoad::ILoad(ILoad *this)
{
  ILoad *result; // eax

  result = this;
  *(_DWORD *)this = &ILoad::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 44) = 0;
  return result;
}
