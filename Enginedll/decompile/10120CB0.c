/*
 * func-name: ?GetShader@ShaderManager@@QAEPAVShader@@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10120cb0
 * callers: 0x100e68a0
 * callees: 0x10097220, 0x1017a310, 0x1017a670
 */

int __thiscall ShaderManager::GetShader(_DWORD *this, int a2)
{
  int v3; // eax
  unsigned int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  char v9; // bl
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  unsigned int v14; // [esp+10h] [ebp-84h]
  int i; // [esp+14h] [ebp-80h]
  _BYTE v16[28]; // [esp+18h] [ebp-7Ch] BYREF
  _BYTE v17[28]; // [esp+34h] [ebp-60h] BYREF
  _BYTE v18[28]; // [esp+50h] [ebp-44h] BYREF
  _BYTE v19[28]; // [esp+6Ch] [ebp-28h] BYREF
  int v20; // [esp+90h] [ebp-4h]

  FindMedia(a2, (int)"Shaders", 0, 0);
  v3 = sub_1017A310(v16, a2);
  v20 = 0;
  std::string::operator=(a2, v3);
  v20 = -1;
  std::string::~string(v16);
  v4 = 0;
  v14 = 0;
  for ( i = 0; ; i += 32 )
  {
    v5 = this[30];
    if ( !v5 || v4 >= (this[31] - v5) >> 5 )
      return 0;
    v6 = sub_1017A310(v19, i + this[30]);
    v20 = 1;
    v7 = sub_1017A670(v18, v6);
    LOBYTE(v20) = 2;
    v8 = sub_1017A670(v17, a2);
    LOBYTE(v20) = 3;
    v9 = std::operator==<char>(v8, v7);
    LOBYTE(v20) = 2;
    std::string::~string(v17);
    LOBYTE(v20) = 1;
    std::string::~string(v18);
    v20 = -1;
    std::string::~string(v19);
    if ( v9 )
      break;
    v4 = ++v14;
  }
  v10 = this[30];
  if ( !v10 || v14 >= (this[31] - v10) >> 5 )
    invalid_parameter_noinfo();
  v11 = *(_DWORD *)(this[30] + 32 * v14 + 28);
  ++*(_DWORD *)(v11 + 4);
  v12 = this[30];
  if ( !v12 || v14 >= (this[31] - v12) >> 5 )
    invalid_parameter_noinfo();
  return *(_DWORD *)(this[30] + 32 * v14 + 28);
}
