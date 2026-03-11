/*
 * func-name: ?OnUpdateBattlePointLoc@BigMapState@@IAEXAAVEvent@@@Z_0
 * func-address: 0x1027d5a0
 * callers: 0x10018e03
 * callees: 0x10008aee
 */

void __thiscall BigMapState::OnUpdateBattlePointLoc(BigMapState *this, struct Event *a2)
{
  int v4; // esi
  struct BinStream *Stream; // eax
  int v6; // ecx
  struct BinStream *v7; // eax
  int v8; // edx
  unsigned int v9; // ecx
  double v10; // st7
  int v11; // edx
  double v12; // st7
  int v13; // edx
  unsigned __int8 v14; // [esp+24h] [ebp-Ch]
  float v15; // [esp+28h] [ebp-8h]
  float v16; // [esp+2Ch] [ebp-4h]
  struct Event *v17; // [esp+34h] [ebp+4h]

  CHotZonePic::RemoveHoverPic(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 10, 0);
  v4 = 0;
  Stream = Event::GetStream(a2);
  v6 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v6 + 4) <= *((_DWORD *)Stream + 2) )
  {
    v4 = *(_DWORD *)(v6 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v6 + 4;
  }
  if ( v4 > 0 )
  {
    v17 = (struct Event *)v4;
    do
    {
      v7 = Event::GetStream(a2);
      v8 = *((_DWORD *)v7 + 3);
      v9 = *((_DWORD *)v7 + 2);
      if ( v8 + 4 <= v9 )
      {
        v10 = *(float *)(v8 + *((_DWORD *)v7 + 1));
        *((_DWORD *)v7 + 3) = v8 + 4;
        v16 = v10;
      }
      v11 = *((_DWORD *)v7 + 3);
      if ( v11 + 4 <= v9 )
      {
        v12 = *(float *)(v11 + *((_DWORD *)v7 + 1));
        *((_DWORD *)v7 + 3) = v11 + 4;
        v15 = v12;
      }
      v13 = *((_DWORD *)v7 + 3);
      if ( v13 + 1 <= v9 )
      {
        v14 = *(_BYTE *)(v13 + *((_DWORD *)v7 + 1));
        *((_DWORD *)v7 + 3) = v13 + 1;
      }
      CRadarMapUI::AddBattlePoint(*((CRadarMapUI **)this + 1), v16, v15, v14);
      v17 = (struct Event *)((char *)v17 - 1);
    }
    while ( v17 );
  }
}
