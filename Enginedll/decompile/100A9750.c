/*
 * func-name: ?RemoveAt@CREDialog@@QAEXH@Z
 * func-address: 0x100a9750
 * callers: none
 * callees: none
 */

void __thiscall CREDialog::RemoveAt(CREDialog *this, int a2)
{
  struct CREControl *v3; // ecx
  struct CREControl *v4; // edi
  int v5; // eax

  v3 = CREDialog::s_pControlFocus;
  v4 = *(struct CREControl **)(*((_DWORD *)this + 191) + 4 * a2);
  if ( CREDialog::s_pControlFocus )
  {
    (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)CREDialog::s_pControlFocus + 104))(CREDialog::s_pControlFocus);
    v3 = 0;
    CREDialog::s_pControlFocus = 0;
  }
  if ( v3 == v4 )
    CREDialog::s_pControlFocus = 0;
  if ( CREDialog::s_pControlPressed == v4 )
    CREDialog::s_pControlPressed = 0;
  if ( *((struct CREControl **)this + 43) == v4 )
    *((_DWORD *)this + 43) = 0;
  if ( CREDialog::s_pControlLast == v4 )
    CREDialog::s_pControlLast = 0;
  if ( v4 )
    (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v4 + 4))(v4, 1);
  if ( a2 >= 0 )
  {
    v5 = *((_DWORD *)this + 192);
    if ( a2 < v5 )
    {
      memmove(
        (void *)(*((_DWORD *)this + 191) + 4 * a2),
        (const void *)(*((_DWORD *)this + 191) + 4 * a2 + 4),
        4 * (v5 - a2) - 4);
      --*((_DWORD *)this + 192);
    }
  }
}
