/*
 * func-name: ?AddAura@WorldObject@GameClient@@QAEXPAVAura@2@@Z_0
 * func-address: 0x1019b270
 * callers: 0x10015db6
 * callees: 0x10005452, 0x100084f4, 0x1000aff6, 0x1001816a
 */

void __thiscall GameClient::WorldObject::AddAura(GameClient::WorldObject *this, struct GameClient::Aura *a2)
{
  struct GameClient::Aura *v2; // ebp
  _DWORD *v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // esi
  int v6; // esi
  int v7; // eax
  int v8; // eax
  Event *v9; // eax
  int v10; // ebp
  struct BinStream *Stream; // esi
  unsigned int v12; // esi
  GameClient::FlyweightManager *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  Event *v17; // eax
  int v18; // edi
  int v19; // ebx
  struct BinStream *v20; // esi
  unsigned int v21; // [esp+10h] [ebp-20h]
  int v23; // [esp+2Ch] [ebp-4h]
  int v24; // [esp+2Ch] [ebp-4h]

  v2 = a2;
  if ( a2 )
  {
    v3 = (_DWORD *)((char *)this + 120);
    v4 = *((_DWORD *)this + 31);
    v23 = *((_DWORD *)a2 + 2);
    if ( v4 > *((_DWORD *)this + 32) )
      _invalid_parameter_noinfo();
    while ( 1 )
    {
      v5 = v3[2];
      if ( v3[1] > v5 )
        _invalid_parameter_noinfo();
      if ( v4 == v5 )
        break;
      if ( v4 >= v3[2] )
        _invalid_parameter_noinfo();
      if ( *(_DWORD *)v4 && *(_BYTE *)(v23 + 124) )
      {
        v6 = *((_DWORD *)v2 + 1);
        if ( v4 >= v3[2] )
          _invalid_parameter_noinfo();
        if ( v6 == *(_DWORD *)(*(_DWORD *)v4 + 4) )
        {
          v7 = *((_DWORD *)this + 5);
          if ( v7 && *(_BYTE *)(v7 + 212) )
          {
            v8 = EventAttemper::Instance(9, 4153);
            v9 = (Event *)EventAttemper::AddEvent(v8);
            v10 = *((_DWORD *)v2 + 1);
            v24 = *((_DWORD *)this + 3);
            Stream = Event::GetStream(v9);
            sub_1001816A(4);
            *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = v24;
            *((_DWORD *)Stream + 2) += 4;
            sub_1001816A(4);
            *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = v10;
            *((_DWORD *)Stream + 2) += 4;
            v2 = a2;
          }
          if ( v4 >= v3[2] )
            _invalid_parameter_noinfo();
          v12 = *(_DWORD *)(*(_DWORD *)v4 + 12);
          if ( v4 >= v3[2] )
            _invalid_parameter_noinfo();
          v21 = *(_DWORD *)(*(_DWORD *)v4 + 4);
          v13 = GameClient::FlyweightManager::Instance();
          GameClient::FlyweightManager::DeleteInstance(v13, v21, v12);
          v14 = (int)(v3[2] - (v4 + 4)) >> 2;
          if ( v14 > 0 )
            memmove_s((void *const)v4, 4 * v14, (const void *const)(v4 + 4), 4 * v14);
          v3[2] -= 4;
          break;
        }
      }
      if ( v4 >= v3[2] )
        _invalid_parameter_noinfo();
      v4 += 4;
    }
    sub_10005452(v3, (int)&a2);
    v15 = *((_DWORD *)this + 5);
    if ( v15 && *(_BYTE *)(v15 + 212) )
    {
      v16 = EventAttemper::Instance(9, 4152);
      v17 = (Event *)EventAttemper::AddEvent(v16);
      v18 = *((_DWORD *)v2 + 1);
      v19 = *((_DWORD *)this + 3);
      v20 = Event::GetStream(v17);
      sub_1001816A(4);
      *(_DWORD *)(*((_DWORD *)v20 + 1) + *((_DWORD *)v20 + 2)) = v19;
      *((_DWORD *)v20 + 2) += 4;
      sub_1001816A(4);
      *(_DWORD *)(*((_DWORD *)v20 + 1) + *((_DWORD *)v20 + 2)) = v18;
      *((_DWORD *)v20 + 2) += 4;
    }
  }
}
