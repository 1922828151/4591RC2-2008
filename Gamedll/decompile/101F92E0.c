/*
 * func-name: ?UpdateCorpMemberInfo@GroupManager@GameClient@@QAEXABV?$vector@V?$vector@UGroupMemberInfo@@V?$allocator@UGroupMemberInfo@@@std@@@std@@V?$allocator@V?$vector@UGroupMemberInfo@@V?$allocator@UGroupMemberInfo@@@std@@@std@@@2@@std@@@Z_0
 * func-address: 0x101f92e0
 * callers: 0x1001665d
 * callees: 0x10002289, 0x100042f0, 0x100050c9, 0x10008c29, 0x1000bbc2, 0x10011fc2
 */

unsigned int __thiscall GameClient::GroupManager::UpdateCorpMemberInfo(char *this, int a2)
{
  char *v2; // esi
  char *v3; // edi
  int v4; // ebx
  unsigned int v5; // ebp
  unsigned int result; // eax
  int v7; // ecx
  int v8; // esi
  unsigned int v9; // edi
  int v10; // ebx
  int v11; // ecx
  int v12; // ecx
  int v13; // ebp
  int v14; // [esp+10h] [ebp-10h]
  _DWORD v15[3]; // [esp+14h] [ebp-Ch] BYREF

  v2 = this + 124;
  v3 = this + 128;
  v15[2] = this + 124;
  sub_10002289();
  v15[1] = *((_DWORD *)v3 + 1);
  v15[0] = v3;
  sub_1000BBC2(9, (int)v15);
  v4 = a2;
  v5 = 0;
  *((_DWORD *)v2 + 8) = 1;
  *((_DWORD *)v2 + 9) = 1;
  v15[0] = 0;
  result = sub_10008C29();
  if ( result )
  {
    v14 = 0;
    do
    {
      v7 = *(_DWORD *)(v4 + 4);
      if ( !v7 || v5 >= (*(_DWORD *)(v4 + 8) - v7) >> 4 )
        _invalid_parameter_noinfo();
      v8 = v14 + *(_DWORD *)(v4 + 4);
      v9 = 0;
      if ( sub_100050C9() )
      {
        v10 = 0;
        do
        {
          v11 = *(_DWORD *)(v8 + 4);
          if ( !v11 || v9 >= (*(_DWORD *)(v8 + 8) - v11) >> 7 )
            _invalid_parameter_noinfo();
          v12 = *(_DWORD *)(v8 + 4);
          v13 = v10 + v12;
          if ( !v12 || v9 >= (*(_DWORD *)(v8 + 8) - v12) >> 7 )
            _invalid_parameter_noinfo();
          sub_100042F0(v10 + *(_DWORD *)(v8 + 4));
          sub_10011FC2(v13);
          ++v9;
          v10 += 128;
        }
        while ( v9 < sub_100050C9() );
        v5 = v15[0];
        v4 = a2;
      }
      v14 += 16;
      v15[0] = ++v5;
      result = sub_10008C29();
    }
    while ( v5 < result );
  }
  return result;
}
