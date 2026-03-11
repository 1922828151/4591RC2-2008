/*
 * func-name: ??4CMultiLineEB@@QAEAAV0@ABV0@@Z
 * func-address: 0x100733c0
 * callers: 0x10074580
 * callees: 0x1000d9a0, 0x1006e4d0, 0x10072f40
 */

int __thiscall CMultiLineEB::operator=(int this, int a2)
{
  CREEditBox::operator=(this, a2);
  *(_DWORD *)(this + 792) = *(_DWORD *)(a2 + 792);
  *(_DWORD *)(this + 796) = *(_DWORD *)(a2 + 796);
  *(_DWORD *)(this + 800) = *(_DWORD *)(a2 + 800);
  *(_DWORD *)(this + 804) = *(_DWORD *)(a2 + 804);
  *(_DWORD *)(this + 808) = *(_DWORD *)(a2 + 808);
  *(_DWORD *)(this + 812) = *(_DWORD *)(a2 + 812);
  *(_DWORD *)(this + 816) = *(_DWORD *)(a2 + 816);
  *(_DWORD *)(this + 820) = *(_DWORD *)(a2 + 820);
  *(_DWORD *)(this + 824) = *(_DWORD *)(a2 + 824);
  *(_DWORD *)(this + 828) = *(_DWORD *)(a2 + 828);
  *(_DWORD *)(this + 832) = *(_DWORD *)(a2 + 832);
  *(_DWORD *)(this + 836) = *(_DWORD *)(a2 + 836);
  *(_DWORD *)(this + 840) = *(_DWORD *)(a2 + 840);
  *(_DWORD *)(this + 844) = *(_DWORD *)(a2 + 844);
  *(_DWORD *)(this + 848) = *(_DWORD *)(a2 + 848);
  *(_DWORD *)(this + 852) = *(_DWORD *)(a2 + 852);
  *(_BYTE *)(this + 856) = *(_BYTE *)(a2 + 856);
  sub_1000D9A0(this + 860, a2 + 860);
  sub_1000D9A0(this + 876, a2 + 876);
  sub_1006E4D0(this + 892, a2 + 892);
  return this;
}
