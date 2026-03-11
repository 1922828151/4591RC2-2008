/*
 * func-name: ?AddCheckBox@CREDialog@@QAEJHPB_WHHHH_NI1PAPAVCRECheckBox@@@Z
 * func-address: 0x100cd2f0
 * callers: none
 * callees: 0x100b3510, 0x100cbba0, 0x101a2534
 */

int __thiscall CREDialog::AddCheckBox(
        CREDialog *this,
        int a2,
        const wchar_t *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        bool a10,
        struct CRECheckBox **a11)
{
  CRECheckBox *v12; // eax
  CRECheckBox *v13; // esi
  int result; // eax
  char *v15; // ecx
  int v16; // eax

  v12 = (CRECheckBox *)operator new(0x354u);
  if ( v12 )
    v13 = CRECheckBox::CRECheckBox(v12, this);
  else
    v13 = 0;
  if ( a11 )
    *a11 = v13;
  if ( !v13 )
    return -2147024882;
  result = CREDialog::AddControl(this, v13);
  if ( result >= 0 )
  {
    *((_DWORD *)v13 + 34) = a2;
    v15 = (char *)v13 + 532;
    if ( a3 )
      std::wstring::operator=(v15, a3);
    else
      std::wstring::clear(v15);
    (*(void (__thiscall **)(CRECheckBox *, int, int))(*(_DWORD *)v13 + 156))(v13, a4, a5);
    (*(void (__thiscall **)(CRECheckBox *, int, int))(*(_DWORD *)v13 + 160))(v13, a6, a7);
    v16 = *(_DWORD *)v13;
    *((_DWORD *)v13 + 36) = a9;
    *((_BYTE *)v13 + 93) = a10;
    (*(void (__thiscall **)(CRECheckBox *, int, _DWORD))(v16 + 208))(v13, a8, 0);
    return 0;
  }
  return result;
}
