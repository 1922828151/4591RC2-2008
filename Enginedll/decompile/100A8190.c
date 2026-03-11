/*
 * func-name: ?SendCompString@CMLIMEEditBox@@IAEXXZ
 * func-address: 0x100a8190
 * callers: 0x100a81f0, 0x100ca110
 * callees: none
 */

void __thiscall CMLIMEEditBox::SendCompString(CMLIMEEditBox *this)
{
  int i; // esi

  for ( i = 0; i < lstrlenW(CMLIMEEditBox::s_CompString); ++i )
  {
    byte_1123E21C = 1;
    (*(void (__thiscall **)(CMLIMEEditBox *, int, _DWORD, _DWORD))(*(_DWORD *)this + 84))(
      this,
      258,
      CMLIMEEditBox::s_CompString[i],
      0);
  }
}
