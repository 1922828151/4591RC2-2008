/*
 * func-name: ?AddButton@CREDialog@@QAEJHPB_WHHHHI_NPAPAVCREButton@@@Z
 * func-address: 0x100cd100
 * callers: none
 * callees: 0x100b3510, 0x100cb5e0, 0x101a2534
 */

int __thiscall CREDialog::AddButton(
        CREDialog *this,
        int a2,
        const wchar_t *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        bool a9,
        struct CREButton **a10)
{
  CREButton *v11; // eax
  CREButton *v12; // esi
  int result; // eax
  char *v14; // ecx

  v11 = (CREButton *)operator new(0x330u);
  if ( v11 )
    v12 = CREButton::CREButton(v11, this);
  else
    v12 = 0;
  if ( a10 )
    *a10 = v12;
  if ( !v12 )
    return -2147024882;
  result = CREDialog::AddControl(this, v12);
  if ( result >= 0 )
  {
    *((_DWORD *)v12 + 34) = a2;
    v14 = (char *)v12 + 532;
    if ( a3 )
      std::wstring::operator=(v14, a3);
    else
      std::wstring::clear(v14);
    (*(void (__thiscall **)(CREButton *, int, int))(*(_DWORD *)v12 + 156))(v12, a4, a5);
    (*(void (__thiscall **)(CREButton *, int, int))(*(_DWORD *)v12 + 160))(v12, a6, a7);
    *((_DWORD *)v12 + 36) = a8;
    *((_BYTE *)v12 + 93) = a9;
    return 0;
  }
  return result;
}
