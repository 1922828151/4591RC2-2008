/*
 * func-name: ?XtoCP@CUniBuffer@CREEditBox@@QAEJHPAH0@Z
 * func-address: 0x100a57f0
 * callers: 0x100a6fb0, 0x100a7200, 0x100ac120, 0x100ac790, 0x100ae4a0, 0x100be440, 0x100c21a0, 0x100c5fd0, 0x100c8fd0
 * callees: 0x1006ab80, 0x100a5480
 */

int __thiscall CREEditBox::CUniBuffer::XtoCP(void **this, int a2, int *a3, int *a4)
{
  int result; // eax
  int v6; // edi

  *a3 = 0;
  *a4 = 0;
  if ( !*((_BYTE *)this + 16) || (result = CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)this), result >= 0) )
    result = CREEditBox::CUniBuffer::_ScriptStringXtoCP(this[5], a2, a3, a4);
  if ( *a3 == -1 && *a4 == 1 )
  {
    *a3 = 0;
    *a4 = 0;
  }
  else
  {
    v6 = (int)this[2];
    if ( *a3 > v6 && !*a4 )
    {
      *a3 = v6;
      *a4 = 1;
    }
  }
  return result;
}
