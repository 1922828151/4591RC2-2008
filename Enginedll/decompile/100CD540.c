/*
 * func-name: ?AddComboBox@CREDialog@@QAEJHHHHHI_NPAPAVCREComboBox@@@Z
 * func-address: 0x100cd540
 * callers: none
 * callees: 0x100b3510, 0x100cbcc0, 0x101a2534
 */

int __thiscall CREDialog::AddComboBox(
        CREDialog *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        bool a8,
        struct CREComboBox **a9)
{
  CREComboBox *v10; // eax
  CREComboBox *v11; // esi
  int result; // eax
  void (__thiscall *v13)(CREComboBox *, int, int); // edx

  v10 = (CREComboBox *)operator new(0x6A4u);
  if ( v10 )
    v11 = CREComboBox::CREComboBox(v10, this);
  else
    v11 = 0;
  if ( a9 )
    *a9 = v11;
  if ( !v11 )
    return -2147024882;
  result = CREDialog::AddControl(this, v11);
  if ( result >= 0 )
  {
    v13 = *(void (__thiscall **)(CREComboBox *, int, int))(*(_DWORD *)v11 + 156);
    *((_DWORD *)v11 + 34) = a2;
    v13(v11, a3, a4);
    (*(void (__thiscall **)(CREComboBox *, int, int))(*(_DWORD *)v11 + 160))(v11, a5, a6);
    *((_DWORD *)v11 + 36) = a7;
    *((_BYTE *)v11 + 93) = a8;
    return 0;
  }
  return result;
}
