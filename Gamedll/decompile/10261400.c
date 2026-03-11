/*
 * func-name: sub_10261400
 * func-address: 0x10261400
 * callers: 0x10018eee
 * callees: 0x1000194c, 0x10003e27, 0x10004101, 0x100050c9, 0x1000d3aa, 0x10014f6a, 0x10017c29, 0x10018ce6
 */

unsigned int __thiscall sub_10261400(_DWORD *this, POINT pt)
{
  unsigned int v3; // ebx
  unsigned int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edi
  GameClient::GroupManager *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edi
  GameClient::GroupManager *v13; // eax
  int v14; // eax
  _DWORD *v15; // edi
  int v16; // ebx
  int v17; // ebp
  unsigned int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  GameClient::GroupManager *v22; // eax
  GameClient::GroupManager *v23; // eax
  unsigned int v24; // [esp-Ch] [ebp-40h]
  unsigned int v25; // [esp-Ch] [ebp-40h]
  int i; // [esp+8h] [ebp-2Ch]
  unsigned int v27; // [esp+Ch] [ebp-28h]
  struct GameClient::LocalCharacter *v28; // [esp+10h] [ebp-24h]
  int v29; // [esp+14h] [ebp-20h]
  int v30; // [esp+18h] [ebp-1Ch]
  _DWORD *v31; // [esp+1Ch] [ebp-18h] BYREF
  int v32; // [esp+20h] [ebp-14h]
  struct tagRECT rc; // [esp+24h] [ebp-10h] BYREF

  v3 = 0;
  result = sub_1000194C(0);
  v28 = (struct GameClient::LocalCharacter *)result;
  if ( result )
  {
    v27 = 0;
    for ( i = 0; ; i += 44 )
    {
      result = this[146];
      if ( !result )
        break;
      result = (int)(this[147] - result) / 44;
      if ( v3 >= result )
        break;
      v5 = this[146];
      if ( !v5 || v3 >= (this[147] - v5) / 44 )
        _invalid_parameter_noinfo();
      v6 = this[146];
      if ( pt.y > *(_DWORD *)(i + v6 + 32) )
      {
        if ( !v6 || v3 >= (this[147] - v6) / 44 )
          _invalid_parameter_noinfo();
        v7 = this[146];
        v8 = i + v7;
        if ( !v7 || v3 >= (this[147] - v7) / 44 )
          _invalid_parameter_noinfo();
        SetRect(&rc, 211, *(_DWORD *)(this[146] + i + 32) + 1, 271, *(_DWORD *)(v8 + 32) + 23);
        if ( PtInRect(&rc, pt) )
        {
          v9 = GameClient::GroupManager::Instance();
          GameClient::GroupManager::RequestDismiss(v9, v28);
        }
        v10 = this[146];
        if ( !v10 || v3 >= (this[147] - v10) / 44 )
          _invalid_parameter_noinfo();
        v11 = this[146];
        v12 = i + v11;
        if ( !v11 || v3 >= (this[147] - v11) / 44 )
          _invalid_parameter_noinfo();
        SetRect(&rc, 272, *(_DWORD *)(i + this[146] + 32) + 1, 332, *(_DWORD *)(v12 + 32) + 23);
        if ( PtInRect(&rc, pt) )
        {
          v13 = GameClient::GroupManager::Instance();
          GameClient::GroupManager::RequestLeaveGroup(v13, v28);
        }
      }
      v14 = this[146];
      if ( !v14 || v3 >= (this[147] - v14) / 44 )
        _invalid_parameter_noinfo();
      sub_1000D3AA((int)&v31, i + this[146] + 28);
      v15 = v31;
      v16 = this[151];
      if ( !v31 || v31 != this + 150 )
        _invalid_parameter_noinfo();
      v17 = v32;
      if ( v32 != v16 )
      {
        if ( !v15 )
          _invalid_parameter_noinfo();
        if ( v17 == v15[1] )
          _invalid_parameter_noinfo();
        v18 = 0;
        if ( sub_100050C9() )
        {
          v29 = 0;
          v30 = 0;
          do
          {
            v19 = this[146];
            if ( !v19 || v27 >= (this[147] - v19) / 44 )
              _invalid_parameter_noinfo();
            SetRect(&rc, 272, v30 + *(_DWORD *)(this[146] + i + 36), 332, v30 + *(_DWORD *)(this[146] + i + 36) + 22);
            if ( PtInRect(&rc, pt) )
            {
              v20 = this[146];
              if ( !v20 || v27 >= (this[147] - v20) / 44 )
                _invalid_parameter_noinfo();
              v21 = *(_DWORD *)(v17 + 16);
              if ( *(_DWORD *)(this[146] + i + 28) )
              {
                if ( !v21 || v18 >= (*(_DWORD *)(v17 + 20) - v21) >> 7 )
                  _invalid_parameter_noinfo();
                v25 = *(_DWORD *)(v29 + *(_DWORD *)(v17 + 16));
                v23 = GameClient::GroupManager::Instance();
                GameClient::GroupManager::RequestRemoveMember(v23, v28, v25);
              }
              else
              {
                if ( !v21 || v18 >= (*(_DWORD *)(v17 + 20) - v21) >> 7 )
                  _invalid_parameter_noinfo();
                v24 = *(_DWORD *)(v29 + *(_DWORD *)(v17 + 16));
                v22 = GameClient::GroupManager::Instance();
                GameClient::GroupManager::RequestInviteMember(v22, v28, v24);
              }
            }
            v30 += 24;
            v29 += 128;
            ++v18;
          }
          while ( v18 < sub_100050C9() );
        }
      }
      v3 = ++v27;
    }
  }
  return result;
}
