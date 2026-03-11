/*
 * func-name: ?AddStatic@CREDialog@@QAEJHPB_WHHHH_NPAPAVCREStatic@@@Z
 * func-address: 0x100caf60
 * callers: none
 * callees: 0x100b3510, 0x100c7520, 0x101a2534
 */

int __thiscall CREDialog::AddStatic(
        CREDialog *this,
        int a2,
        const wchar_t *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        bool a8,
        struct CREStatic **a9)
{
  CREStatic *v10; // eax
  CREStatic *v11; // esi
  int result; // eax
  char *v13; // ecx

  v10 = (CREStatic *)operator new(0x2B8u);
  if ( v10 )
    v11 = CREStatic::CREStatic(v10, this);
  else
    v11 = 0;
  if ( a9 )
    *a9 = v11;
  if ( !v11 )
    return -2147024882;
  result = CREDialog::AddControl(this, v11);
  if ( result >= 0 )
  {
    *((_DWORD *)v11 + 34) = a2;
    v13 = (char *)v11 + 532;
    if ( a3 )
      std::wstring::operator=(v13, a3);
    else
      std::wstring::clear(v13);
    (*(void (__thiscall **)(CREStatic *, int, int))(*(_DWORD *)v11 + 156))(v11, a4, a5);
    (*(void (__thiscall **)(CREStatic *, int, int))(*(_DWORD *)v11 + 160))(v11, a6, a7);
    *((_BYTE *)v11 + 93) = a8;
    return 0;
  }
  return result;
}
