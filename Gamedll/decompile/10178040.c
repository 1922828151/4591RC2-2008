/*
 * func-name: ?RemoveEquip@Robot@GameClient@@QAEXPAVEquip@2@@Z_0
 * func-address: 0x10178040
 * callers: 0x1000fe98
 * callees: 0x10001573, 0x10006a19, 0x1001816a
 */

void __thiscall GameClient::Robot::RemoveEquip(GameClient::Robot *this, struct GameClient::Equip *a2)
{
  void (__cdecl *v2)(); // ebp
  struct GameClient::Equip **v3; // esi
  char *v4; // edi
  struct GameClient::Equip **v5; // ebx
  int v6; // eax
  Event *v7; // eax
  int v8; // edi
  struct BinStream *Stream; // esi
  struct GameClient::Equip **v10; // esi
  struct GameClient::Equip **v11; // ebx

  if ( a2 )
  {
    v2 = _invalid_parameter_noinfo;
    v3 = (struct GameClient::Equip **)*((_DWORD *)this + 63);
    v4 = (char *)this + 248;
    if ( (unsigned int)v3 > *((_DWORD *)this + 64) )
      _invalid_parameter_noinfo();
    while ( 1 )
    {
      v5 = (struct GameClient::Equip **)*((_DWORD *)v4 + 2);
      if ( *((_DWORD *)v4 + 1) > (unsigned int)v5 )
        _invalid_parameter_noinfo();
      if ( v3 == v5 )
        break;
      if ( (unsigned int)v3 >= *((_DWORD *)v4 + 2) )
        _invalid_parameter_noinfo();
      if ( *v3 == a2 )
      {
        if ( (unsigned int)v3 >= *((_DWORD *)v4 + 2) )
          _invalid_parameter_noinfo();
        if ( *((struct GameClient::Equip **)this + 57) == *v3 )
          GameClient::Robot::SetCurEquip(this, 0, -1);
        if ( (unsigned int)v3 >= *((_DWORD *)v4 + 2) )
          _invalid_parameter_noinfo();
        *v3 = 0;
        if ( GameClient::WorldObject::IsLocal(this) )
        {
          v6 = EventAttemper::Instance(9, 4150);
          v7 = (Event *)EventAttemper::AddEvent(v6);
          v8 = *((_DWORD *)this + 3);
          Stream = Event::GetStream(v7);
          sub_1001816A(4);
          *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = v8;
          *((_DWORD *)Stream + 2) += 4;
        }
        return;
      }
      if ( (unsigned int)v3 >= *((_DWORD *)v4 + 2) )
        _invalid_parameter_noinfo();
      ++v3;
    }
    v10 = (struct GameClient::Equip **)*((_DWORD *)this + 67);
    if ( (unsigned int)v10 > *((_DWORD *)this + 68) )
      _invalid_parameter_noinfo();
    while ( 1 )
    {
      v11 = (struct GameClient::Equip **)*((_DWORD *)this + 68);
      if ( *((_DWORD *)this + 67) > (unsigned int)v11 )
      {
        v2();
        v2 = _invalid_parameter_noinfo;
      }
      if ( this == (GameClient::Robot *)-264 )
      {
        v2();
        v2 = _invalid_parameter_noinfo;
      }
      if ( v10 == v11 )
        break;
      if ( this == (GameClient::Robot *)-264 )
        v2();
      if ( (unsigned int)v10 >= *((_DWORD *)this + 68) )
        v2();
      if ( *v10 == a2 )
      {
        if ( (unsigned int)v10 >= *((_DWORD *)this + 68) )
          v2();
        if ( *((struct GameClient::Equip **)this + 57) == *v10 )
          GameClient::Robot::SetCurEquip(this, 0, -1);
        if ( (unsigned int)v10 >= *((_DWORD *)this + 68) )
          v2();
        *v10 = 0;
        return;
      }
      if ( (unsigned int)v10 >= *((_DWORD *)this + 68) )
        v2();
      ++v10;
    }
  }
}
