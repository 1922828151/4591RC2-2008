/*
 * func-name: ?OnMemberCall@CGroupMemberUI@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x10270ce0
 * callers: 0x100092f5
 * callees: 0x1000194c, 0x10004665, 0x10017c29
 */

unsigned int __thiscall CGroupMemberUI::OnMemberCall(_DWORD *this, int a2)
{
  unsigned int result; // eax
  GameClient::GroupManager *v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // edi
  int i; // ebp
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // [esp-8h] [ebp-10h]
  unsigned int v19; // [esp+4h] [ebp-4h]
  int v20; // [esp+Ch] [ebp+4h]
  float v21; // [esp+Ch] [ebp+4h]

  result = sub_1000194C(0);
  if ( result )
  {
    result = *(_DWORD *)(result + 216);
    if ( result )
    {
      v18 = result;
      v4 = GameClient::GroupManager::Instance();
      result = (unsigned int)GameClient::GroupManager::GetGroup(v4, v18);
      v5 = result;
      if ( result )
      {
        v6 = 0;
        for ( i = 0; ; i += 84 )
        {
          result = *(_DWORD *)(v5 + 16);
          if ( !result )
            break;
          result = (int)(*(_DWORD *)(v5 + 20) - result) / 84;
          if ( v6 >= result )
            break;
          v8 = *(_DWORD *)(v5 + 16);
          if ( !v8 || v6 >= (*(_DWORD *)(v5 + 20) - v8) / 84 )
            _invalid_parameter_noinfo();
          if ( (unsigned __int8)std::operator==<char>(i + *(_DWORD *)(v5 + 16) + 4, a2) )
          {
            v19 = v6;
            v9 = 0;
            v20 = 0;
            while ( 1 )
            {
              result = this[969];
              if ( !result )
                break;
              result = (int)(this[970] - result) / 80;
              if ( v9 >= result )
                break;
              v10 = this[969];
              if ( !v10 || v9 >= (this[970] - v10) / 80 )
                _invalid_parameter_noinfo();
              v11 = *(_DWORD *)(v5 + 16);
              v12 = v20 + this[969];
              if ( !v11 || v19 >= (*(_DWORD *)(v5 + 20) - v11) / 84 )
                _invalid_parameter_noinfo();
              if ( *(_DWORD *)(v12 + 16) == *(_DWORD *)(84 * v19 + *(_DWORD *)(v5 + 16) + 32) )
              {
                v13 = this[969];
                if ( !v13 || v9 >= (this[970] - v13) / 80 )
                  _invalid_parameter_noinfo();
                v14 = v20;
                *(_BYTE *)(this[969] + v20 + 1) = 1;
                v15 = this[969];
                if ( !v15 || v9 >= (this[970] - v15) / 80 )
                  _invalid_parameter_noinfo();
                *(float *)(this[969] + v20 + 4) = *(float *)&GSeconds;
                v16 = this[969];
                if ( !v16 || v9 >= (this[970] - v16) / 80 )
                  _invalid_parameter_noinfo();
                v21 = *(float *)&GSeconds + 30.0;
                *(float *)(this[969] + v14 + 8) = v21;
                v17 = this[969];
                if ( !v17 || v9 >= (this[970] - v17) / 80 )
                  _invalid_parameter_noinfo();
                *(float *)(this[969] + v14 + 12) = 0.5;
                ++v9;
                v20 = v14 + 80;
              }
              else
              {
                ++v9;
                v20 += 80;
              }
            }
            return result;
          }
          ++v6;
        }
      }
    }
  }
  return result;
}
