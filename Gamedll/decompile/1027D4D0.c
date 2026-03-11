/*
 * func-name: ?OnUpdateOccupyIcon@BigMapState@@IAEXAAVEvent@@@Z_0
 * func-address: 0x1027d4d0
 * callers: 0x100022f2
 * callees: 0x1000b4a6
 */

void __thiscall BigMapState::OnUpdateOccupyIcon(BigMapState *this, struct Event *a2)
{
  int v2; // esi
  struct BinStream *Stream; // eax
  int v4; // ecx
  unsigned __int8 v5; // bl
  struct BinStream *v6; // eax
  int v7; // edx
  unsigned int v8; // ecx
  double v9; // st7
  int v10; // edx
  double v11; // st7
  int v12; // edx
  int v13; // [esp+24h] [ebp-Ch]
  int v14; // [esp+28h] [ebp-8h]
  int v15; // [esp+2Ch] [ebp-4h]

  CHotZonePic::RemoveHoverPic(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 8, 0);
  v2 = 0;
  Stream = Event::GetStream(a2);
  v4 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v4 + 4) <= *((_DWORD *)Stream + 2) )
  {
    v2 = *(_DWORD *)(v4 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v4 + 4;
  }
  if ( v2 > 0 )
  {
    v5 = (unsigned __int8)a2;
    v13 = v2;
    do
    {
      v6 = Event::GetStream(a2);
      v7 = *((_DWORD *)v6 + 3);
      v8 = *((_DWORD *)v6 + 2);
      if ( v7 + 4 <= v8 )
      {
        v9 = *(float *)(v7 + *((_DWORD *)v6 + 1));
        *((_DWORD *)v6 + 3) = v7 + 4;
        *(float *)&v15 = v9;
      }
      v10 = *((_DWORD *)v6 + 3);
      if ( v10 + 4 <= v8 )
      {
        v11 = *(float *)(v10 + *((_DWORD *)v6 + 1));
        *((_DWORD *)v6 + 3) = v10 + 4;
        *(float *)&v14 = v11;
      }
      v12 = *((_DWORD *)v6 + 3);
      if ( v12 + 1 <= v8 )
      {
        v5 = *(_BYTE *)(v12 + *((_DWORD *)v6 + 1));
        *((_DWORD *)v6 + 3) = v12 + 1;
      }
      CRadarMapUI::AddOccupyIcon(v15, v14, v5);
      --v13;
    }
    while ( v13 );
  }
}
