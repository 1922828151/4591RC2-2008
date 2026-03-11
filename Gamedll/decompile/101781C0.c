/*
 * func-name: ?RemoveEquip@Robot@GameClient@@QAEXK@Z_0
 * func-address: 0x101781c0
 * callers: 0x1000eb9c
 * callees: 0x10001573, 0x10006a19, 0x1001816a
 */

void __thiscall GameClient::Robot::RemoveEquip(GameClient::Robot *this, unsigned int a2)
{
  void (__cdecl *v2)(); // ebp
  unsigned int v3; // esi
  char *v4; // edi
  unsigned int v5; // ebx
  int v6; // eax
  Event *v7; // eax
  int v8; // edi
  struct BinStream *Stream; // esi
  unsigned int v10; // esi
  unsigned int v11; // ebx

  if ( a2 != -1 )
  {
    v2 = _invalid_parameter_noinfo;
    v3 = *((_DWORD *)this + 63);
    v4 = (char *)this + 248;
    if ( v3 > *((_DWORD *)this + 64) )
      _invalid_parameter_noinfo();
    while ( 1 )
    {
      v5 = *((_DWORD *)v4 + 2);
      if ( *((_DWORD *)v4 + 1) > v5 )
        _invalid_parameter_noinfo();
      if ( v3 == v5 )
        break;
      if ( v3 >= *((_DWORD *)v4 + 2) )
        _invalid_parameter_noinfo();
      if ( *(_DWORD *)v3 )
      {
        if ( v3 >= *((_DWORD *)v4 + 2) )
          _invalid_parameter_noinfo();
        if ( *(_DWORD *)(*(_DWORD *)v3 + 12) == a2 )
        {
          if ( v3 >= *((_DWORD *)v4 + 2) )
            _invalid_parameter_noinfo();
          if ( *((_DWORD *)this + 57) == *(_DWORD *)v3 )
            GameClient::Robot::SetCurEquip(this, 0, -1);
          if ( v3 >= *((_DWORD *)v4 + 2) )
            _invalid_parameter_noinfo();
          *(_DWORD *)v3 = 0;
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
      }
      if ( v3 >= *((_DWORD *)v4 + 2) )
        _invalid_parameter_noinfo();
      v3 += 4;
    }
    v10 = *((_DWORD *)this + 67);
    if ( v10 > *((_DWORD *)this + 68) )
      _invalid_parameter_noinfo();
    while ( 1 )
    {
      v11 = *((_DWORD *)this + 68);
      if ( *((_DWORD *)this + 67) > v11 )
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
      if ( v10 >= *((_DWORD *)this + 68) )
        v2();
      if ( *(_DWORD *)v10 )
      {
        if ( v10 >= *((_DWORD *)this + 68) )
          v2();
        if ( *(_DWORD *)(*(_DWORD *)v10 + 12) == a2 )
        {
          if ( v10 >= *((_DWORD *)this + 68) )
            v2();
          if ( *((_DWORD *)this + 57) == *(_DWORD *)v10 )
            GameClient::Robot::SetCurEquip(this, 0, -1);
          if ( v10 >= *((_DWORD *)this + 68) )
            v2();
          *(_DWORD *)v10 = 0;
          return;
        }
      }
      if ( v10 >= *((_DWORD *)this + 68) )
        v2();
      v10 += 4;
    }
  }
}
