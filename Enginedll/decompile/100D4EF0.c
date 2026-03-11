/*
 * func-name: ??0CFormatedStatic@@QAE@ABV0@@Z
 * func-address: 0x100d4ef0
 * callers: none
 * callees: 0x100717b0, 0x100d30e0
 */

CFormatedStatic *__thiscall CFormatedStatic::CFormatedStatic(CFormatedStatic *this, const struct CFormatedStatic *a2)
{
  CREStatic::CREStatic(this, a2);
  *(_DWORD *)this = &CFormatedStatic::`vftable';
  sub_100D30E0((_DWORD *)this + 174, (int)a2 + 696);
  *((_DWORD *)this + 178) = *((_DWORD *)a2 + 178);
  *((_DWORD *)this + 179) = *((_DWORD *)a2 + 179);
  *((_DWORD *)this + 180) = *((_DWORD *)a2 + 180);
  *((_DWORD *)this + 181) = *((_DWORD *)a2 + 181);
  *((_DWORD *)this + 182) = *((_DWORD *)a2 + 182);
  *((_DWORD *)this + 183) = *((_DWORD *)a2 + 183);
  return this;
}
