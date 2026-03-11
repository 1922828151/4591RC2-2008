/*
 * func-name: ?OnUpdateRebornLoc@BigMapState@@IAEXAAVEvent@@@Z_0
 * func-address: 0x1027d260
 * callers: 0x10005d17
 * callees: 0x100122bf
 */

void __thiscall BigMapState::OnUpdateRebornLoc(BigMapState *this, struct Event *a2)
{
  BigMapState *v2; // ebp
  int v3; // eax
  struct BinStream *Stream; // eax
  int v6; // ecx
  int v7; // edx
  struct Event *v8; // ecx
  unsigned int v9; // edi
  struct BinStream *v10; // eax
  int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // edx
  int v14; // edx
  int v15; // edx
  double v16; // st7
  float v18; // [esp+20h] [ebp-8h]
  float v19; // [esp+24h] [ebp-4h]
  struct Event *v20; // [esp+2Ch] [ebp+4h]

  v2 = this;
  v3 = *((_DWORD *)this + 1);
  if ( v3 )
  {
    CHotZonePic::RemoveAllHotZone(*(CHotZonePic **)(v3 + 3896));
    Stream = Event::GetStream(a2);
    v6 = *((_DWORD *)Stream + 3);
    v7 = v6 + 4;
    if ( (unsigned int)(v6 + 4) > *((_DWORD *)Stream + 2) )
    {
      v8 = a2;
    }
    else
    {
      v8 = *(struct Event **)(v6 + *((_DWORD *)Stream + 1));
      *((_DWORD *)Stream + 3) = v7;
    }
    if ( (int)v8 > 0 )
    {
      v20 = v8;
      v9 = (unsigned int)v8;
      do
      {
        v10 = Event::GetStream(a2);
        v11 = *((_DWORD *)v10 + 3);
        v12 = *((_DWORD *)v10 + 2);
        if ( v11 + 4 <= v12 )
        {
          v9 = *(_DWORD *)(v11 + *((_DWORD *)v10 + 1));
          *((_DWORD *)v10 + 3) = v11 + 4;
        }
        v13 = *((_DWORD *)v10 + 3) + 4;
        if ( v13 <= v12 )
          *((_DWORD *)v10 + 3) = v13;
        v14 = *((_DWORD *)v10 + 3);
        if ( v14 + 4 <= v12 )
        {
          v2 = this;
          v19 = *(float *)(v14 + *((_DWORD *)v10 + 1));
          *((_DWORD *)v10 + 3) = v14 + 4;
        }
        v15 = *((_DWORD *)v10 + 3);
        if ( v15 + 4 <= v12 )
        {
          v16 = *(float *)(v15 + *((_DWORD *)v10 + 1));
          *((_DWORD *)v10 + 3) = v15 + 4;
          v18 = v16;
        }
        CRadarMapUI::AddRebornLoc(*((CRadarMapUI **)v2 + 1), v19, v18, v9);
        v20 = (struct Event *)((char *)v20 - 1);
      }
      while ( v20 );
    }
  }
}
