/*
 * func-name: ?Dismiss@GroupManager@GameClient@@QAEXK@Z_0
 * func-address: 0x101f9400
 * callers: 0x1001a6b8
 * callees: 0x10002996, 0x100051aa, 0x10006398, 0x10008530, 0x10013241, 0x1001816a
 */

void __thiscall GameClient::GroupManager::Dismiss(GameClient::GroupManager *this, unsigned int a2)
{
  GameClient::GroupManager *v2; // ebx
  int v3; // edi
  void *v4; // esi
  _DWORD *v5; // ebp
  unsigned int v6; // edi
  GameClient::Group *v7; // esi
  int v8; // eax
  int v9; // eax
  void *v10; // ebp
  char *v11; // eax
  int v12; // ebx
  int v13; // eax
  Event *v14; // eax
  struct BinStream *Stream; // esi
  int v16; // [esp+18h] [ebp-28h]
  unsigned int v17; // [esp+1Ch] [ebp-24h]
  int v19; // [esp+28h] [ebp-18h] BYREF
  void *v20; // [esp+2Ch] [ebp-14h]
  int v21; // [esp+30h] [ebp-10h] BYREF
  void *v22; // [esp+34h] [ebp-Ch]
  int v23[2]; // [esp+38h] [ebp-8h] BYREF

  v2 = this;
  sub_100051AA((int)&v19, (int)&a2);
  v3 = v19;
  v4 = (void *)*((_DWORD *)v2 + 13);
  if ( !v19 || (GameClient::GroupManager *)v19 != (GameClient::GroupManager *)((char *)v2 + 48) )
    _invalid_parameter_noinfo();
  v5 = v20;
  if ( v20 != v4 )
  {
    if ( !v3 )
      _invalid_parameter_noinfo();
    if ( v5 == *(_DWORD **)(v3 + 4) )
      _invalid_parameter_noinfo();
    v6 = 0;
    v7 = (GameClient::Group *)(v5 + 3);
    v17 = 0;
    v16 = 0;
    while ( 1 )
    {
      v8 = *((_DWORD *)v7 + 4);
      if ( !v8 || v6 >= (*((_DWORD *)v7 + 5) - v8) / 84 )
        break;
      v9 = *((_DWORD *)v7 + 4);
      if ( !v9 || v6 >= (*((_DWORD *)v7 + 5) - v9) / 84 )
        _invalid_parameter_noinfo();
      sub_10002996((int)&v21, v16 + *((_DWORD *)v7 + 4));
      v10 = (void *)*((_DWORD *)v2 + 3);
      v11 = (char *)v2 + 8;
      v12 = v21;
      if ( !v21 || (char *)v21 != v11 )
        _invalid_parameter_noinfo();
      if ( v22 != v10 )
        sub_10008530((int)v23, v12, v22);
      ++v17;
      v16 += 84;
      v5 = v20;
      v6 = v17;
      v2 = this;
    }
    GameClient::Group::Dismiss(v7);
    sub_10013241((int)v23, v19, v5);
    v13 = EventAttemper::Instance(9, 4500);
    v14 = (Event *)EventAttemper::AddEvent(v13);
    Stream = Event::GetStream(v14);
    sub_1001816A(4);
    *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = a2;
    *((_DWORD *)Stream + 2) += 4;
  }
}
