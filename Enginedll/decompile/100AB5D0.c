/*
 * func-name: ?RemoveItemByData@CREListBox@@QAEXPAX@Z
 * func-address: 0x100ab5d0
 * callers: none
 * callees: none
 */

void __thiscall CREListBox::RemoveItemByData(CREListBox *this, void *a2)
{
  int v2; // esi
  int v3; // eax
  int i; // edx

  v2 = *((_DWORD *)this + 304);
  v3 = 0;
  if ( v2 > 0 )
  {
    for ( i = *((_DWORD *)this + 303); *(void **)(*(_DWORD *)i + 512) != a2; i += 4 )
    {
      if ( ++v3 >= v2 )
        return;
    }
    CREListBox::RemoveItem(this, v3);
  }
}
