/*
 * func-name: ?RemoveMember@GroupManager@GameClient@@QAEXKK@Z_0
 * func-address: 0x101f9f90
 * callers: 0x10002063
 * callees: 0x1000108c, 0x10002996, 0x100051aa, 0x10008530, 0x1000fa15, 0x10016a4f, 0x10017c29, 0x1001816a, 0x1001a6b8
 */

void __thiscall GameClient::GroupManager::RemoveMember(
        GameClient::GroupManager *this,
        unsigned int a2,
        unsigned int a3)
{
  int v4; // esi
  void *v5; // ebx
  char *v6; // edi
  char *v7; // esi
  unsigned int v8; // edi
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  Event *v12; // eax
  struct BinStream *Stream; // esi
  unsigned int v14; // eax
  GameClient::GroupManager *v15; // eax
  int v16; // edi
  void *v17; // ebx
  unsigned int v18; // [esp+4h] [ebp-20h]
  char v19; // [esp+1Bh] [ebp-9h]
  int v20; // [esp+1Ch] [ebp-8h] BYREF
  void *v21; // [esp+20h] [ebp-4h]

  sub_100051AA((int)&v20, (int)&a2);
  v4 = v20;
  v5 = (void *)*((_DWORD *)this + 13);
  if ( !v20 || (GameClient::GroupManager *)v20 != (GameClient::GroupManager *)((char *)this + 48) )
    _invalid_parameter_noinfo();
  v6 = (char *)v21;
  if ( v21 != v5 )
  {
    if ( !v4 )
      _invalid_parameter_noinfo();
    if ( v6 == *(char **)(v4 + 4) )
      _invalid_parameter_noinfo();
    GameClient::Group::RemoveMember((GameClient::Group *)(v6 + 12), a3);
    v7 = v6 + 24;
    v19 = 1;
    v8 = 0;
    if ( sub_1000108C() )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = *((_DWORD *)v7 + 1);
        if ( !v10 || v8 >= (*((_DWORD *)v7 + 2) - v10) / 84 )
          _invalid_parameter_noinfo();
        if ( sub_10016A4F(*(_DWORD *)(v9 + *((_DWORD *)v7 + 1))) )
          break;
        ++v8;
        v9 += 84;
        if ( v8 >= sub_1000108C() )
          goto LABEL_18;
      }
      v19 = 0;
    }
LABEL_18:
    v11 = EventAttemper::Instance(9, 4500);
    v12 = (Event *)EventAttemper::AddEvent(v11);
    Stream = Event::GetStream(v12);
    sub_1001816A(4);
    v14 = a2;
    *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = a2;
    *((_DWORD *)Stream + 2) += 4;
    if ( v19 )
    {
      v18 = v14;
      v15 = GameClient::GroupManager::Instance();
      GameClient::GroupManager::Dismiss(v15, v18);
    }
  }
  sub_10002996((int)&v20, (int)&a3);
  v16 = v20;
  v17 = (void *)*((_DWORD *)this + 3);
  if ( !v20 || (GameClient::GroupManager *)v20 != (GameClient::GroupManager *)((char *)this + 8) )
    _invalid_parameter_noinfo();
  if ( v21 != v17 )
    sub_10008530((int)&v20, v16, v21);
}
