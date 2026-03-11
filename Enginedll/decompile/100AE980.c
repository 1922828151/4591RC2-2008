/*
 * func-name: ?GetItemData@CREListCtrl@@QAE_NHAAK@Z
 * func-address: 0x100ae980
 * callers: none
 * callees: 0x100a1b10
 */

char __thiscall CREListCtrl::GetItemData(CREListCtrl *this, unsigned int a2, unsigned int *a3)
{
  int v3; // eax
  _DWORD *v4; // ecx

  if ( (a2 & 0x80000000) != 0 )
    return 0;
  v3 = *((_DWORD *)this + 191);
  v4 = (_DWORD *)((char *)this + 760);
  if ( !v3 || a2 >= (v4[2] - v3) / 20 )
    return 0;
  *a3 = *(_DWORD *)(std::vector<AttributeRange>::operator[](v4, a2) + 16);
  return 1;
}
