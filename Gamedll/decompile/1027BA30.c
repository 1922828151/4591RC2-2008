/*
 * func-name: ?AddBattlePoint@CRadarMapUI@@QAEXMME@Z_0
 * func-address: 0x1027ba30
 * callers: 0x10008aee
 * callees: 0x102c0750, 0x102c9fe0
 */

void __thiscall CRadarMapUI::AddBattlePoint(CRadarMapUI *this, float a2, float a3, unsigned __int8 a4)
{
  float *v5; // eax
  int v6; // edx
  int v7; // ecx
  float v8; // edx
  int v9; // ecx
  float v10; // edx
  float v11; // ecx
  int v12; // edx
  float v13; // eax
  CHotZonePic *v14; // ecx
  int v15; // edi
  int v16; // ebp
  double v17; // st7
  int inserted; // edi
  struct tagRECT rc; // [esp+48h] [ebp-60h] BYREF
  _BYTE v20[28]; // [esp+58h] [ebp-50h] BYREF
  _DWORD v21[4]; // [esp+74h] [ebp-34h] BYREF
  float v22; // [esp+84h] [ebp-24h]
  int v23; // [esp+88h] [ebp-20h]
  float v24; // [esp+8Ch] [ebp-1Ch]
  float v25; // [esp+90h] [ebp-18h]
  int v26; // [esp+94h] [ebp-14h]
  float v27; // [esp+98h] [ebp-10h]
  int v28; // [esp+A4h] [ebp-4h]

  v5 = (float *)((char *)this + 4004);
  if ( !*((_BYTE *)this + 4090) )
    v5 = (float *)((char *)this + 3920);
  v6 = *((_DWORD *)v5 + 2);
  *(float *)&v21[1] = v5[1];
  v7 = *((_DWORD *)v5 + 3);
  v21[2] = v6;
  v8 = v5[4];
  v21[3] = v7;
  v9 = *((_DWORD *)v5 + 5);
  v22 = v8;
  v10 = v5[6];
  v23 = v9;
  v11 = v5[7];
  v24 = v10;
  v12 = *((_DWORD *)v5 + 8);
  v13 = v5[9];
  v21[0] = &BBox::`vftable';
  v25 = v11;
  v26 = v12;
  v27 = v13;
  v14 = (CHotZonePic *)*((_DWORD *)this + 974);
  v28 = 0;
  v15 = (int)((double)(int)CHotZonePic::GetPicWidth(v14) * ((a2 - v22) / (v25 - v22)));
  v16 = (int)((double)(int)CHotZonePic::GetPicHeight(*((CHotZonePic **)this + 974)) * ((v27 - a3) / (v27 - v24)));
  v17 = flt_103B3AEC[a4] * 32.0;
  SetRect(&rc, v15 - (int)v17 / 2, v16 - (int)v17 / 2, (int)v17 / 2 + v15, (int)v17 / 2 + v16);
  std::string::string(v20, "Icon_BattleSpot.dds");
  LOBYTE(v28) = 1;
  inserted = CHotZonePic::InsertHoverPic(*((_DWORD *)this + 974), 10, v20, &rc, 1, 0, 0, -1, 0.0);
  LOBYTE(v28) = 0;
  std::string::~string(v20);
  CHotZonePic::SetHoverPicTypeEnabled(*((CHotZonePic **)this + 974), 10, 1);
  CHotZonePic::AnimateHoverPic(*((_DWORD *)this + 974), inserted, 1, 0.80000001, 1.0, -1.0);
  v28 = -1;
  sub_102C0750(v21);
}
