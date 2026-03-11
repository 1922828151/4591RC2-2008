/*
 * func-name: ?AnalyseCommand@CAnalyzeSystem@GameClient@@UAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAHHH@Z_0
 * func-address: 0x101f3740
 * callers: 0x1000c734
 * callees: 0x10002b99
 */

char __thiscall GameClient::CAnalyzeSystem::AnalyseCommand(char *this, int a2, _DWORD *a3, int a4, signed int a5)
{
  int v5; // edi
  char *v6; // esi
  int v7; // eax
  char *v8; // ebx
  int v9; // esi
  int *v10; // esi
  unsigned int i; // edi
  _DWORD *v12; // esi
  _DWORD *v13; // eax
  _DWORD *v14; // ebx
  bool v15; // zf
  int v16; // ecx
  void (__cdecl *v17)(); // esi
  int v18; // esi
  int v20; // [esp-4h] [ebp-2Ch]
  char *v21; // [esp+10h] [ebp-18h] BYREF
  int v22; // [esp+14h] [ebp-14h]
  int v23; // [esp+1Ch] [ebp-Ch]
  char v24[8]; // [esp+20h] [ebp-8h] BYREF

  v5 = a4;
  v6 = this + 4;
  v20 = a4;
  *a3 = -1;
  v7 = std::string::operator[](a2, v20);
  sub_10002B99((int)&v21, v7);
  v8 = v21;
  v23 = *((_DWORD *)v6 + 1);
  if ( !v21 || v21 != v6 )
    _invalid_parameter_noinfo();
  v9 = v22;
  if ( v22 == v23 )
    return 0;
  if ( !v8 )
    _invalid_parameter_noinfo();
  if ( v9 == *((_DWORD *)v8 + 1) )
    _invalid_parameter_noinfo();
  v10 = *(int **)(v9 + 16);
  for ( i = v5 + 1; i < std::string::size(a2); ++i )
  {
    if ( a5 != -1 && (int)i >= a5 || *(_BYTE *)std::string::operator[](a2, i) == 32 )
      break;
    v12 = v10 + 1;
    LOBYTE(a4) = *(_BYTE *)std::string::operator[](a2, i);
    v13 = (_DWORD *)sub_10002B99((int)v24, (int)&a4);
    v14 = (_DWORD *)*v13;
    v15 = *v13 == 0;
    v16 = v12[1];
    v22 = v13[1];
    v23 = v16;
    if ( !v15 && v14 == v12 )
    {
      v17 = _invalid_parameter_noinfo;
    }
    else
    {
      v17 = _invalid_parameter_noinfo;
      _invalid_parameter_noinfo();
    }
    if ( v22 == v23 )
      return 0;
    if ( !v14 )
      v17();
    if ( v22 == v14[1] )
      v17();
    v10 = *(int **)(v22 + 16);
  }
  if ( !v10 )
    return 0;
  v18 = *v10;
  if ( !v18 )
    return 0;
  *a3 = v18;
  return 1;
}
