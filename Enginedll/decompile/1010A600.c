/*
 * func-name: ?GetAnimHandle@Precacher@@SAHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1010a600
 * callers: 0x1010c190
 * callees: 0x1010fd40
 */

int __cdecl Precacher::GetAnimHandle(char a1)
{
  _DWORD *v1; // esi
  _DWORD *v2; // edi
  _DWORD *v3; // ebx
  int v4; // esi
  _DWORD *v6; // [esp+10h] [ebp-14h] BYREF
  _DWORD *v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+20h] [ebp-4h]

  v8 = 0;
  sub_1010FD40(&v6, &a1);
  v1 = v6;
  v2 = dword_1124156C;
  if ( !v6 || v6 != (_DWORD *)&unk_11241568 )
    invalid_parameter_noinfo();
  v3 = v7;
  if ( v7 == v2 )
  {
    v8 = -1;
    std::string::~string(&a1);
    return -1;
  }
  else
  {
    if ( !v1 )
      invalid_parameter_noinfo();
    if ( v3 == (_DWORD *)v1[1] )
      invalid_parameter_noinfo();
    v4 = v3[9];
    v8 = -1;
    std::string::~string(&a1);
    return v4;
  }
}
