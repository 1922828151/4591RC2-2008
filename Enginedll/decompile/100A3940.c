/*
 * func-name: ?SetCheckedInternal@CRECheckBox@@MAEX_N0@Z
 * func-address: 0x100a3940
 * callers: none
 * callees: none
 */

void __thiscall CRECheckBox::SetCheckedInternal(CRECheckBox *this, bool a2, bool a3)
{
  int v4; // eax
  void (__stdcall *v5)(int, int, _DWORD, CRECheckBox *, _DWORD, _DWORD); // ecx
  int v6; // ecx

  *((_BYTE *)this + 816) = a2;
  v4 = *((_DWORD *)this + 28);
  if ( v4 )
  {
    v5 = *(void (__stdcall **)(int, int, _DWORD, CRECheckBox *, _DWORD, _DWORD))(v4 + 736);
    if ( v5 )
    {
      if ( !a3 && !*(_BYTE *)(v4 + 84) )
        return;
      v5(v4, 1025, *((_DWORD *)this + 34), this, 0, 0);
    }
  }
  if ( a3
    && *((_BYTE *)this + 156)
    && *((_BYTE *)this + 90)
    && (!*((_BYTE *)this + 816) && (v6 = *((_DWORD *)this + 19)) != 0 || (v6 = *((_DWORD *)this + 18)) != 0) )
  {
    (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v6 + 36))(0, *((float *)this + 40));
  }
}
