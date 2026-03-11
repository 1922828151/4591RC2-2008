/*
 * func-name: ?HandleKeyboard@CRERadioButton@@UAE_NIIJ@Z
 * func-address: 0x100aa220
 * callers: none
 * callees: 0x100a9c70
 */

char __thiscall CRERadioButton::HandleKeyboard(CRERadioButton *this, unsigned int a2, unsigned int a3, int a4)
{
  CREDialog *v6; // ecx
  int v7; // eax
  void (__stdcall *v8)(int, int, _DWORD, CRERadioButton *, _DWORD, _DWORD); // ecx
  unsigned int v9; // [esp-4h] [ebp-8h]

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  if ( a2 == 256 )
  {
    if ( a3 == 32 )
    {
      *((_BYTE *)this + 779) = 1;
      return 1;
    }
    return 0;
  }
  if ( a2 != 257 || a3 != 32 )
    return 0;
  if ( *((_BYTE *)this + 779) == 1 )
  {
    v6 = (CREDialog *)*((_DWORD *)this + 28);
    v9 = *((_DWORD *)this + 213);
    *((_BYTE *)this + 779) = 0;
    CREDialog::ClearRadioButtonGroup(v6, v9);
    v7 = *((_DWORD *)this + 28);
    *((_BYTE *)this + 816) = *((_BYTE *)this + 816) == 0;
    v8 = *(void (__stdcall **)(int, int, _DWORD, CRERadioButton *, _DWORD, _DWORD))(v7 + 736);
    if ( v8 )
      v8(v7, 769, *((_DWORD *)this + 34), this, 0, 0);
  }
  return 1;
}
