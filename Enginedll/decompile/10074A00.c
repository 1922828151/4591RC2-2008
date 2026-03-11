/*
 * func-name: ??4CTYChatIME@@QAEAAV0@ABV0@@Z
 * func-address: 0x10074a00
 * callers: none
 * callees: 0x100735f0
 */

_DWORD *__thiscall CTYChatIME::operator=(_DWORD *this, _DWORD *a2)
{
  CREIMEEditBox::operator=(this, a2);
  std::wstring::operator=(this + 220, a2 + 220);
  this[227] = a2[227];
  this[228] = a2[228];
  this[229] = a2[229];
  this[230] = a2[230];
  this[231] = a2[231];
  this[232] = a2[232];
  this[233] = a2[233];
  this[234] = a2[234];
  this[235] = a2[235];
  this[236] = a2[236];
  this[237] = a2[237];
  return this;
}
