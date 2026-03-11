/*
 * func-name: ?SetCheckedInternal@CRERadioButton@@MAEX_N00@Z
 * func-address: 0x100aa3c0
 * callers: none
 * callees: 0x100a9c70
 */

void __thiscall CRERadioButton::SetCheckedInternal(CRERadioButton *this, bool a2, bool a3, bool a4)
{
  CREDialog *v5; // ecx
  int v6; // eax
  void (__stdcall *v7)(int, int, _DWORD, CRERadioButton *, _DWORD, _DWORD); // ecx

  if ( a2 && a3 )
  {
    v5 = (CREDialog *)*((_DWORD *)this + 28);
    if ( v5 )
      CREDialog::ClearRadioButtonGroup(v5, *((_DWORD *)this + 213));
  }
  v6 = *((_DWORD *)this + 28);
  *((_BYTE *)this + 816) = a2;
  if ( v6 )
  {
    v7 = *(void (__stdcall **)(int, int, _DWORD, CRERadioButton *, _DWORD, _DWORD))(v6 + 736);
    if ( v7 )
    {
      if ( a4 || *(_BYTE *)(v6 + 84) )
        v7(v6, 769, *((_DWORD *)this + 34), this, 0, 0);
    }
  }
}
