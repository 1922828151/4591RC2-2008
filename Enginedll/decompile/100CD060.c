/*
 * func-name: ??1CMultiLineStatic@@UAE@XZ
 * func-address: 0x100cd060
 * callers: 0x1006b9e0
 * callees: 0x10069fa0, 0x1006ab90, 0x1013efb0, 0x101a2500, 0x101a253a
 */

void __thiscall CMultiLineStatic::~CMultiLineStatic(CMultiLineStatic *this)
{
  void *v2; // eax

  *(_DWORD *)this = &CMultiLineStatic::`vftable';
  v2 = (void *)*((_DWORD *)this + 190);
  if ( v2 )
  {
    operator delete(v2);
    *((_DWORD *)this + 190) = 0;
  }
  operator delete[](*((void **)this + 195));
  if ( *((_DWORD *)this + 200) )
    CREEditBox::CUniBuffer::_ScriptStringFree((void **)this + 200);
  sub_1013EFB0((char *)this + 700);
  CREStatic::~CREStatic(this);
}
