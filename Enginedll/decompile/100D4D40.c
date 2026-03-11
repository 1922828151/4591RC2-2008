/*
 * func-name: ??0CTYVStatic@@QAE@ABV0@@Z
 * func-address: 0x100d4d40
 * callers: none
 * callees: 0x100717b0
 */

CTYVStatic *__thiscall CTYVStatic::CTYVStatic(CTYVStatic *this, const struct CTYVStatic *a2)
{
  CREStatic::CREStatic(this, a2);
  *(_DWORD *)this = &CTYVStatic::`vftable';
  *((_DWORD *)this + 174) = *((_DWORD *)a2 + 174);
  *((_DWORD *)this + 175) = *((_DWORD *)a2 + 175);
  *((_DWORD *)this + 176) = *((_DWORD *)a2 + 176);
  return this;
}
