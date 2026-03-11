/*
 * func-name: ?GetSelectedData@CREComboBox@@QAEPAXXZ
 * func-address: 0x100aa730
 * callers: none
 * callees: none
 */

void *__thiscall CREComboBox::GetSelectedData(CREComboBox *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 204);
  if ( v1 >= 0 )
    return *(void **)(*(_DWORD *)(*((_DWORD *)this + 380) + 4 * v1) + 512);
  else
    return 0;
}
