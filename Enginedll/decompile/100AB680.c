/*
 * func-name: ?ApplyFontProperties@CREListBox@@IAEXXZ
 * func-address: 0x100ab680
 * callers: 0x100b1340, 0x100b1360, 0x100b1380, 0x100b13a0, 0x100b37d0
 * callees: none
 */

void __thiscall CREListBox::ApplyFontProperties(CREListBox *this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // eax

  v1 = (_DWORD *)**((_DWORD **)this + 30);
  if ( *((_BYTE *)this + 1240) )
    v1[2] = *((_DWORD *)this + 311);
  v1[1] = *((_DWORD *)this + 306);
  v1[29] = *((_DWORD *)this + 307);
  v2 = *(_DWORD **)(*((_DWORD *)this + 30) + 4);
  if ( *((_BYTE *)this + 1240) )
    v2[2] = *((_DWORD *)this + 311);
  v2[1] = *((_DWORD *)this + 308);
  v2[29] = *((_DWORD *)this + 309);
  *((_BYTE *)this + 1240) = 0;
}
