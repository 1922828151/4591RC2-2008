/*
 * func-name: ?ClearText@CREEditBox@@QAEXXZ
 * func-address: 0x100ac370
 * callers: none
 * callees: none
 */

void __thiscall CREEditBox::ClearText(CREEditBox *this)
{
  **((_WORD **)this + 133) = 0;
  *((_DWORD *)this + 135) = 0;
  *((_BYTE *)this + 548) = 1;
  *((_DWORD *)this + 187) = 0;
  *((_DWORD *)this + 189) = 0;
}
