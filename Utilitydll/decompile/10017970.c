/*
 * func-name: ?convert@Wide_To_Ascii@Utility@Outpop@@SAPADPB_W@Z
 * func-address: 0x10017970
 * callers: 0x100021d0, 0x10011100, 0x100111d0, 0x100179d0
 * callees: 0x10018e10
 */

char *__cdecl Outpop::Utility::Wide_To_Ascii::convert(LPCWCH lpWideCharStr)
{
  UINT ACP; // esi
  int v3; // edi
  CHAR *v4; // ebx

  if ( !lpWideCharStr )
    return 0;
  ACP = GetACP();
  v3 = WideCharToMultiByte(ACP, 0, lpWideCharStr, -1, 0, 0, 0, 0);
  v4 = (CHAR *)operator new(v3);
  WideCharToMultiByte(ACP, 0, lpWideCharStr, -1, v4, v3, 0, 0);
  return v4;
}
