/*
 * func-name: ?GetFontInfo@GUISystem@@QAEPAUFontInfo@@W4FONT_TYPE@@@Z
 * func-address: 0x100d6ae0
 * callers: 0x100b7400
 * callees: 0x100d7d30
 */

int __thiscall GUISystem::GetFontInfo(_DWORD *this, int a2)
{
  int v2; // eax
  _DWORD *v3; // ecx

  if ( a2 >= 0 && (v2 = this[15], v3 = this + 14, v2) && a2 < (unsigned int)((v3[2] - v2) / 36) )
    return sub_100D7D30(a2);
  else
    return 0;
}
