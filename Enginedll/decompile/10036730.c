/*
 * func-name: ??0OBJLoad@@QAE@XZ
 * func-address: 0x10036730
 * callers: 0x1011aa80
 * callees: none
 */

OBJLoad *__thiscall OBJLoad::OBJLoad(OBJLoad *this)
{
  OBJLoad *result; // eax

  result = this;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 44) = 0;
  *(_DWORD *)this = &OBJLoad::`vftable';
  return result;
}
