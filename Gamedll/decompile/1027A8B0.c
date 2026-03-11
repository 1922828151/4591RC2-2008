/*
 * func-name: ?SetBackGround@CRadarMapUI@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AAUtagRECT@@@Z_0
 * func-address: 0x1027a8b0
 * callers: 0x1001a0d2
 * callees: none
 */

int __thiscall CRadarMapUI::SetBackGround(_DWORD *this, int a2, int a3)
{
  _DWORD v5[7]; // [esp-20h] [ebp-24h] BYREF
  int v6; // [esp-4h] [ebp-8h]

  v6 = a3;
  std::wstring::wstring(v5, a2);
  return CPictureLabel::ChangeTexture(this[975], v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6);
}
