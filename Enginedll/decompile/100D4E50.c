/*
 * func-name: ??4CTYMenu@@QAEAAV0@ABV0@@Z
 * func-address: 0x100d4e50
 * callers: none
 * callees: 0x100758f0, 0x100d3e00
 */

int __thiscall CTYMenu::operator=(int this, int a2)
{
  CTYDialog::operator=(this, a2);
  sub_100D3E00(this + 3872, a2 + 3872);
  *(_DWORD *)(this + 3888) = *(_DWORD *)(a2 + 3888);
  *(_DWORD *)(this + 3892) = *(_DWORD *)(a2 + 3892);
  *(_DWORD *)(this + 3896) = *(_DWORD *)(a2 + 3896);
  *(_DWORD *)(this + 3900) = *(_DWORD *)(a2 + 3900);
  *(_DWORD *)(this + 3904) = *(_DWORD *)(a2 + 3904);
  *(_DWORD *)(this + 3908) = *(_DWORD *)(a2 + 3908);
  *(_BYTE *)(this + 3912) = *(_BYTE *)(a2 + 3912);
  *(_DWORD *)(this + 3916) = *(_DWORD *)(a2 + 3916);
  *(_DWORD *)(this + 3920) = *(_DWORD *)(a2 + 3920);
  return this;
}
