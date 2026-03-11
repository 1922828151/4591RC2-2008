/*
 * func-name: ?RemoveControl@CREDialog@@QAEXPAVCREControl@@@Z
 * func-address: 0x100a9670
 * callers: none
 * callees: none
 */

void __thiscall CREDialog::RemoveControl(CREDialog *this, struct CREControl *a2)
{
  int v3; // edi
  struct CREControl **i; // eax
  struct CREControl *v5; // ecx
  int v6; // eax

  v3 = 0;
  if ( *((int *)this + 192) > 0 )
  {
    for ( i = (struct CREControl **)*((_DWORD *)this + 191); a2 != *i; ++i )
    {
      if ( ++v3 >= *((_DWORD *)this + 192) )
        return;
    }
    v5 = CREDialog::s_pControlFocus;
    if ( CREDialog::s_pControlFocus )
    {
      (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)CREDialog::s_pControlFocus + 104))(CREDialog::s_pControlFocus);
      v5 = 0;
      CREDialog::s_pControlFocus = 0;
    }
    if ( v5 == a2 )
      CREDialog::s_pControlFocus = 0;
    if ( CREDialog::s_pControlPressed == a2 )
      CREDialog::s_pControlPressed = 0;
    if ( *((struct CREControl **)this + 43) == a2 )
      *((_DWORD *)this + 43) = 0;
    if ( CREDialog::s_pControlLast == a2 )
      CREDialog::s_pControlLast = 0;
    if ( a2 )
      (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)a2 + 4))(a2, 1);
    if ( v3 >= 0 )
    {
      v6 = *((_DWORD *)this + 192);
      if ( v3 < v6 )
      {
        memmove(
          (void *)(*((_DWORD *)this + 191) + 4 * v3),
          (const void *)(*((_DWORD *)this + 191) + 4 * v3 + 4),
          4 * (v6 - v3) - 4);
        --*((_DWORD *)this + 192);
      }
    }
  }
}
