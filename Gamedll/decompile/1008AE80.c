/*
 * func-name: ?RefreshSystem@Effect_MultiTexParticles@@MAEXXZ_0
 * func-address: 0x1008ae80
 * callers: 0x1000663b
 * callees: 0x10005646, 0x10005e07, 0x1001230f, 0x10017c51, 0x10018381, 0x102c0ed0
 */

void __thiscall Effect_MultiTexParticles::RefreshSystem(Effect_MultiTexParticles *this)
{
  int v2; // eax
  FXManager *v3; // eax
  struct FXSystem *FXSystemFromHash; // eax
  struct FXSystem *v5; // edi
  _DWORD *v6; // eax
  float v7; // ecx
  double v8; // st7
  float v9; // edx
  float v10; // ecx
  double v11; // st7
  int v12; // eax
  float v13; // edx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  Light *v17; // ecx
  int *CurrentState; // eax
  float v19; // ecx
  float v20; // edx
  int v21; // eax
  FXManager *v22; // eax
  struct FXSystem *v23; // eax
  float v24; // [esp+1Ch] [ebp-50h]
  int v25; // [esp+1Ch] [ebp-50h]
  float v26; // [esp+30h] [ebp-3Ch]
  float v27; // [esp+30h] [ebp-3Ch]
  int v28; // [esp+34h] [ebp-38h] BYREF
  float v29; // [esp+38h] [ebp-34h]
  float v30; // [esp+3Ch] [ebp-30h]
  int v31; // [esp+40h] [ebp-2Ch]
  _DWORD v32[4]; // [esp+44h] [ebp-28h] BYREF
  char v33[16]; // [esp+54h] [ebp-18h] BYREF
  int v34; // [esp+64h] [ebp-8h] BYREF

  v2 = *((_DWORD *)this + 315);
  if ( v2 && *((_BYTE *)this + 1256) )
  {
    v3 = (FXManager *)FXManager::Instance(*((_DWORD *)this + 313), v2);
    FXSystemFromHash = FXManager::GetFXSystemFromHash(v3);
    v5 = FXSystemFromHash;
    if ( FXSystemFromHash )
    {
      *((_DWORD *)FXSystemFromHash + 5) = *((_DWORD *)this + 214);
      *((_DWORD *)FXSystemFromHash + 6) = *((_DWORD *)this + 215);
      *((_DWORD *)FXSystemFromHash + 7) = *((_DWORD *)this + 216);
      v6 = (_DWORD *)sub_102C0ED0(&v28);
      *((_DWORD *)v5 + 58) = *v6;
      *((_DWORD *)v5 + 59) = v6[1];
      *((_DWORD *)v5 + 60) = v6[2];
      *((_BYTE *)v5 + 112) = *((_BYTE *)this + 816);
      *((_BYTE *)v5 + 317) = *((_BYTE *)this + 1068);
      *((_DWORD *)v5 + 56) = *((_DWORD *)this + 263);
      *((float *)v5 + 57) = *((float *)this + 266);
      v26 = *((float *)this + 268);
      *((float *)v5 + 63) = v26;
      *((float *)v5 + 62) = v26;
      *((float *)v5 + 61) = v26;
      *((float *)v5 + 64) = *((float *)this + 274);
      *((float *)v5 + 65) = *((float *)this + 275);
      v28 = *((int *)this + 276);
      v29 = *((float *)this + 277);
      v7 = v29;
      v8 = *((float *)this + 278);
      *((float *)v5 + 66) = *(float *)&v28;
      v30 = v8;
      v9 = v30;
      *((float *)v5 + 67) = v7;
      *((float *)v5 + 68) = v9;
      *((float *)v5 + 69) = *((float *)this + 269);
      *((float *)v5 + 70) = *((float *)this + 273);
      *((float *)v5 + 72) = *((float *)this + 271);
      *((float *)v5 + 73) = *((float *)this + 272);
      *((float *)v5 + 74) = *((float *)this + 270);
      v28 = *((int *)this + 279);
      v29 = *((float *)this + 280);
      v10 = v29;
      v11 = *((float *)this + 281);
      *((float *)v5 + 76) = *(float *)&v28;
      v12 = *(_DWORD *)v5;
      v30 = v11;
      v13 = v30;
      *((float *)v5 + 77) = v10;
      *((float *)v5 + 78) = v13;
      (*(void (__thiscall **)(struct FXSystem *, _DWORD))(v12 + 36))(v5, *((_DWORD *)this + 265));
      *((_BYTE *)v5 + 316) = *((_BYTE *)this + 1212);
      *((float *)v5 + 75) = *((float *)this + 304);
      *((_DWORD *)v5 + 82) = *((_DWORD *)this + 305);
      *((_BYTE *)v5 + 332) = *((_BYTE *)this + 1227);
      *((_BYTE *)v5 + 405) = *((_BYTE *)this + 1228);
      if ( *((_BYTE *)this + 1204)
        && SkyController::Instance
        && *((_DWORD *)SkyController::Instance + 178) == *((_DWORD *)this + 178) )
      {
        v14 = *((_DWORD *)this + 282);
        v32[1] = *((_DWORD *)this + 283);
        v15 = *((_DWORD *)this + 285);
        v32[0] = v14;
        v16 = *((_DWORD *)this + 284);
        v32[3] = v15;
        v17 = (Light *)*((_DWORD *)SkyController::Instance + 307);
        v32[2] = v16;
        CurrentState = (int *)Light::GetCurrentState(v17);
        v19 = *((float *)CurrentState + 1);
        v28 = *CurrentState;
        v20 = *((float *)CurrentState + 2);
        v21 = CurrentState[3];
        v29 = v19;
        v30 = v20;
        v31 = v21;
        sub_10005E07();
        v24 = *((float *)this + 302);
        sub_10017C51((int)v33, (int)&v28);
        v25 = sub_1001230F((int)&v28, v24);
        v27 = 1.0 - *((float *)this + 302);
        sub_1001230F((int)&v34, v27);
        sub_10018381((int)v32, v25);
        sub_10005E07();
      }
      *((_DWORD *)v5 + 80) = sub_10005646();
    }
    v22 = (FXManager *)FXManager::Instance(*((_DWORD *)this + 313), *((_DWORD *)this + 315));
    v23 = FXManager::GetFXSystemFromHash(v22);
    if ( v23 )
    {
      *((_BYTE *)v23 + 8) = *((_BYTE *)this + 1224);
      FXSystem::SetBBoxCulling(v23, *((_BYTE *)this + 1225));
    }
  }
}
