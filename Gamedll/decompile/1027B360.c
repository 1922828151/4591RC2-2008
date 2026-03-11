/*
 * func-name: ?SetMapRect@BigMapState@@IAEXXZ_0
 * func-address: 0x1027b360
 * callers: 0x1000e33b
 * callees: 0x1000194c, 0x1000a3a8, 0x1000ed13, 0x102c9fe0
 */

void __thiscall BigMapState::SetMapRect(BigMapState *this)
{
  int v2; // eax
  GameClient::RobotManager *v3; // eax
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // edx
  int v7; // ebx
  int v8; // edi
  int v9; // ebp
  int v10; // edi
  int PicHeight; // eax
  int v12; // kr0C_4
  int v13; // ebp
  int v14; // kr14_4
  int v15; // eax
  int PicWidth; // eax
  int v17; // eax
  int v18; // eax
  int v19; // [esp-4h] [ebp-24h]
  float v20; // [esp+8h] [ebp-18h]
  float v21; // [esp+Ch] [ebp-14h]
  float v22; // [esp+10h] [ebp-10h]
  _BYTE v23[12]; // [esp+14h] [ebp-Ch] BYREF
  int retaddr; // [esp+20h] [ebp+0h]

  if ( *((_DWORD *)this + 1) )
  {
    v2 = sub_1000194C(0);
    if ( v2 )
    {
      v19 = *(_DWORD *)(v2 + 292);
      v3 = GameClient::RobotManager::Instance();
      if ( GameClient::RobotManager::GetRobot(v3, v19) )
      {
        v4 = *((_DWORD *)this + 1);
        v5 = *(_DWORD **)(v4 + 3896);
        v6 = v5[148];
        v7 = v5[149];
        *(_DWORD *)v23 = v7;
        v8 = v5[150];
        *(_DWORD *)&v23[4] = v8;
        v9 = v5[151];
        *(_DWORD *)&v23[8] = v9;
        if ( *(_DWORD *)(v4 + 4096) == 10 )
        {
          v10 = CHotZonePic::GetPicWidth(*(CHotZonePic **)(v4 + 3896)) / 2;
          PicHeight = CHotZonePic::GetPicHeight(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896));
        }
        else
        {
          v10 = (v8 + v6) / 2;
          PicHeight = v7 + v9;
        }
        v12 = PicHeight;
        v21 = (double)(int)CHotZonePic::GetPicWidth(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896)) * v20;
        v13 = (int)(v21 + 0.5);
        v22 = (double)(int)CHotZonePic::GetPicHeight(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896)) * v20;
        if ( v13 > CHotZonePic::GetPicWidth(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896)) / 2 )
          v13 = CHotZonePic::GetPicWidth(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896)) / 2;
        v14 = CHotZonePic::GetPicHeight(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896));
        v15 = (int)(v22 + 0.5);
        if ( v15 > v14 / 2 )
          v15 = CHotZonePic::GetPicHeight(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896)) / 2;
        SetRect((LPRECT)v23, v10 - v13, v12 / 2 - v15, v10 + v13, v15 + v12 / 2);
        if ( *(int *)v23 < 0 )
          OffsetRect((LPRECT)v23, -*(_DWORD *)v23, 0);
        PicWidth = CHotZonePic::GetPicWidth(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896));
        if ( *(int *)&v23[8] > PicWidth )
        {
          v17 = CHotZonePic::GetPicWidth(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896));
          OffsetRect((LPRECT)v23, v17 - *(_DWORD *)&v23[8], 0);
        }
        if ( *(int *)&v23[4] < 0 )
          OffsetRect((LPRECT)v23, 0, -*(_DWORD *)&v23[4]);
        if ( retaddr > CHotZonePic::GetPicHeight(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896)) )
        {
          v18 = CHotZonePic::GetPicHeight(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896));
          OffsetRect((LPRECT)v23, 0, v18 - retaddr);
        }
        CHotZonePic::SetDrawRect(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), (struct tagRECT *)v23);
      }
    }
  }
}
