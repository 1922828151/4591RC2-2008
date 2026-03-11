/*
 * func-name: ?SetDayTime@SkyController@@QAEXM@Z
 * func-address: 0x1012de10
 * callers: 0x1012e260, 0x10131750, 0x10137180
 * callees: 0x10016620, 0x10016650, 0x10016680, 0x1008fcc0, 0x10118dc0, 0x1012c140, 0x1012d220, 0x1012d2b0, 0x1012d370
 */

void __thiscall SkyController::SetDayTime(SkyController *this, float a2)
{
  double v3; // st7
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // edi
  _DWORD *v7; // eax
  double v8; // st7
  bool v9; // c0
  bool v10; // c3
  double v11; // st7
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  _DWORD *v15; // ecx
  _DWORD *v16; // eax
  float *v17; // eax
  float *v18; // eax
  float *v19; // eax
  _DWORD *v20; // ecx
  _DWORD *v21; // eax
  float v22; // [esp+10h] [ebp-78h]
  float v23; // [esp+14h] [ebp-74h]
  float v24; // [esp+14h] [ebp-74h]
  float v25; // [esp+14h] [ebp-74h]
  float v26; // [esp+14h] [ebp-74h]
  int v27[2]; // [esp+18h] [ebp-70h] BYREF
  float v28; // [esp+20h] [ebp-68h]
  float v29[4]; // [esp+28h] [ebp-60h] BYREF
  int v30[4]; // [esp+38h] [ebp-50h] BYREF
  float v31[16]; // [esp+48h] [ebp-40h] BYREF

  if ( SkyController::m_ControllerScript )
  {
    SkyController::ResetSkyState(this);
    v3 = a2;
    *(double *)v27 = a2;
    if ( *((float *)this + 948) < (double)a2 )
    {
      while ( 1 )
      {
        v22 = 10.0;
        v24 = *((float *)this + 948) + 10.0;
        *((float *)this + 948) = v24;
        if ( v24 > v3 )
        {
          v22 = 10.0 - (v24 - v3);
          *((float *)this + 948) = v3;
        }
        Script::Tick(SkyController::m_ControllerScript);
        v25 = v22 / *((float *)this + 947);
        SkyController::UpdateFades(this, v25);
        if ( *((float *)this + 948) >= *(double *)v27 )
          break;
        v3 = a2;
      }
    }
    v4 = (_DWORD *)*((_DWORD *)this + 307);
    if ( v4 )
    {
      v4[278] = *((_DWORD *)this + 903);
      v4[279] = *((_DWORD *)this + 904);
      v4[280] = *((_DWORD *)this + 905);
      v5 = (_DWORD *)(*((_DWORD *)this + 307) + 1124);
      *v5 = *((_DWORD *)this + 906);
      v5[1] = *((_DWORD *)this + 907);
      v5[2] = *((_DWORD *)this + 908);
      v6 = *((_DWORD *)this + 307) + 1076;
      *(float *)(v6 + 16) = SkyController::GetBiasLightIntensity(this) + *((float *)this + 1102) / 2.5;
      v7 = (_DWORD *)(*((_DWORD *)this + 307) + 856);
      *v7 = *((_DWORD *)this + 903);
      v7[1] = *((_DWORD *)this + 904);
      v7[2] = *((_DWORD *)this + 905);
      qmemcpy((void *)(*((_DWORD *)this + 307) + 868), sub_1008FCC0(v31, (int *)this + 906), 0x40u);
      if ( flt_10282B54 > (double)*((float *)this + 948)
        || (v8 = *((float *)this + 948), v9 = flt_10282B50 < v8, v10 = flt_10282B50 == v8, v11 = flt_10282B50, v9 || v10) )
      {
        v21 = (_DWORD *)(*((_DWORD *)this + 307) + 1076);
        *v21 = *((_DWORD *)this + 912);
        v21[1] = *((_DWORD *)this + 913);
        v21[2] = *((_DWORD *)this + 914);
        v21[3] = *((_DWORD *)this + 915);
      }
      else if ( flt_10282B4C <= (double)*((float *)this + 948) )
      {
        if ( flt_10282B44 <= (double)*((float *)this + 948) )
        {
          if ( *((float *)this + 948) < v11 )
          {
            v26 = 1.0 - (v11 - *((float *)this + 948)) / flt_10282B40;
            v17 = sub_10016650((float *)this + 912, v29, (float *)this + 894);
            v18 = sub_10016620(v17, (float *)v30, v26);
            v19 = sub_10016680((float *)this + 894, (float *)v27, v18);
            v20 = (_DWORD *)(*((_DWORD *)this + 307) + 1076);
            *v20 = *(_DWORD *)v19;
            v20[1] = *((_DWORD *)v19 + 1);
            v20[2] = *((_DWORD *)v19 + 2);
            v20[3] = *((_DWORD *)v19 + 3);
          }
        }
        else
        {
          v16 = (_DWORD *)(*((_DWORD *)this + 307) + 1076);
          *v16 = *((_DWORD *)this + 894);
          v16[1] = *((_DWORD *)this + 895);
          v16[2] = *((_DWORD *)this + 896);
          v16[3] = *((_DWORD *)this + 897);
        }
      }
      else
      {
        v23 = 1.0 - (flt_10282B4C - *((float *)this + 948)) / flt_10282B48;
        v12 = sub_10016650((float *)this + 894, v29, (float *)this + 912);
        v13 = sub_10016620(v12, (float *)v27, v23);
        v14 = sub_10016680((float *)this + 912, (float *)v30, v13);
        v15 = (_DWORD *)(*((_DWORD *)this + 307) + 1076);
        *v15 = *(_DWORD *)v14;
        v15[1] = *((_DWORD *)v14 + 1);
        v15[2] = *((_DWORD *)v14 + 2);
        v15[3] = *((_DWORD *)v14 + 3);
      }
      *(float *)v27 = 0.0;
      *(float *)&v27[1] = 0.0;
      v28 = 0.0;
      SkyController::GetBiasLightColor(this, (struct Vector *)v27);
      *(float *)(*((_DWORD *)this + 307) + 1076) = *(float *)(*((_DWORD *)this + 307) + 1076) * *(float *)v27;
      *(float *)(*((_DWORD *)this + 307) + 1080) = *(float *)&v27[1] * *(float *)(*((_DWORD *)this + 307) + 1080);
      *(float *)(*((_DWORD *)this + 307) + 1084) = *(float *)(*((_DWORD *)this + 307) + 1084) * v28;
    }
  }
}
