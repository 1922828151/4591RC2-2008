/*
 * func-name: ??4CTYDialog@@QAEAAV0@ABV0@@Z
 * func-address: 0x100758f0
 * callers: 0x100d4e50
 * callees: 0x1006f570, 0x1006f6d0, 0x10075480
 */

int __thiscall CTYDialog::operator=(int this, int a2)
{
  CREDialog::operator=(this, a2);
  sub_1006F570((_DWORD *)(this + 3752), a2 + 3752);
  *(_BYTE *)(this + 3768) = *(_BYTE *)(a2 + 3768);
  *(_BYTE *)(this + 3769) = *(_BYTE *)(a2 + 3769);
  *(_BYTE *)(this + 3770) = *(_BYTE *)(a2 + 3770);
  *(_BYTE *)(this + 3771) = *(_BYTE *)(a2 + 3771);
  *(_DWORD *)(this + 3772) = *(_DWORD *)(a2 + 3772);
  *(_DWORD *)(this + 3776) = *(_DWORD *)(a2 + 3776);
  *(float *)(this + 3780) = *(float *)(a2 + 3780);
  *(float *)(this + 3784) = *(float *)(a2 + 3784);
  *(_DWORD *)(this + 3788) = *(_DWORD *)(a2 + 3788);
  *(_DWORD *)(this + 3792) = *(_DWORD *)(a2 + 3792);
  *(_DWORD *)(this + 3796) = *(_DWORD *)(a2 + 3796);
  *(_DWORD *)(this + 3800) = *(_DWORD *)(a2 + 3800);
  *(_DWORD *)(this + 3804) = *(_DWORD *)(a2 + 3804);
  *(_DWORD *)(this + 3808) = *(_DWORD *)(a2 + 3808);
  *(_DWORD *)(this + 3812) = *(_DWORD *)(a2 + 3812);
  *(_DWORD *)(this + 3816) = *(_DWORD *)(a2 + 3816);
  sub_1006F6D0(this + 3820, a2 + 3820);
  *(_DWORD *)(this + 3836) = *(_DWORD *)(a2 + 3836);
  std::wstring::operator=(this + 3840, a2 + 3840);
  *(_BYTE *)(this + 3868) = *(_BYTE *)(a2 + 3868);
  return this;
}
