/*
 * func-name: ?SetSelectedByText@CREComboBox@@QAEJPB_W@Z
 * func-address: 0x100aa840
 * callers: none
 * callees: 0x100aa770
 */

int __thiscall CREComboBox::SetSelectedByText(CREComboBox *this, wchar_t *a2)
{
  int Item; // eax
  int v5; // eax
  void (__stdcall *v6)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD); // ecx

  if ( !a2 )
    return -2147024809;
  Item = CREComboBox::FindItem(this, a2);
  if ( Item == -1 )
    return -2147467259;
  *((_DWORD *)this + 204) = Item;
  *((_DWORD *)this + 205) = Item;
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
