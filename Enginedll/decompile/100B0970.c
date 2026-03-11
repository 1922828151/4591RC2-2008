/*
 * func-name: ?GetItemData@CREComboBox@@QAEPAXPB_W@Z
 * func-address: 0x100b0970
 * callers: none
 * callees: 0x100aa770
 */

void *__thiscall CREComboBox::GetItemData(CREComboBox *this, wchar_t *a2)
{
  int Item; // eax
  int v5; // eax

  Item = CREComboBox::FindItem(this, a2);
  if ( Item == -1 )
    return 0;
  v5 = *(_DWORD *)(*((_DWORD *)this + 380) + 4 * Item);
  if ( !v5 )
    return 0;
  else
    return *(void **)(v5 + 512);
}
