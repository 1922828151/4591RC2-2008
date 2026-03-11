/*
 * func-name: ?OnCycleFocus@CREDialog@@IAEX_N@Z
 * func-address: 0x100a9d20
 * callers: 0x100afae0
 * callees: 0x100a9be0, 0x100a9c30
 */

void __thiscall CREDialog::OnCycleFocus(CREDialog *this, bool a2)
{
  struct CREControl *v2; // ebp
  struct CREControl *v3; // esi
  int i; // edi
  struct CREControl *v5; // eax

  v2 = CREDialog::s_pControlFocus;
  if ( CREDialog::s_pControlFocus && *((CREDialog **)CREDialog::s_pControlFocus + 28) == this )
  {
    v3 = CREDialog::s_pControlFocus;
    for ( i = 0; i < 0xFFFF; ++i )
    {
      v5 = a2 ? CREDialog::GetNextControl(v3) : CREDialog::GetPrevControl(v3);
      v3 = v5;
      if ( v5 == v2 )
        break;
      if ( *(_BYTE *)(*((_DWORD *)v5 + 28) + 85) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(struct CREControl *))(*(_DWORD *)v5 + 96))(v5) )
        {
          (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)CREDialog::s_pControlFocus + 104))(CREDialog::s_pControlFocus);
          CREDialog::s_pControlFocus = v3;
          (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)v3 + 100))(v3);
          return;
        }
        v2 = CREDialog::s_pControlFocus;
      }
    }
  }
}
