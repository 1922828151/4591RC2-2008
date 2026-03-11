/*
 * func-name: ?Tick@SamplePlayer@@UAEXXZ_0
 * func-address: 0x100e68b0
 * callers: 0x1000aaec
 * callees: 0x10003f5d, 0x102c0ed0, 0x102c9dbc
 */

void __thiscall SamplePlayer::Tick(SamplePlayer *this)
{
  float *v2; // eax
  double v3; // st7
  float v4; // edx
  float v5; // eax
  _DWORD *v6; // eax
  Light *v7; // ecx
  struct LightState *CurrentState; // eax
  Light *v9; // ecx
  struct LightState *v10; // eax
  double v11; // st7
  struct LightState *v12; // eax
  Light *v13; // ecx
  Model *v14; // esi
  SampleWeapon *v15; // ecx
  float v16; // [esp+0h] [ebp-40h]
  float v17; // [esp+4h] [ebp-3Ch]
  float v18; // [esp+8h] [ebp-38h]
  float v19; // [esp+Ch] [ebp-34h]
  float v20; // [esp+18h] [ebp-28h]
  float v21; // [esp+18h] [ebp-28h]
  float v22; // [esp+18h] [ebp-28h]
  float v23; // [esp+18h] [ebp-28h]
  float v24; // [esp+1Ch] [ebp-24h]
  float v25; // [esp+20h] [ebp-20h]
  float v26; // [esp+24h] [ebp-1Ch]
  float v27; // [esp+28h] [ebp-18h]
  float v28; // [esp+2Ch] [ebp-14h]
  float v29; // [esp+30h] [ebp-10h]
  float v30; // [esp+34h] [ebp-Ch] BYREF
  float v31; // [esp+38h] [ebp-8h]
  float v32; // [esp+3Ch] [ebp-4h]

  if ( *((_BYTE *)this + 1064) )
  {
    v2 = (float *)sub_102C0ED0(&v30);
    v27 = *v2 * 5.0;
    v28 = v2[1] * 5.0;
    v29 = 5.0 * v2[2];
    v24 = *((float *)this + 214) + 0.0;
    v25 = *((float *)this + 215) + 1.799999952316284;
    v26 = *((float *)this + 216) + 0.0;
    v30 = v24 - v27;
    v31 = v25 - v28;
    v3 = v26 - v29;
  }
  else
  {
    v30 = *((float *)this + 214) + 0.0;
    v31 = *((float *)this + 215) + 1.799999952316284;
    v3 = *((float *)this + 216) + 0.0;
  }
  v32 = v3;
  v4 = v31;
  v5 = v32;
  *((float *)this + 263) = v30;
  *((float *)this + 264) = v4;
  *((float *)this + 265) = v5;
  v6 = (_DWORD *)*((_DWORD *)this + 268);
  if ( v6 )
  {
    v6[214] = *((_DWORD *)this + 263);
    v6[215] = *((_DWORD *)this + 264);
    v6[216] = *((_DWORD *)this + 265);
    qmemcpy((void *)(*((_DWORD *)this + 268) + 868), (char *)this + 868, 0x40u);
    v7 = (Light *)*((_DWORD *)this + 268);
    if ( *((_BYTE *)this + 1066) )
    {
      CurrentState = Light::GetCurrentState(v7);
      v9 = (Light *)*((_DWORD *)this + 268);
      if ( *((float *)CurrentState + 4) >= 10.0 )
      {
        v10 = Light::GetCurrentState(v9);
        v11 = 10.0;
      }
      else
      {
        v20 = *((float *)Light::GetCurrentState(v9) + 4) + *(float *)&GSeconds * 0.00009999999747378752;
        v10 = Light::GetCurrentState(*((Light **)this + 268));
        v11 = v20;
      }
    }
    else
    {
      v12 = Light::GetCurrentState(v7);
      v13 = (Light *)*((_DWORD *)this + 268);
      if ( *((float *)v12 + 4) <= 0.0 )
      {
        v10 = Light::GetCurrentState(v13);
        v11 = 0.0;
      }
      else
      {
        v21 = *((float *)Light::GetCurrentState(v13) + 4) - *(float *)&GSeconds * 0.00009999999747378752;
        v10 = Light::GetCurrentState(*((Light **)this + 268));
        v11 = v21;
      }
    }
    *((float *)v10 + 4) = v11;
  }
  v14 = (Model *)*((_DWORD *)this + 179);
  if ( v14 )
  {
    v22 = *((float *)this + 212) * *((float *)this + 212)
        + *((float *)this + 211) * *((float *)this + 211)
        + *((float *)this + 213) * *((float *)this + 213);
    v23 = sqrt(v22);
    if ( v23 <= 0.1000000014901161 )
    {
      v19 = 1.0;
      v18 = 0.0;
      v17 = -1.0;
      v16 = 0.2;
      if ( *((_BYTE *)this + 1065) )
        Model::TransitionToAnimation(v14, *((_DWORD *)this + 286), v16, v17, v18, v19);
      else
        Model::TransitionToAnimation(v14, *((_DWORD *)this + 281), v16, v17, v18, v19);
      v15 = (SampleWeapon *)*((_DWORD *)this + 269);
      if ( v15 )
        SampleWeapon::PlayIdleAnimation(v15);
    }
  }
  Actor::Tick(this);
}
