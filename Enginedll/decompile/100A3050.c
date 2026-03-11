/*
 * func-name: ?RequestFocus@CREDialog@@QAEXPAVCREControl@@@Z
 * func-address: 0x100a3050
 * callers: 0x100a34c0, 0x100a3860, 0x100a4030, 0x100a6190, 0x100a65b0, 0x100a6620, 0x100a6880, 0x100a7200, 0x100aa2c0, 0x100aaac0, 0x100abff0, 0x100ac790, 0x100ae570, 0x100b03f0, 0x100b0e50, 0x100b1760, 0x100be440, 0x10153480
 * callees: none
 */

void __thiscall CREDialog::RequestFocus(CREDialog *this, struct CREControl *a2)
{
  struct CREControl *v2; // ecx

  v2 = CREDialog::s_pControlFocus;
  if ( CREDialog::s_pControlFocus != a2 || *((_BYTE *)CREDialog::s_pControlFocus + 92) != 1 )
  {
    if ( a2 )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(struct CREControl *))(*(_DWORD *)a2 + 96))(a2) )
        return;
      v2 = CREDialog::s_pControlFocus;
    }
    if ( v2 )
      (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)v2 + 104))(v2);
    if ( a2 )
      (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)a2 + 100))(a2);
    CREDialog::s_pControlFocus = a2;
  }
}
