/*
 * func-name: ?PurgeModelTMP@Precacher@@SAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1010ad30
 * callers: none
 * callees: 0x1010fd40, 0x10110440, 0x1017a2d0, 0x1017a310, 0x1017a610
 */

int __cdecl Precacher::PurgeModelTMP(char a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // edi
  void *v4; // ebp
  _DWORD *v5; // esi
  int v6; // ecx
  int v8; // [esp+10h] [ebp-30h] BYREF
  void *v9; // [esp+14h] [ebp-2Ch]
  _BYTE v10[28]; // [esp+18h] [ebp-28h] BYREF
  int v11; // [esp+3Ch] [ebp-4h]

  v11 = 0;
  v1 = sub_1017A2D0(v10, &a1);
  LOBYTE(v11) = 1;
  std::string::operator=(&a1, v1);
  LOBYTE(v11) = 0;
  std::string::~string(v10);
  v2 = sub_1017A310(v10, &a1);
  LOBYTE(v11) = 2;
  std::string::operator=(&a1, v2);
  LOBYTE(v11) = 0;
  std::string::~string(v10);
  sub_1017A610(&a1);
  sub_1010FD40(&v8, &a1);
  v3 = v8;
  v4 = dword_11241544;
  if ( !v8 || (_UNKNOWN *)v8 != &unk_11241540 )
    invalid_parameter_noinfo();
  v5 = v9;
  if ( v9 != v4 )
  {
    if ( !v3 )
      invalid_parameter_noinfo();
    if ( v5 == *(_DWORD **)(v3 + 4) )
      invalid_parameter_noinfo();
    if ( v5[9] )
    {
      if ( v5 == *(_DWORD **)(v3 + 4) )
        invalid_parameter_noinfo();
      v6 = v5[9];
      if ( v6 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 12))(v6, 1);
      if ( v5 == *(_DWORD **)(v3 + 4) )
        invalid_parameter_noinfo();
      v5[9] = 0;
    }
    sub_10110440((int)&v8, v3, v5);
  }
  v11 = -1;
  return std::string::~string(&a1);
}
