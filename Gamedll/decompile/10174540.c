/*
 * func-name: ?EnableSkill@Robot@GameClient@@UAEXK@Z_0
 * func-address: 0x10174540
 * callers: 0x100159f6
 * callees: 0x1001816a
 */

void __thiscall GameClient::Robot::EnableSkill(GameClient::Robot *this, unsigned int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  Event *v7; // eax
  struct BinStream *Stream; // esi

  v2 = *((_DWORD *)this + 36);
  if ( !v2 || *(_DWORD *)(v2 + 12) != a2 )
  {
    v3 = *((_DWORD *)this + 55);
    *((_DWORD *)this + 54) = -1;
    if ( v3 && *(_DWORD *)(v3 + 12) == a2 )
    {
      *((_DWORD *)this + 54) = 0;
    }
    else
    {
      v4 = *((_DWORD *)this + 56);
      if ( v4 && *(_DWORD *)(v4 + 12) == a2 )
        *((_DWORD *)this + 54) = 1;
    }
    v5 = *((_DWORD *)this + 54);
    if ( v5 != -1 )
    {
      *((_DWORD *)this + 92) |= 0x40u;
      *((_DWORD *)this + 53) = *((_DWORD *)this + v5 + 55);
      v6 = EventAttemper::Instance(9, 4154);
      v7 = (Event *)EventAttemper::AddEvent(v6);
      Stream = Event::GetStream(v7);
      sub_1001816A(4);
      *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = a2;
      *((_DWORD *)Stream + 2) += 4;
    }
  }
}
