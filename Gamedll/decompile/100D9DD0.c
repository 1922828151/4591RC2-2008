/*
 * func-name: sub_100D9DD0
 * func-address: 0x100d9dd0
 * callers: 0x10017111
 * callees: 0x10018e71, 0x102c0ed0, 0x102c0f30, 0x102ca092
 */

float *__thiscall sub_100D9DD0(int this, int a2)
{
  float *v3; // eax
  float v4; // edx
  double v5; // st7
  double v6; // st7
  Light *v7; // ecx
  _DWORD *v8; // esi
  struct LightState *CurrentState; // eax
  float *result; // eax
  float v11; // edx
  double v12; // st7
  double v13; // st7
  float *v14; // eax
  float *v15; // ecx
  struct LightState *v16; // eax
  float v17; // edx
  float v18; // ecx
  float v19; // [esp+Ch] [ebp-74h]
  float v20; // [esp+Ch] [ebp-74h]
  float v21; // [esp+Ch] [ebp-74h]
  float v22; // [esp+Ch] [ebp-74h]
  float v23; // [esp+Ch] [ebp-74h]
  float v24; // [esp+Ch] [ebp-74h]
  float v25; // [esp+10h] [ebp-70h] BYREF
  float v26; // [esp+14h] [ebp-6Ch]
  float v27; // [esp+18h] [ebp-68h]
  float v28; // [esp+1Ch] [ebp-64h]
  float v29; // [esp+20h] [ebp-60h]
  float v30; // [esp+24h] [ebp-5Ch]
  int v31; // [esp+28h] [ebp-58h] BYREF
  float v32; // [esp+2Ch] [ebp-54h]
  float v33; // [esp+30h] [ebp-50h]
  _BYTE v34[12]; // [esp+34h] [ebp-4Ch] BYREF
  _BYTE v35[64]; // [esp+40h] [ebp-40h] BYREF

  sub_102C0F30(&v25);
  *(float *)&v31 = -v25;
  v32 = -v26;
  v33 = -v27;
  sub_10018E71(v35, (int)&v31);
  v3 = *(float **)(this + 1084);
  if ( v3 )
  {
    v19 = *(float *)(this + 1224);
    v28 = v25 * v19;
    v29 = v26 * v19;
    v30 = v19 * v27;
    *(float *)&v31 = v28 + *(float *)(this + 856);
    v32 = *(float *)(this + 860) + v29;
    v4 = v32;
    v5 = *(float *)(this + 864);
    v3[214] = *(float *)&v31;
    v6 = v5 + v30;
    v3[215] = v4;
    v33 = v6;
    v3[216] = v33;
    v7 = *(Light **)(this + 1084);
    v8 = (_DWORD *)((char *)v7 + 856);
    CurrentState = Light::GetCurrentState(v7);
    *((_DWORD *)CurrentState + 9) = *v8;
    CurrentState = (struct LightState *)((char *)CurrentState + 36);
    *((_DWORD *)CurrentState + 1) = v8[1];
    *((_DWORD *)CurrentState + 2) = v8[2];
    qmemcpy((void *)(*(_DWORD *)(this + 1084) + 868), v35, 0x40u);
    v20 = *(float *)&GSeconds * 1.799999952316284;
    v21 = sin(v20);
    v22 = fabs(v21);
    v23 = *(float *)(this + 1236) * 0.5 + 0.5 * v22;
    *((float *)Light::GetCurrentState(*(Light **)(this + 1084)) + 4) = v23;
  }
  result = *(float **)(this + 1116);
  if ( result )
  {
    v24 = *(float *)(this + 1228);
    *(float *)&v31 = v24 * v25;
    v32 = v26 * v24;
    v33 = v24 * v27;
    v28 = *(float *)(this + 856) + *(float *)&v31;
    v29 = *(float *)(this + 860) + v32;
    v11 = v29;
    v12 = *(float *)(this + 864);
    result[214] = v28;
    v13 = v12 + v33;
    result[215] = v11;
    v30 = v13;
    result[216] = v30;
    v14 = (float *)sub_102C0ED0(v34);
    v15 = *(float **)(this + 1116);
    *(float *)&v31 = *v14 * 0.75;
    v32 = v14[1] * 0.75;
    v33 = 0.75 * v14[2];
    v28 = v15[214] + *(float *)&v31;
    v29 = v15[215] + v32;
    v30 = v15[216] + v33;
    v16 = Light::GetCurrentState((Light *)v15);
    v17 = v29;
    result = (float *)((char *)v16 + 36);
    *result = v28;
    v18 = v30;
    result[1] = v17;
    result[2] = v18;
    qmemcpy((void *)(*(_DWORD *)(this + 1116) + 868), v35, 0x40u);
  }
  return result;
}
