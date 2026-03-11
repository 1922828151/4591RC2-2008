/*
 * func-name: ?AddTabControl@CREDialog@@QAEJHPB_WHHHHPAPAVCREab@@@Z
 * func-address: 0x100cd200
 * callers: 0x100cd620, 0x100cd7f0
 * callees: 0x100b3510, 0x100cbe90, 0x101a2534
 */

int __thiscall CREDialog::AddTabControl(
        CREDialog *this,
        int a2,
        const wchar_t *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct CREab **a8)
{
  void *v9; // eax
  int v10; // esi
  int result; // eax
  int v12; // ecx

  v9 = operator new(0x2CCu);
  if ( v9 )
    v10 = sub_100CBE90((int)v9, (int)this);
  else
    v10 = 0;
  if ( a8 )
    *a8 = (struct CREab *)v10;
  if ( !v10 )
    return -2147024882;
  result = CREDialog::AddControl(this, (struct CREControl *)v10);
  if ( result >= 0 )
  {
    *(_DWORD *)(v10 + 136) = a2;
    v12 = v10 + 532;
    if ( a3 )
      std::wstring::operator=(v12, a3);
    else
      std::wstring::clear(v12);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 156))(v10, a4, a5);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 160))(v10, a6, a7);
    return 0;
  }
  return result;
}
