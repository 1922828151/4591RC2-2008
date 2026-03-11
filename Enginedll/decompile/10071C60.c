/*
 * func-name: ??4CRECheckBox@@QAEAAV0@ABV0@@Z
 * func-address: 0x10071c60
 * callers: 0x10071d10, 0x100740b0
 * callees: 0x10071a20
 */

int __thiscall CRECheckBox::operator=(int this, int a2)
{
  CREButton::operator=(this, a2);
  *(_BYTE *)(this + 816) = *(_BYTE *)(a2 + 816);
  *(_DWORD *)(this + 820) = *(_DWORD *)(a2 + 820);
  *(_DWORD *)(this + 824) = *(_DWORD *)(a2 + 824);
  *(_DWORD *)(this + 828) = *(_DWORD *)(a2 + 828);
  *(_DWORD *)(this + 832) = *(_DWORD *)(a2 + 832);
  *(_DWORD *)(this + 836) = *(_DWORD *)(a2 + 836);
  *(_DWORD *)(this + 840) = *(_DWORD *)(a2 + 840);
  *(_DWORD *)(this + 844) = *(_DWORD *)(a2 + 844);
  *(_DWORD *)(this + 848) = *(_DWORD *)(a2 + 848);
  return this;
}
