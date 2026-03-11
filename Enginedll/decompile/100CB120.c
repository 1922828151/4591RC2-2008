/*
 * func-name: ?AddSlider@CREDialog@@QAEJHHHHHHHH_NPAPAVCRESlider@@M@Z
 * func-address: 0x100cb120
 * callers: none
 * callees: 0x1006a920, 0x100aac90, 0x100b3510, 0x100c7850, 0x101a2534
 */

int __thiscall CREDialog::AddSlider(
        CREDialog *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        bool a10,
        struct CRESlider **a11,
        float a12)
{
  CRESlider *v13; // eax
  CRESlider *v14; // esi
  int result; // eax
  void (__thiscall *v16)(CRESlider *, int, int); // edx

  v13 = (CRESlider *)operator new(0x27Cu);
  if ( v13 )
    v14 = CRESlider::CRESlider(v13, this);
  else
    v14 = 0;
  if ( a11 )
    *a11 = v14;
  if ( !v14 )
    return -2147024882;
  result = CREDialog::AddControl(this, v14);
  if ( result >= 0 )
  {
    v16 = *(void (__thiscall **)(CRESlider *, int, int))(*(_DWORD *)v14 + 156);
    *((_DWORD *)v14 + 34) = a2;
    v16(v14, a3, a4);
    (*(void (__thiscall **)(CRESlider *, int, int))(*(_DWORD *)v14 + 160))(v14, a5, a6);
    *((_BYTE *)v14 + 93) = a10;
    CRESlider::SetRange(v14, a7, a8);
    CRESlider::SetValue(v14, a9);
    *((float *)v14 + 133) = a12;
    return 0;
  }
  return result;
}
