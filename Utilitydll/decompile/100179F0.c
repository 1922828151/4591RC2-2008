/*
 * func-name: ?convert@Ascii_To_Wide@Utility@Outpop@@SAPA_WPBD@Z
 * func-address: 0x100179f0
 * callers: 0x100111d0, 0x100112d0, 0x10011380, 0x10011430, 0x100114e0, 0x100115a0, 0x10011650, 0x10011700, 0x10016070, 0x10017a50
 * callees: 0x10018e10
 */

wchar_t *__cdecl Outpop::Utility::Ascii_To_Wide::convert(LPCCH lpMultiByteStr)
{
  UINT ACP; // esi
  int v3; // edi
  WCHAR *v4; // ebx

  if ( !lpMultiByteStr )
    return 0;
  ACP = GetACP();
  v3 = MultiByteToWideChar(ACP, 0, lpMultiByteStr, -1, 0, 0);
  v4 = (WCHAR *)operator new(2 * v3);
  MultiByteToWideChar(ACP, 0, lpMultiByteStr, -1, v4, v3);
  return v4;
}
