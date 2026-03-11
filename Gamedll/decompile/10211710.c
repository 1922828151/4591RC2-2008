/*
 * func-name: ??4CControlCenterListUI@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x10211710
 * callers: 0x10018935
 * callees: 0x10009d90, 0x1001a113
 */

int __thiscall CControlCenterListUI::operator=(int this, int a2)
{
  CTYDialog::operator=(a2);
  sub_10009D90(a2 + 3872);
  sub_1001A113(a2 + 3888);
  *(_DWORD *)(this + 3904) = *(_DWORD *)(a2 + 3904);
  *(float *)(this + 3908) = *(float *)(a2 + 3908);
  return this;
}
