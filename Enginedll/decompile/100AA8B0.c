/*
 * func-name: ?SetSelectedByData@CREComboBox@@QAEJPAX@Z
 * func-address: 0x100aa8b0
 * callers: none
 * callees: none
 */

int __thiscall CREComboBox::SetSelectedByData(CREComboBox *this, void *a2)
{
  int v2; // eax
  int i; // edx
  int v5; // eax
  void (__stdcall *v6)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD); // edx

  v2 = 0;
  if ( *((int *)this + 381) <= 0 )
    return -2147467259;
  for ( i = *((_DWORD *)this + 380); *(void **)(*(_DWORD *)i + 512) != a2; i += 4 )
  {
    if ( ++v2 >= *((_DWORD *)this + 381) )
      return -2147467259;
  }
  *((_DWORD *)this + 204) = v2;
  *((_DWORD *)this + 205) = v2;
  v5 = *((_DWORD *)this + 28);
  if ( v5 )
  {
    v6 = *(void (__stdcall **)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD))(v5 + 736);
    if ( v6 )
    {
      if ( *(_BYTE *)(v5 + 84) )
        v6(v5, 513, *((_DWORD *)this + 34), this, 0, 0);
    }
  }
  return 0;
}
