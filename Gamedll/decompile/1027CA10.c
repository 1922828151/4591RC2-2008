/*
 * func-name: ?ChangeLevel@RadarMapState@@UAEXJ@Z_0
 * func-address: 0x1027ca10
 * callers: 0x10003742
 * callees: 0x10002077
 */

void __thiscall RadarMapState::ChangeLevel(RadarMapState *this, int a2)
{
  int v3; // ecx
  int v4; // esi

  v3 = *((_DWORD *)this + 1);
  if ( v3 )
  {
    v4 = a2;
    if ( a2 <= 0 )
    {
      if ( *(_BYTE *)(v3 + 4090) )
      {
        *(_BYTE *)(v3 + 4090) = 0;
        CHotZonePic::SetPic(*(_DWORD *)(v3 + 3896), v3 + 3960);
        *(_DWORD *)(*((_DWORD *)this + 1) + 4096) = 5;
      }
      return;
    }
    if ( a2 <= 5 )
    {
LABEL_9:
      *(_DWORD *)(*((_DWORD *)this + 1) + 4096) = v4;
      return;
    }
    if ( !*(_BYTE *)(v3 + 4090) && *(_BYTE *)(v3 + 4089) )
    {
      v4 = 1;
      CRadarMapUI::SetIsInside((CRadarMapUI *)v3, 1);
      goto LABEL_9;
    }
  }
}
