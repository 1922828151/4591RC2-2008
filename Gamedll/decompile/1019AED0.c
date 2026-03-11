/*
 * func-name: ?RemoveAura@WorldObject@GameClient@@QAEXPAVAura@2@@Z_0
 * func-address: 0x1019aed0
 * callers: 0x10001dac
 * callees: 0x100084f4, 0x1000aff6, 0x1001816a
 */

void __thiscall GameClient::WorldObject::RemoveAura(GameClient::WorldObject *this, struct GameClient::Aura *a2)
{
  void (__cdecl *v2)(); // ebp
  char *v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // esi
  int v6; // eax
  int v7; // eax
  Event *v8; // eax
  int v9; // ebp
  struct BinStream *Stream; // esi
  unsigned int v11; // esi
  GameClient::FlyweightManager *v12; // eax
  int v13; // eax
  unsigned int v14; // [esp+0h] [ebp-1Ch]
  struct GameClient::Aura *v16; // [esp+20h] [ebp+4h]

  if ( a2 )
  {
    v2 = _invalid_parameter_noinfo;
    v3 = (char *)this + 120;
    v4 = *((_DWORD *)this + 31);
    if ( v4 > *((_DWORD *)this + 32) )
      _invalid_parameter_noinfo();
    while ( 1 )
    {
      v5 = *((_DWORD *)v3 + 2);
      if ( *((_DWORD *)v3 + 1) > v5 )
        _invalid_parameter_noinfo();
      if ( v4 == v5 )
        break;
      if ( v4 >= *((_DWORD *)v3 + 2) )
        _invalid_parameter_noinfo();
      if ( a2 == *(struct GameClient::Aura **)v4 )
      {
        v6 = *((_DWORD *)this + 5);
        if ( v6 && *(_BYTE *)(v6 + 212) )
        {
          v7 = EventAttemper::Instance(9, 4153);
          v8 = (Event *)EventAttemper::AddEvent(v7);
          v9 = *((_DWORD *)a2 + 1);
          v16 = (struct GameClient::Aura *)*((_DWORD *)this + 3);
          Stream = Event::GetStream(v8);
          sub_1001816A(4);
          *(_DWORD *)(*((_DWORD *)Stream + 2) + *((_DWORD *)Stream + 1)) = v16;
          *((_DWORD *)Stream + 2) += 4;
          sub_1001816A(4);
          *(_DWORD *)(*((_DWORD *)Stream + 2) + *((_DWORD *)Stream + 1)) = v9;
          *((_DWORD *)Stream + 2) += 4;
          v2 = _invalid_parameter_noinfo;
        }
        if ( v4 >= *((_DWORD *)v3 + 2) )
          v2();
        v11 = *(_DWORD *)(*(_DWORD *)v4 + 12);
        if ( v4 >= *((_DWORD *)v3 + 2) )
          v2();
        v14 = *(_DWORD *)(*(_DWORD *)v4 + 4);
        v12 = GameClient::FlyweightManager::Instance();
        GameClient::FlyweightManager::DeleteInstance(v12, v14, v11);
        v13 = (int)(*((_DWORD *)v3 + 2) - (v4 + 4)) >> 2;
        if ( v13 > 0 )
          memmove_s((void *const)v4, 4 * v13, (const void *const)(v4 + 4), 4 * v13);
        *((_DWORD *)v3 + 2) -= 4;
        return;
      }
      if ( v4 >= *((_DWORD *)v3 + 2) )
        _invalid_parameter_noinfo();
      v4 += 4;
    }
  }
}
