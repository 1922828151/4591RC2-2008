/*
 * func-name: ?AddTabPagesControl@CREDialog@@QAEJHHHHHPAPAVCRETabPages@@@Z
 * func-address: 0x100cb050
 * callers: none
 * callees: 0x100b3510, 0x100c7df0, 0x101a2534
 */

int __thiscall CREDialog::AddTabPagesControl(
        CREDialog *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        struct CRETabPages **a7)
{
  CRETabPages *v8; // eax
  CRETabPages *v9; // esi
  int result; // eax
  void (__thiscall *v11)(CRETabPages *, int, int); // edx

  v8 = (CRETabPages *)operator new(0x22Cu);
  if ( v8 )
    v9 = CRETabPages::CRETabPages(v8, this);
  else
    v9 = 0;
  if ( a7 )
    *a7 = v9;
  if ( !v9 )
    return -2147024882;
  result = CREDialog::AddControl(this, v9);
  if ( result >= 0 )
  {
    v11 = *(void (__thiscall **)(CRETabPages *, int, int))(*(_DWORD *)v9 + 156);
    *((_DWORD *)v9 + 34) = a2;
    v11(v9, a3, a4);
    (*(void (__thiscall **)(CRETabPages *, int, int))(*(_DWORD *)v9 + 160))(v9, a5, a6);
    return 0;
  }
  return result;
}
