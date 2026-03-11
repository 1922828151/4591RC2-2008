/*
 * func-name: ?DisableSkill@Robot@GameClient@@UAEXK@Z_0
 * func-address: 0x10174600
 * callers: 0x100121d4
 * callees: 0x1001816a
 */

void __thiscall GameClient::Robot::DisableSkill(GameClient::Robot *this, unsigned int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  Event *v6; // eax
  int v7; // edi
  struct BinStream *Stream; // esi

  v3 = *((_DWORD *)this + 54);
  if ( v3 != -1 )
  {
    v4 = *((_DWORD *)this + 36);
    if ( !v4 || *(_DWORD *)(v4 + 12) != a2 )
    {
      *((_DWORD *)this + 92) &= ~0x40u;
      *((_DWORD *)this + 54) = -1;
      *((_DWORD *)this + 53) = 0;
      v5 = EventAttemper::Instance(9, 4155);
      v6 = (Event *)EventAttemper::AddEvent(v5);
      v7 = *(_DWORD *)(*((_DWORD *)this + v3 + 55) + 12);
      Stream = Event::GetStream(v6);
      sub_1001816A(4);
      *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = v7;
      *((_DWORD *)Stream + 2) += 4;
    }
  }
}
