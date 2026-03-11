/*
 * func-name: ?Tick@Effect_LaserParticle@@UAEXXZ_0
 * func-address: 0x10083a60
 * callers: 0x10011da6
 * callees: 0x10005646, 0x10005e07, 0x1001230f, 0x10017c51, 0x10018381, 0x102c0ed0
 */

void __thiscall Effect_LaserParticle::Tick(Effect_LaserParticle *this)
{
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  float v4; // edx
  float v5; // ecx
  float v6; // edx
  Light *v7; // ecx
  struct LightState *CurrentState; // eax
  float v9; // ecx
  float v10; // edx
  float v11; // eax
  int v12; // eax
  float v13; // ecx
  float v14; // edx
  float v15; // ebx
  bool v16; // zf
  float v17; // [esp+8h] [ebp-64h]
  int v18; // [esp+8h] [ebp-64h]
  float v19; // [esp+18h] [ebp-54h]
  float v20; // [esp+18h] [ebp-54h]
  int v21; // [esp+1Ch] [ebp-50h] BYREF
  float v22; // [esp+20h] [ebp-4Ch]
  float v23; // [esp+24h] [ebp-48h]
  float v24; // [esp+28h] [ebp-44h]
  float v25; // [esp+2Ch] [ebp-40h]
  float v26; // [esp+30h] [ebp-3Ch]
  float v27; // [esp+34h] [ebp-38h]
  float v28; // [esp+38h] [ebp-34h]
  float v29; // [esp+3Ch] [ebp-30h] BYREF
  float v30; // [esp+40h] [ebp-2Ch]
  float v31; // [esp+44h] [ebp-28h]
  float v32; // [esp+48h] [ebp-24h]
  char v33[16]; // [esp+4Ch] [ebp-20h] BYREF
  int v34[4]; // [esp+5Ch] [ebp-10h] BYREF

  v2 = (_DWORD *)*((_DWORD *)this + 263);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 1064) )
    {
      v3 = (_DWORD *)sub_102C0ED0(&v21);
      v2[58] = *v3;
      v2[59] = v3[1];
      v2[60] = v3[2];
      v2[102] = *((_DWORD *)this + 308);
      v2[103] = *((_DWORD *)this + 309);
      v2[104] = *((_DWORD *)this + 310);
      if ( *((_BYTE *)this + 1200)
        && SkyController::Instance
        && *((_DWORD *)SkyController::Instance + 178) == *((_DWORD *)this + 178) )
      {
        v4 = *((float *)this + 274);
        v26 = *((float *)this + 275);
        v5 = *((float *)this + 277);
        v25 = v4;
        v6 = *((float *)this + 276);
        v28 = v5;
        v7 = (Light *)*((_DWORD *)SkyController::Instance + 307);
        v27 = v6;
        CurrentState = Light::GetCurrentState(v7);
        v9 = *((float *)CurrentState + 1);
        v29 = *(float *)CurrentState;
        v10 = *((float *)CurrentState + 2);
        v11 = *((float *)CurrentState + 3);
        v30 = v9;
        v31 = v10;
        v32 = v11;
        sub_10005E07();
        v17 = *((float *)this + 301);
        sub_10017C51((int)v33, (int)&v29);
        v18 = sub_1001230F((int)&v21, v17);
        v19 = 1.0 - *((float *)this + 301);
        sub_1001230F((int)v34, v19);
        sub_10018381((int)&v29, v18);
        sub_10005E07();
        *(float *)&v12 = v29;
        v13 = v30;
        v14 = v31;
        v15 = v32;
      }
      else
      {
        v12 = *((int *)this + 274);
        v13 = *((float *)this + 275);
        v14 = *((float *)this + 276);
        v15 = *((float *)this + 277);
      }
      v16 = *((_DWORD *)this + 273) == 2;
      v24 = v15;
      v28 = v15;
      v23 = v14;
      v22 = v13;
      v21 = v12;
      v25 = *(float *)&v12;
      v26 = v13;
      v27 = v14;
      if ( v16 )
      {
        v20 = *((float *)this + 278);
        v29 = v20 * *(float *)&v21;
        v25 = v29;
        v30 = v22 * v20;
        v26 = v30;
        v31 = v20 * v23;
        v27 = v31;
        v32 = v20 * v24;
        v28 = v32;
      }
      else
      {
        v28 = *((float *)this + 278) * v24;
      }
      v2[80] = sub_10005646();
    }
    Effect_Base::Tick(this);
  }
  else
  {
    Effect_Base::Tick(this);
  }
}
