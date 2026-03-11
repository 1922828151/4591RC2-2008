/*
 * func-name: ?OnRobotAsphxiaOrDead@BigMapState@@IAEXAAVEvent@@@Z_0
 * func-address: 0x1027d350
 * callers: 0x100053c1
 * callees: 0x1000194c
 */

void __thiscall BigMapState::OnRobotAsphxiaOrDead(BigMapState *this, struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v4; // ecx
  struct Event *v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax

  Stream = Event::GetStream(a2);
  v4 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v4 + 4) > *((_DWORD *)Stream + 2) )
  {
    v5 = a2;
  }
  else
  {
    v5 = *(struct Event **)(v4 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v4 + 4;
  }
  v6 = sub_1000194C(0);
  if ( v6 )
  {
    if ( v5 == *(struct Event **)(v6 + 292) )
    {
      v7 = *((_DWORD *)this + 1);
      *((_BYTE *)this + 48) = 1;
      if ( v7 )
      {
        if ( *(_BYTE *)(v7 + 4090) )
        {
          if ( *(_DWORD *)(v7 + 3876) == 1 )
          {
            v8 = *(_DWORD *)(v7 + 3896);
            *(_BYTE *)(v7 + 4090) = 0;
            CHotZonePic::SetPic(v8, v7 + 3960);
            v9 = *((_DWORD *)this + 1);
            *((_DWORD *)this + 24) = 1;
            *((_DWORD *)this + 23) = *(_DWORD *)(v9 + 4096);
          }
        }
      }
    }
  }
}
