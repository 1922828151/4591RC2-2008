/*
 * func-name: ?OnHotkey@CREComboBox@@UAEXXZ
 * func-address: 0x100aa6d0
 * callers: none
 * callees: none
 */

void __thiscall CREComboBox::OnHotkey(CREComboBox *this)
{
  int v1; // eax
  int v2; // eax
  bool v3; // cc
  int v4; // eax
  void (__stdcall *v5)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD); // edx

  if ( !*((_BYTE *)this + 1448) )
  {
    v1 = *((_DWORD *)this + 204);
    if ( v1 != -1 )
    {
      v2 = v1 + 1;
      v3 = v2 < *((_DWORD *)this + 381);
      *((_DWORD *)this + 204) = v2;
      if ( !v3 )
        *((_DWORD *)this + 204) = 0;
      *((_DWORD *)this + 205) = *((_DWORD *)this + 204);
      v4 = *((_DWORD *)this + 28);
      v5 = *(void (__stdcall **)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD))(v4 + 736);
      if ( v5 )
        v5(v4, 513, *((_DWORD *)this + 34), this, 0, 0);
    }
  }
}
