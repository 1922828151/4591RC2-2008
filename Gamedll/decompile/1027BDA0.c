/*
 * func-name: ?SetIsInside@CRadarMapUI@@QAEX_N@Z_0
 * func-address: 0x1027bda0
 * callers: 0x10002077
 * callees: 0x1000d42c, 0x100155aa
 */

void __thiscall CRadarMapUI::SetIsInside(CRadarMapUI *this, bool a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  char v7; // [esp-54h] [ebp-6Ch] BYREF
  int v8; // [esp-50h] [ebp-68h]
  int v9; // [esp-4Ch] [ebp-64h]
  int v10; // [esp-48h] [ebp-60h]
  int v11; // [esp-44h] [ebp-5Ch]
  int v12; // [esp-40h] [ebp-58h]
  int v13; // [esp-3Ch] [ebp-54h]
  int v14; // [esp-38h] [ebp-50h]
  int v15; // [esp-34h] [ebp-4Ch]
  int v16; // [esp-30h] [ebp-48h]
  int v17; // [esp-2Ch] [ebp-44h]
  char v18; // [esp-28h] [ebp-40h]
  int v19; // [esp-24h] [ebp-3Ch]
  int v20; // [esp-20h] [ebp-38h]
  int v21; // [esp-1Ch] [ebp-34h]
  int v22; // [esp-18h] [ebp-30h]
  int v23; // [esp-14h] [ebp-2Ch]
  int v24; // [esp-10h] [ebp-28h]
  int v25; // [esp-Ch] [ebp-24h]
  int v26; // [esp-8h] [ebp-20h]
  int v27; // [esp-4h] [ebp-1Ch]
  char *v28; // [esp+8h] [ebp-10h]
  int v29; // [esp+14h] [ebp-4h]

  if ( a2 )
  {
    if ( *((_BYTE *)this + 4088) )
    {
      sub_100155AA((int)this + 4004);
      v3 = *((_DWORD *)this + 1019);
      v14 = *((_DWORD *)this + 1018);
      v4 = *((_DWORD *)this + 1020);
      v15 = v3;
      v5 = *((_DWORD *)this + 1021);
      v16 = v4;
      v17 = v5;
      v28 = &v7;
      v29 = 0;
      std::string::string(&v7, (char *)this + 4044);
      v29 = -1;
      CRadarMapUI::SetInsideMap(
        v7,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
  }
  else
  {
    v27 = (int)this + 3988;
    v6 = *((_DWORD *)this + 974);
    v26 = (int)this + 3960;
    *((_BYTE *)this + 4090) = 0;
    CHotZonePic::SetPic(v6, v26);
  }
}
