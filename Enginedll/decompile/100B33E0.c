/*
 * func-name: ?RemoveAllControls@CREDialog@@QAEXXZ
 * func-address: 0x100b33e0
 * callers: 0x100c6de0
 * callees: none
 */

void __thiscall CREDialog::RemoveAllControls(CREDialog *this)
{
  int v2; // edi
  bool v3; // cc
  int v4; // ecx

  if ( CREDialog::s_pControlFocus && *((CREDialog **)CREDialog::s_pControlFocus + 28) == this )
    CREDialog::s_pControlFocus = 0;
  if ( CREDialog::s_pControlPressed && *((CREDialog **)CREDialog::s_pControlPressed + 28) == this )
    CREDialog::s_pControlPressed = 0;
  if ( CREDialog::s_pControlLast && *((CREDialog **)CREDialog::s_pControlLast + 28) == this )
    CREDialog::s_pControlLast = 0;
  v2 = 0;
  v3 = *((_DWORD *)this + 192) <= 0;
  *((_DWORD *)this + 43) = 0;
  if ( !v3 )
  {
    do
    {
      v4 = *(_DWORD *)(*((_DWORD *)this + 191) + 4 * v2);
      if ( v4 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, 1);
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 192) );
  }
  if ( *((_DWORD *)this + 191) )
  {
    free(*((void **)this + 191));
    *((_DWORD *)this + 191) = 0;
  }
  *((_DWORD *)this + 192) = 0;
  *((_DWORD *)this + 193) = 0;
}
