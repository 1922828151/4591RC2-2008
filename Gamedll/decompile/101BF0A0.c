/*
 * func-name: ??4CPowerTransportUI@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x101bf0a0
 * callers: 0x1000ebd8
 * callees: none
 */

int __thiscall CPowerTransportUI::operator=(int this, int a2)
{
  CTYDialog::operator=(a2);
  *(_DWORD *)(this + 3872) = *(_DWORD *)(a2 + 3872);
  *(_DWORD *)(this + 3876) = *(_DWORD *)(a2 + 3876);
  *(_DWORD *)(this + 3880) = *(_DWORD *)(a2 + 3880);
  *(float *)(this + 3884) = *(float *)(a2 + 3884);
  return this;
}
