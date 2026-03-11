/*
 * func-name: ??4COccupyEstabUI@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x101cea10
 * callers: 0x100039fe
 * callees: none
 */

int __thiscall COccupyEstabUI::operator=(int this, int a2)
{
  int result; // eax

  CTYDialog::operator=(a2);
  *(_DWORD *)(this + 3872) = *(_DWORD *)(a2 + 3872);
  *(_DWORD *)(this + 3876) = *(_DWORD *)(a2 + 3876);
  *(_DWORD *)(this + 3880) = *(_DWORD *)(a2 + 3880);
  *(_DWORD *)(this + 3884) = *(_DWORD *)(a2 + 3884);
  *(float *)(this + 3888) = *(float *)(a2 + 3888);
  result = this;
  *(float *)(this + 3892) = *(float *)(a2 + 3892);
  *(float *)(this + 3896) = *(float *)(a2 + 3896);
  *(_BYTE *)(this + 3900) = *(_BYTE *)(a2 + 3900);
  return result;
}
