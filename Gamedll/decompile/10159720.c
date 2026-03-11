/*
 * func-name: ?AutoRecruitCapacitance@Equip@GameClient@@UAEMMM@Z_0
 * func-address: 0x10159720
 * callers: 0x100142f9
 * callees: none
 */

double __thiscall GameClient::Equip::AutoRecruitCapacitance(GameClient::Equip *this, float a2, float a3)
{
  double result; // st7
  int v5; // ecx
  double v6; // st5
  double v7; // st4
  double v8; // st3
  double v9; // st7
  double v10; // st4
  double v11; // st5
  double v12; // rt1
  double v13; // st5
  float v14; // [esp+4h] [ebp-4h]
  float v15; // [esp+Ch] [ebp+4h]
  float v16; // [esp+10h] [ebp+8h]
  float v17; // [esp+10h] [ebp+8h]
  float v18; // [esp+10h] [ebp+8h]
  float v19; // [esp+10h] [ebp+8h]

  if ( !(*(unsigned __int8 (__thiscall **)(GameClient::Equip *))(*(_DWORD *)this + 120))(this) )
    return 0.0;
  v5 = *((_DWORD *)this + 2);
  v14 = (float)*(int *)(v5 + 320);
  if ( v14 <= (double)*((float *)this + 47) )
    return 0.0;
  v6 = a3;
  if ( a3 <= 0.0 )
    return 0.0;
  v16 = a2 + *((float *)this + 48);
  v7 = v16;
  *((float *)this + 48) = v16;
  v17 = *(float *)(v5 + 324);
  if ( v17 > v7 )
    return 0.0;
  v8 = v17;
  v9 = v7;
  v18 = v14 - *((float *)this + 47);
  v15 = (float)*(int *)(v5 + 328);
  v10 = v18;
  if ( v15 <= (double)v18 )
    v10 = v15;
  if ( v10 < v6 )
  {
    v11 = v10;
  }
  else
  {
    v19 = v6;
    v11 = v19;
  }
  *((float *)this + 47) = v11 + *((float *)this + 47);
  v12 = v11;
  v13 = v9;
  result = v12;
  *((float *)this + 48) = v13 - v8;
  return result;
}
