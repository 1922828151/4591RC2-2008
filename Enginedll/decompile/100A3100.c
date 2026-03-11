/*
 * func-name: ?ClearFocus@CREDialog@@SAXXZ
 * func-address: 0x100a3100
 * callers: 0x100a34c0, 0x100a4030, 0x100a6880, 0x100a6cd0, 0x100aa4c0, 0x100aaac0, 0x100b03f0, 0x100b0e50
 * callees: none
 */

void __cdecl CREDialog::ClearFocus()
{
  if ( CREDialog::s_pControlFocus )
  {
    (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)CREDialog::s_pControlFocus + 104))(CREDialog::s_pControlFocus);
    CREDialog::s_pControlFocus = 0;
  }
}
