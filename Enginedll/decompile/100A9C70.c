/*
 * func-name: ?ClearRadioButtonGroup@CREDialog@@QAEXI@Z
 * func-address: 0x100a9c70
 * callers: 0x100aa220, 0x100aa2c0, 0x100aa3c0
 * callees: none
 */

void __thiscall CREDialog::ClearRadioButtonGroup(CREDialog *this, unsigned int a2)
{
  int i; // esi
  _DWORD *v4; // ecx

  for ( i = 0; i < *((_DWORD *)this + 192); ++i )
  {
    v4 = *(_DWORD **)(*((_DWORD *)this + 191) + 4 * i);
    if ( v4[35] == 4 && v4[213] == a2 )
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*v4 + 212))(v4, 0, 0, 0);
  }
}
