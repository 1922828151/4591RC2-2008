/*
 * func-name: ?Refresh@CREDialog@@QAEXXZ
 * func-address: 0x100af820
 * callers: 0x100c4d20
 * callees: none
 */

void __thiscall CREDialog::Refresh(CREDialog *this)
{
  int v2; // ecx
  int v3; // edi
  bool v4; // cc
  int v5; // ecx
  int v6; // eax
  struct CREControl **i; // ecx
  struct CREControl *v8; // edi

  if ( CREDialog::s_pControlFocus )
    (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)CREDialog::s_pControlFocus + 104))(CREDialog::s_pControlFocus);
  v2 = *((_DWORD *)this + 43);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 112))(v2);
  CREDialog::s_pControlFocus = 0;
  CREDialog::s_pControlPressed = 0;
  v3 = 0;
  v4 = *((_DWORD *)this + 192) <= 0;
  *((_DWORD *)this + 43) = 0;
  if ( !v4 )
  {
    do
    {
      v5 = *(_DWORD *)(*((_DWORD *)this + 191) + 4 * v3);
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 192) );
  }
  if ( *((_BYTE *)this + 85) )
  {
    v6 = 0;
    if ( *((int *)this + 192) > 0 )
    {
      for ( i = (struct CREControl **)*((_DWORD *)this + 191); ; ++i )
      {
        v8 = *i;
        if ( *((_BYTE *)*i + 93) )
          break;
        if ( ++v6 >= *((_DWORD *)this + 192) )
          return;
      }
      if ( CREDialog::s_pControlFocus )
        (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)CREDialog::s_pControlFocus + 104))(CREDialog::s_pControlFocus);
      CREDialog::s_pControlFocus = v8;
      (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)v8 + 100))(v8);
    }
  }
}
