/*
 * func-name: ?CPtoX@CUniBuffer@CREEditBox@@QAEJHHPAH@Z
 * func-address: 0x100a57a0
 * callers: 0x100a6fb0, 0x100a7200, 0x100ac120, 0x100ac790, 0x100bdfc0, 0x100be440, 0x100c0490, 0x100c21a0, 0x100c2500, 0x100c2cc0, 0x100c5fd0, 0x100c8fd0, 0x10156140, 0x10157440, 0x10157630, 0x10157870
 * callees: 0x1006ab80, 0x100a5480
 */

int __thiscall CREEditBox::CUniBuffer::CPtoX(CREEditBox::CUniBuffer *this, int a2, int *a3, int *a4)
{
  int result; // eax

  *a4 = 0;
  if ( !*((_DWORD *)this + 2) )
    return 0;
  if ( !*((_BYTE *)this + 16) )
    return CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 5), a2, (int)a3, a4);
  result = CREEditBox::CUniBuffer::Analyse(this);
  if ( result >= 0 )
    return CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 5), a2, (int)a3, a4);
  return result;
}
