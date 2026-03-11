/*
 * func-name: ??4CGroupMemberUI@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1025b6d0
 * callers: 0x10008008
 * callees: 0x10001a7d
 */

int __thiscall CGroupMemberUI::operator=(int this, int a2)
{
  CTYDialog::operator=(a2);
  sub_10001A7D(a2 + 3872);
  *(_DWORD *)(this + 3888) = *(_DWORD *)(a2 + 3888);
  *(_DWORD *)(this + 3892) = *(_DWORD *)(a2 + 3892);
  *(_DWORD *)(this + 3896) = *(_DWORD *)(a2 + 3896);
  *(float *)(this + 3900) = *(float *)(a2 + 3900);
  return this;
}
