/*
 * func-name: ?SetScrollBar@CMultiLineStatic@@QAEXPAVCREScrollBar@@@Z
 * func-address: 0x100a8e70
 * callers: none
 * callees: none
 */

void __thiscall CMultiLineStatic::SetScrollBar(CMultiLineStatic *this, struct CREScrollBar *a2)
{
  *((_DWORD *)this + 189) = a2;
  *((_BYTE *)this + 748) = 1;
}
