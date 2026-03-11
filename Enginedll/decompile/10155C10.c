/*
 * func-name: ??0CFormatedStatic@@QAE@PAVCREDialog@@@Z
 * func-address: 0x10155c10
 * callers: 0x100a2dd0
 * callees: 0x100a5500, 0x100c7520
 */

CFormatedStatic *__thiscall CFormatedStatic::CFormatedStatic(CFormatedStatic *this, struct CREDialog *a2)
{
  CREStatic::CREStatic(this, a2);
  *(_DWORD *)this = &CFormatedStatic::`vftable';
  *((_DWORD *)this + 175) = 0;
  *((_DWORD *)this + 176) = 0;
  *((_DWORD *)this + 177) = 0;
  CREEditBox::CUniBuffer::CUniBuffer((CFormatedStatic *)((char *)this + 712), 1);
  return this;
}
