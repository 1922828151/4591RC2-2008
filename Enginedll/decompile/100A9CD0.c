/*
 * func-name: ?FocusDefaultControl@CREDialog@@QAEXXZ
 * func-address: 0x100a9cd0
 * callers: 0x100afae0, 0x100d75b0
 * callees: none
 */

void __thiscall CREDialog::FocusDefaultControl(CREDialog *this)
{
  int v1; // edx
  int v2; // eax
  struct CREControl **i; // ecx
  struct CREControl *v4; // esi

  v1 = *((_DWORD *)this + 192);
  v2 = 0;
  if ( v1 > 0 )
  {
    for ( i = (struct CREControl **)*((_DWORD *)this + 191); ; ++i )
    {
      v4 = *i;
      if ( *((_BYTE *)*i + 93) )
        break;
      if ( ++v2 >= v1 )
        return;
    }
    if ( CREDialog::s_pControlFocus )
      (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)CREDialog::s_pControlFocus + 104))(CREDialog::s_pControlFocus);
    CREDialog::s_pControlFocus = v4;
    (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)v4 + 100))(v4);
  }
}
