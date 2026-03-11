/*
 * func-name: ?ApplyFontProperties@CREComboBox@@MAEXXZ
 * func-address: 0x100aa430
 * callers: none
 * callees: none
 */

void __thiscall CREComboBox::ApplyFontProperties(CREComboBox *this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v2 = **((_DWORD **)this + 30);
  *(_DWORD *)(v2 + 4) = *((_DWORD *)this + 140);
  qmemcpy((void *)(v2 + 116), (char *)this + 564, 0x50u);
  v3 = *(_DWORD *)(*((_DWORD *)this + 30) + 4);
  *(_DWORD *)(v3 + 4) = *((_DWORD *)this + 140);
  qmemcpy((void *)(v3 + 116), (char *)this + 696, 0x50u);
  v4 = *(_DWORD *)(*((_DWORD *)this + 30) + 8);
  *(_DWORD *)(v4 + 4) = *((_DWORD *)this + 383);
  qmemcpy((void *)(v4 + 116), (char *)this + 1536, 0x50u);
  v5 = *(_DWORD *)(*((_DWORD *)this + 30) + 12);
  *(_DWORD *)(v5 + 4) = *((_DWORD *)this + 404);
  qmemcpy((void *)(v5 + 116), (char *)this + 1620, 0x50u);
}
