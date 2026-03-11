/*
 * func-name: ?ChangeLevel@BigMapState@@UAEXJ@Z_0
 * func-address: 0x1027cf20
 * callers: 0x100178d7
 * callees: 0x10002077, 0x1000b609, 0x1000e33b, 0x102c9fe0
 */

void __thiscall BigMapState::ChangeLevel(BigMapState *this, int a2)
{
  int v3; // ecx
  int v4; // ebp
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  float *v9; // eax
  double v10; // st7
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  float *WorldBBox; // eax
  int v15; // ecx
  int PicWidth; // [esp+1Ch] [ebp-4h]
  int v17; // [esp+1Ch] [ebp-4h]
  int PicHeight; // [esp+24h] [ebp+4h]
  float v19; // [esp+24h] [ebp+4h]
  float v20; // [esp+24h] [ebp+4h]
  float v21; // [esp+24h] [ebp+4h]
  int v22; // [esp+24h] [ebp+4h]
  float v23; // [esp+24h] [ebp+4h]
  float v24; // [esp+24h] [ebp+4h]
  float v25; // [esp+24h] [ebp+4h]

  v3 = *((_DWORD *)this + 1);
  if ( v3 )
  {
    v4 = a2;
    if ( a2 <= 0 )
    {
      if ( !*(_BYTE *)(v3 + 4090) )
        return;
      *(_BYTE *)(v3 + 4090) = 0;
      v4 = 5;
      CHotZonePic::SetPic(*(_DWORD *)(v3 + 3896), v3 + 3960);
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(*((_DWORD *)this + 1) + 3896) + 156))(
        *(_DWORD *)(*((_DWORD *)this + 1) + 3896),
        0,
        0);
      PicWidth = CHotZonePic::GetPicWidth(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896));
      PicHeight = CHotZonePic::GetPicHeight(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896));
      if ( PicWidth == PicHeight )
      {
        v5 = *((_DWORD *)this + 1);
        *(_DWORD *)(v5 + 700) = 501;
        *(_DWORD *)(v5 + 704) = 501;
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*((_DWORD *)this + 1) + 3896) + 160))(
          *(_DWORD *)(*((_DWORD *)this + 1) + 3896),
          501,
          501);
      }
      else
      {
        v19 = (double)PicHeight / 501.0 * (double)PicWidth;
        v6 = (int)(v19 + 0.5);
        v7 = *((_DWORD *)this + 1);
        *(_DWORD *)(v7 + 700) = v6;
        *(_DWORD *)(v7 + 704) = 501;
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*((_DWORD *)this + 1) + 3896) + 160))(
          *(_DWORD *)(*((_DWORD *)this + 1) + 3896),
          v6,
          501);
      }
      CTYDialog::CenterDialog(*((CTYDialog **)this + 1), 1, 1);
      CTYDialog::SetHasInput(*((CTYDialog **)this + 1), 1);
      *(_DWORD *)(*((_DWORD *)this + 1) + 4096) = 1;
      BigMapState::SetMapRect(this);
      v8 = *((_DWORD *)this + 1);
      if ( *(_BYTE *)(v8 + 4090) )
        v9 = (float *)(v8 + 4004);
      else
        v9 = (float *)(v8 + 3920);
      v20 = 500.0 / (v9[7] - v9[4]);
      *(float *)(*(_DWORD *)(*((_DWORD *)this + 1) + 3896) + 640) = v20;
      v21 = 500.0 / (v9[9] - v9[6]);
      v10 = v21;
      goto LABEL_19;
    }
    if ( a2 <= 5 )
    {
LABEL_20:
      *(_DWORD *)(*((_DWORD *)this + 1) + 4096) = v4;
      BigMapState::SetMapRect(this);
      return;
    }
    if ( !*((_BYTE *)this + 48) && !*(_BYTE *)(v3 + 4090) && *(_BYTE *)(v3 + 4089) )
    {
      v4 = 1;
      CRadarMapUI::SetIsInside((CRadarMapUI *)v3, 1);
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(*((_DWORD *)this + 1) + 3896) + 156))(
        *(_DWORD *)(*((_DWORD *)this + 1) + 3896),
        0,
        0);
      v17 = CHotZonePic::GetPicWidth(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896));
      v22 = CHotZonePic::GetPicHeight(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896));
      if ( v17 == v22 )
      {
        v11 = *((_DWORD *)this + 1);
        *(_DWORD *)(v11 + 700) = 501;
        *(_DWORD *)(v11 + 704) = 501;
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*((_DWORD *)this + 1) + 3896) + 160))(
          *(_DWORD *)(*((_DWORD *)this + 1) + 3896),
          501,
          501);
      }
      else
      {
        v23 = (double)v22 / 501.0 * (double)v17;
        v12 = (int)(v23 + 0.5);
        v13 = *((_DWORD *)this + 1);
        *(_DWORD *)(v13 + 700) = v12;
        *(_DWORD *)(v13 + 704) = 501;
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*((_DWORD *)this + 1) + 3896) + 160))(
          *(_DWORD *)(*((_DWORD *)this + 1) + 3896),
          v12,
          501);
      }
      CTYDialog::CenterDialog(*((CTYDialog **)this + 1), 1, 1);
      CTYDialog::SetHasInput(*((CTYDialog **)this + 1), 1);
      *(_DWORD *)(*((_DWORD *)this + 1) + 4096) = 1;
      BigMapState::SetMapRect(this);
      WorldBBox = (float *)CRadarMapUI::GetWorldBBox(*((CRadarMapUI **)this + 1));
      v24 = 500.0 / (WorldBBox[7] - WorldBBox[4]);
      *(float *)(*(_DWORD *)(v15 + 3896) + 640) = v24;
      v25 = 500.0 / (WorldBBox[9] - WorldBBox[6]);
      v10 = v25;
LABEL_19:
      *(float *)(*(_DWORD *)(*((_DWORD *)this + 1) + 3896) + 636) = v10;
      *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 1) + 3896) + 644) = 1;
      CHotZonePic::SetHoverPicTypeEnabled(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 1, 1);
      CHotZonePic::SetHoverPicTypeEnabled(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 6, 1);
      goto LABEL_20;
    }
  }
}
