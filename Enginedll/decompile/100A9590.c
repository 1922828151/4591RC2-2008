/*
 * func-name: ?RemoveControl@CREDialog@@QAEXH@Z
 * func-address: 0x100a9590
 * callers: none
 * callees: none
 */

void __thiscall CREDialog::RemoveControl(CREDialog *this, int a2)
{
  int v3; // esi
  struct CREControl **i; // eax
  struct CREControl *v5; // ebx
  struct CREControl *v6; // ecx
  int v7; // eax

  v3 = 0;
  if ( *((int *)this + 192) > 0 )
  {
    for ( i = (struct CREControl **)*((_DWORD *)this + 191); ; ++i )
    {
      v5 = *i;
      if ( *((_DWORD *)*i + 34) == a2 )
        break;
      if ( ++v3 >= *((_DWORD *)this + 192) )
        return;
    }
    v6 = CREDialog::s_pControlFocus;
    if ( CREDialog::s_pControlFocus )
    {
      (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)CREDialog::s_pControlFocus + 104))(CREDialog::s_pControlFocus);
      v6 = 0;
      CREDialog::s_pControlFocus = 0;
    }
    if ( v6 == v5 )
      CREDialog::s_pControlFocus = 0;
    if ( CREDialog::s_pControlPressed == v5 )
      CREDialog::s_pControlPressed = 0;
    if ( *((struct CREControl **)this + 43) == v5 )
      *((_DWORD *)this + 43) = 0;
    if ( CREDialog::s_pControlLast == v5 )
      CREDialog::s_pControlLast = 0;
    (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v5 + 4))(v5, 1);
    if ( v3 >= 0 )
    {
      v7 = *((_DWORD *)this + 192);
      if ( v3 < v7 )
      {
        memmove(
          (void *)(*((_DWORD *)this + 191) + 4 * v3),
          (const void *)(*((_DWORD *)this + 191) + 4 * v3 + 4),
          4 * (v7 - v3) - 4);
        --*((_DWORD *)this + 192);
      }
    }
  }
}
