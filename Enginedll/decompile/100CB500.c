/*
 * func-name: ?AddPropertiesList@CREDialog@@QAEJHHHHHKPAPAVCREPropertiesList@@@Z
 * func-address: 0x100cb500
 * callers: none
 * callees: 0x100b3510, 0x100c7e50, 0x101a2534
 */

int __thiscall CREDialog::AddPropertiesList(
        CREDialog *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        struct CREPropertiesList **a8)
{
  CREPropertiesList *v9; // eax
  CREPropertiesList *v10; // esi
  int result; // eax
  void (__thiscall *v12)(CREPropertiesList *, int, int); // edx

  v9 = (CREPropertiesList *)operator new(0x4D0u);
  if ( v9 )
    v10 = CREPropertiesList::CREPropertiesList(v9, this);
  else
    v10 = 0;
  if ( a8 )
    *a8 = v10;
  if ( !v10 )
    return -2147024882;
  result = CREDialog::AddControl(this, v10);
  if ( result >= 0 )
  {
    v12 = *(void (__thiscall **)(CREPropertiesList *, int, int))(*(_DWORD *)v10 + 156);
    *((_DWORD *)v10 + 34) = a2;
    v12(v10, a3, a4);
    (*(void (__thiscall **)(CREPropertiesList *, int, int))(*(_DWORD *)v10 + 160))(v10, a5, a6);
    *((_DWORD *)v10 + 299) = a7;
    return 0;
  }
  return result;
}
