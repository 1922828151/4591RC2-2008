/*
 * func-name: sub_100D7E20
 * func-address: 0x100d7e20
 * callers: 0x1000f07e
 * callees: 0x1000c383, 0x1001396c, 0x102ca08c, 0x102ca092
 */

int __thiscall sub_100D7E20(int this, int a2, int a3, float a4, float a5, float a6, float a7)
{
  int result; // eax
  int v9; // ecx
  int v11; // eax
  int v12; // eax
  float v13; // [esp+Ch] [ebp-4Ch]
  float v14; // [esp+10h] [ebp-48h]
  float v15; // [esp+14h] [ebp-44h]
  float v16; // [esp+18h] [ebp-40h]
  float v17; // [esp+1Ch] [ebp-3Ch] BYREF
  float v18; // [esp+20h] [ebp-38h]
  float v19; // [esp+24h] [ebp-34h]
  float v20; // [esp+28h] [ebp-30h] BYREF
  float v21; // [esp+2Ch] [ebp-2Ch]
  float v22; // [esp+30h] [ebp-28h]
  float v23[6]; // [esp+34h] [ebp-24h] BYREF
  float v24; // [esp+4Ch] [ebp-Ch]
  float v25; // [esp+50h] [ebp-8h]
  float v26; // [esp+54h] [ebp-4h]
  float v27; // [esp+60h] [ebp+8h]
  float v28; // [esp+70h] [ebp+18h]
  float v29; // [esp+70h] [ebp+18h]
  float v30; // [esp+70h] [ebp+18h]

  result = *(_DWORD *)(this + 4);
  if ( *(_DWORD *)(result + 4) && *(_BYTE *)(result + 168) && *(_BYTE *)(this + 140) )
  {
    *(float *)(this + 196) = 0.0;
    if ( (a2 & 1) != 0 )
      *(float *)(this + 196) = -1.0;
    if ( (a2 & 2) != 0 )
      *(float *)(this + 196) = 1.0;
    v9 = *(_DWORD *)(this + 8);
    v13 = *(float *)(this + 188) * 0.5 * 0.01745329300562541 * *(float *)(this + 196);
    *(float *)(this + 196) = v13;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 224))(v9, LODWORD(v13));
    *(float *)(this + 200) = a7;
    if ( (a3 & 1) != 0 )
      *(float *)(this + 200) = a5;
    if ( (a3 & 2) != 0 )
      *(float *)(this + 200) = -a6;
    if ( 0.0 != *(float *)(this + 200) )
    {
      if ( *(_BYTE *)(this + 192) )
      {
        v28 = *(float *)(this + 196);
        v27 = cos(v28);
        v29 = sin(v28);
        v11 = *(_DWORD *)(this + 4);
        v24 = -v29;
        v14 = v29 + v27 * 0.0 + 0.0 * 0.0;
        v15 = 0.0 * 0.0 + 0.0 + 0.0;
        v16 = v27 + 0.0 * v24 + 0.0 * 0.0;
        (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v11 + 4) + 44))(*(_DWORD *)(v11 + 4), v23);
        v30 = *(float *)(this + 200);
        v17 = v14 * v30;
        v18 = v15 * v30;
        v19 = v30 * v16;
        v20 = v23[2] * v19 + v23[0] * v17 + v23[1] * v18;
        v21 = v23[4] * v18 + v23[3] * v17 + v23[5] * v19;
        v22 = v17 * v24 + v18 * v25 + v19 * v26;
        if ( *(float *)(sub_1000C383((int)&v17) + 4) > 0.70999998 || v21 < 0.0 )
        {
          v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 4))(*(_DWORD *)(this + 8));
          (*(void (__thiscall **)(int, float *, int, _DWORD, int))(*(_DWORD *)v12 + 272))(v12, &v20, this + 144, 0, 1);
        }
      }
    }
    return sub_1001396C(a2, a3, SLOBYTE(a4));
  }
  return result;
}
