/*
 * func-name: ?AddRadioButton@CREDialog@@QAEJHIPB_WHHHH_NI1PAPAVCRERadioButton@@@Z
 * func-address: 0x100cd400
 * callers: none
 * callees: 0x100b3510, 0x100cbba0, 0x101a2534
 */

int __thiscall CREDialog::AddRadioButton(
        CREDialog *this,
        int a2,
        unsigned int a3,
        const wchar_t *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10,
        bool a11,
        struct CRERadioButton **a12)
{
  CRECheckBox *v13; // eax
  CRECheckBox *v14; // esi
  int result; // eax
  char *v16; // ecx
  void (__thiscall *v17)(CRECheckBox *, int, int); // edx
  void (__thiscall *v18)(CRECheckBox *, int, int, _DWORD); // eax
  void (__thiscall *v19)(CRECheckBox *, int, int, _DWORD); // eax

  v13 = (CRECheckBox *)operator new(0x358u);
  v14 = v13;
  if ( v13 )
  {
    CRECheckBox::CRECheckBox(v13, 0);
    *(_DWORD *)v14 = &CRERadioButton::`vftable';
    *((_DWORD *)v14 + 35) = 4;
    *((_DWORD *)v14 + 28) = this;
  }
  else
  {
    v14 = 0;
  }
  if ( a12 )
    *a12 = v14;
  if ( !v14 )
    return -2147024882;
  result = CREDialog::AddControl(this, v14);
  if ( result >= 0 )
  {
    *((_DWORD *)v14 + 34) = a2;
    v16 = (char *)v14 + 532;
    if ( a4 )
      std::wstring::operator=(v16, a4);
    else
      std::wstring::clear(v16);
    v17 = *(void (__thiscall **)(CRECheckBox *, int, int))(*(_DWORD *)v14 + 156);
    *((_DWORD *)v14 + 213) = a3;
    v17(v14, a5, a6);
    (*(void (__thiscall **)(CRECheckBox *, int, int))(*(_DWORD *)v14 + 160))(v14, a7, a8);
    v18 = *(void (__thiscall **)(CRECheckBox *, int, int, _DWORD))(*(_DWORD *)v14 + 212);
    *((_DWORD *)v14 + 36) = a10;
    v18(v14, a9, 1, 0);
    v19 = *(void (__thiscall **)(CRECheckBox *, int, int, _DWORD))(*(_DWORD *)v14 + 212);
    *((_BYTE *)v14 + 93) = a11;
    v19(v14, a9, 1, 0);
    return 0;
  }
  return result;
}
