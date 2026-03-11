/*
 * func-name: ??4CBattleFieldDetailUI@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x102174e0
 * callers: 0x10006929
 * callees: 0x1000961f, 0x1000cd7e
 */

int __thiscall CBattleFieldDetailUI::operator=(int this, int a2)
{
  CTYDialog::operator=(a2);
  *(_DWORD *)(this + 3872) = *(_DWORD *)(a2 + 3872);
  *(_DWORD *)(this + 3876) = *(_DWORD *)(a2 + 3876);
  *(_DWORD *)(this + 3880) = *(_DWORD *)(a2 + 3880);
  *(_DWORD *)(this + 3884) = *(_DWORD *)(a2 + 3884);
  *(_DWORD *)(this + 3888) = *(_DWORD *)(a2 + 3888);
  *(_BYTE *)(this + 3892) = *(_BYTE *)(a2 + 3892);
  *(_BYTE *)(this + 3893) = *(_BYTE *)(a2 + 3893);
  *(_BYTE *)(this + 3894) = *(_BYTE *)(a2 + 3894);
  *(float *)(this + 3896) = *(float *)(a2 + 3896);
  *(_DWORD *)(this + 3900) = *(_DWORD *)(a2 + 3900);
  *(_DWORD *)(this + 3904) = *(_DWORD *)(a2 + 3904);
  *(_DWORD *)(this + 3908) = *(_DWORD *)(a2 + 3908);
  *(_DWORD *)(this + 3912) = *(_DWORD *)(a2 + 3912);
  *(_DWORD *)(this + 3916) = *(_DWORD *)(a2 + 3916);
  *(_DWORD *)(this + 3920) = *(_DWORD *)(a2 + 3920);
  *(_DWORD *)(this + 3924) = *(_DWORD *)(a2 + 3924);
  *(_DWORD *)(this + 3928) = *(_DWORD *)(a2 + 3928);
  *(_DWORD *)(this + 3932) = *(_DWORD *)(a2 + 3932);
  if ( this + 3936 != a2 + 3936 )
    sub_1000961F(a2 + 3936);
  sub_1000CD7E(a2 + 3976);
  *(_DWORD *)(this + 3992) = *(_DWORD *)(a2 + 3992);
  *(_DWORD *)(this + 3996) = *(_DWORD *)(a2 + 3996);
  *(_DWORD *)(this + 4000) = *(_DWORD *)(a2 + 4000);
  return this;
}
