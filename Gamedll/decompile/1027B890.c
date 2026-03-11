/*
 * func-name: ?AddOccupyIcon@CRadarMapUI@@QAEXMMW4NATION_TYPE@@@Z_0
 * func-address: 0x1027b890
 * callers: 0x1000b4a6
 * callees: 0x10011a3b, 0x102c0750, 0x102c9fe0
 */

int __thiscall CRadarMapUI::AddOccupyIcon(int this, float a2, float a3, char a4)
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
  int v16; // eax
  int v17; // eax
  struct tagRECT v19; // [esp+14h] [ebp-70h] BYREF
  struct tagRECT rc; // [esp+24h] [ebp-60h] BYREF
  _BYTE v21[28]; // [esp+34h] [ebp-50h] BYREF
  _DWORD v22[4]; // [esp+50h] [ebp-34h] BYREF
  float v23; // [esp+60h] [ebp-24h]
  int v24; // [esp+64h] [ebp-20h]
  float v25; // [esp+68h] [ebp-1Ch]
  float v26; // [esp+6Ch] [ebp-18h]
  int v27; // [esp+70h] [ebp-14h]
  float v28; // [esp+74h] [ebp-10h]
  int v29; // [esp+80h] [ebp-4h]

  v5 = (float *)(this + 4004);
  if ( !*(_BYTE *)(this + 4090) )
    v5 = (float *)(this + 3920);
  v6 = *((_DWORD *)v5 + 2);
  *(float *)&v22[1] = v5[1];
  v7 = *((_DWORD *)v5 + 3);
  v22[2] = v6;
  v8 = v5[4];
  v22[3] = v7;
  v9 = *((_DWORD *)v5 + 5);
  v23 = v8;
  v10 = v5[6];
  v24 = v9;
  v11 = v5[7];
  v25 = v10;
  v12 = *((_DWORD *)v5 + 8);
  v13 = v5[9];
  v22[0] = &BBox::`vftable';
  v26 = v11;
  v27 = v12;
  v28 = v13;
  v14 = *(CHotZonePic **)(this + 3896);
  v29 = 0;
  v15 = (int)((double)(int)CHotZonePic::GetPicWidth(v14) * ((a2 - v23) / (v26 - v23)));
  v16 = (int)((double)(int)CHotZonePic::GetPicHeight(*(CHotZonePic **)(this + 3896)) * ((v28 - a3) / (v28 - v25)));
  SetRect(&rc, v15 - 74, v16 - 56, v15 + 74, v16 + 56);
  SetRect(&v19, 0, 0, 95, 72);
  v17 = sub_10011A3B(v21, a4);
  LOBYTE(v29) = 1;
  CHotZonePic::InsertHoverPic(*(_DWORD *)(this + 3896), 8, v17, &rc, 0, &v19, 0, 1728053247, 0.0);
  LOBYTE(v29) = 0;
  std::string::~string(v21);
  v29 = -1;
  return sub_102C0750(v22);
}
