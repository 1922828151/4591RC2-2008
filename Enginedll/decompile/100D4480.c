/*
 * func-name: ??4CProgressBTN@@QAEAAV0@ABV0@@Z
 * func-address: 0x100d4480
 * callers: none
 * callees: 0x10071a20
 */

int __thiscall CProgressBTN::operator=(int this, int a2)
{
  CREButton::operator=(this, a2);
  *(_DWORD *)(this + 816) = *(_DWORD *)(a2 + 816);
  *(float *)(this + 820) = *(float *)(a2 + 820);
  *(float *)(this + 824) = *(float *)(a2 + 824);
  *(float *)(this + 828) = *(float *)(a2 + 828);
  *(_DWORD *)(this + 832) = *(_DWORD *)(a2 + 832);
  *(_DWORD *)(this + 836) = *(_DWORD *)(a2 + 836);
  *(_DWORD *)(this + 840) = *(_DWORD *)(a2 + 840);
  *(_DWORD *)(this + 844) = *(_DWORD *)(a2 + 844);
  return this;
}
