/*
 * func-name: ?SetSelectedByIndex@CREComboBox@@QAEJI@Z
 * func-address: 0x100aa7f0
 * callers: none
 * callees: none
 */

int __thiscall CREComboBox::SetSelectedByIndex(CREComboBox *this, unsigned int a2)
{
  int v3; // eax
  void (__stdcall *v4)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD); // edx

  if ( a2 >= *((_DWORD *)this + 381) )
    return -2147024809;
  *((_DWORD *)this + 204) = a2;
  *((_DWORD *)this + 205) = a2;
  v3 = *((_DWORD *)this + 28);
  if ( v3 )
  {
    v4 = *(void (__stdcall **)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD))(v3 + 736);
    if ( v4 )
    {
      if ( *(_BYTE *)(v3 + 84) )
        v4(v3, 513, *((_DWORD *)this + 34), this, 0, 0);
    }
  }
  return 0;
}
