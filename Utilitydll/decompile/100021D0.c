/*
 * func-name: ?enable_file@Logger@Utility@Outpop@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z
 * func-address: 0x100021d0
 * callers: 0x10016070
 * callees: 0x10017970, 0x10018c31, 0x10018cf2
 */

void __thiscall Outpop::Utility::Logger::enable_file(int this, int a2)
{
  const WCHAR *v3; // eax
  CHAR *v4; // [esp+10h] [ebp-A4h]
  _OFSTRUCT ReOpenBuff; // [esp+14h] [ebp-A0h] BYREF
  int v6; // [esp+B0h] [ebp-4h]

  if ( *(_DWORD *)(a2 + 24) < 8u )
    v3 = (const WCHAR *)(a2 + 4);
  else
    v3 = *(const WCHAR **)(a2 + 4);
  v4 = Outpop::Utility::Wide_To_Ascii::convert(v3);
  v6 = 0;
  *(_DWORD *)(this + 44) = OpenFile(v4, &ReOpenBuff, 0x1000u);
  v6 = -1;
  operator delete(v4);
  *(_BYTE *)(this + 137) = 1;
}
