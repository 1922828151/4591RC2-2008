/*
 * func-name: ?Analyse@CUniBuffer@CREEditBox@@QAEJXZ
 * func-address: 0x100a5480
 * callers: 0x100a57a0, 0x100a57f0, 0x100a5870, 0x100a5910, 0x100a6fb0, 0x100ac120, 0x100b49b0, 0x100bdfc0, 0x100be7e0, 0x100befd0, 0x100c0490, 0x100c0c50, 0x100c2500, 0x100c2cc0, 0x100c3320, 0x100c4990, 0x100c4b70, 0x100c5520, 0x100c5d60, 0x100c5fd0, 0x100c8fd0, 0x10156140, 0x10157870
 * callees: 0x1006ab60, 0x1006ab70, 0x1006ab90
 */

int __thiscall CREEditBox::CUniBuffer::Analyse(CREEditBox::CUniBuffer *this)
{
  void **v2; // edi
  int result; // eax
  tag_SCRIPT_STATE v4; // [esp+8h] [ebp-8h] BYREF
  tag_SCRIPT_CONTROL v5; // [esp+Ch] [ebp-4h] BYREF

  v2 = (void **)((char *)this + 20);
  if ( *((_DWORD *)this + 5) )
    CREEditBox::CUniBuffer::_ScriptStringFree((void **)this + 5);
  v5 = 0;
  v4 = 0;
  CREEditBox::CUniBuffer::_ScriptApplyDigitSubstitution(0, &v5, &v4);
  result = CREEditBox::CUniBuffer::_ScriptStringAnalyse(
             *((HDC *)this + 3),
             *(const void **)this,
             *((_DWORD *)this + 2) + 1,
             3 * *((_DWORD *)this + 2) / 2 + 16,
             -1,
             0x10E0u,
             0,
             &v5,
             &v4,
             0,
             0,
             0,
             v2);
  if ( result >= 0 )
    *((_BYTE *)this + 16) = 0;
  return result;
}
