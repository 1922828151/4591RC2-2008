/*
 * func-name: ??4CPasswordEB@@QAEAAV0@ABV0@@Z
 * func-address: 0x10073fc0
 * callers: none
 * callees: 0x10072f40
 */

int __thiscall CPasswordEB::operator=(int this, int a2)
{
  CREEditBox::operator=(this, a2);
  *(_DWORD *)(this + 792) = *(_DWORD *)(a2 + 792);
  *(_DWORD *)(this + 796) = *(_DWORD *)(a2 + 796);
  *(_DWORD *)(this + 800) = *(_DWORD *)(a2 + 800);
  *(_DWORD *)(this + 804) = *(_DWORD *)(a2 + 804);
  *(_DWORD *)(this + 808) = *(_DWORD *)(a2 + 808);
  *(_DWORD *)(this + 812) = *(_DWORD *)(a2 + 812);
  *(_BYTE *)(this + 816) = *(_BYTE *)(a2 + 816);
  return this;
}
