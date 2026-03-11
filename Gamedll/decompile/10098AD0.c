/*
 * func-name: ?RefreshSystem@Effect_ShadedParticles@@MAEXXZ_0
 * func-address: 0x10098ad0
 * callers: 0x1000cf36
 * callees: 0x10005646, 0x10005e07, 0x1001230f, 0x10017c51, 0x10018381, 0x102c0ed0
 */

void __thiscall Effect_ShadedParticles::RefreshSystem(Effect_ShadedParticles *this)
{
  int v2; // eax
  FXManager *v3; // eax
  struct FXSystem *FXSystemFromHash; // eax
  struct FXSystem *v5; // edi
  _DWORD *v6; // eax
  float v7; // edx
  double v8; // st7
  float v9; // eax
  float v10; // edx
  double v11; // st7
  void (__thiscall *v12)(struct FXSystem *, _DWORD); // edx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  Light *v16; // ecx
  int *CurrentState; // eax
  float v18; // edx
  float v19; // ecx
  int v20; // edx
  FXManager *v21; // eax
  struct FXSystem *v22; // eax
  float v23; // [esp+1Ch] [ebp-50h]
  int v24; // [esp+1Ch] [ebp-50h]
  float v25; // [esp+30h] [ebp-3Ch]
  float v26; // [esp+30h] [ebp-3Ch]
  int v27; // [esp+34h] [ebp-38h] BYREF
  float v28; // [esp+38h] [ebp-34h]
  float v29; // [esp+3Ch] [ebp-30h]
  int v30; // [esp+40h] [ebp-2Ch]
  _DWORD v31[4]; // [esp+44h] [ebp-28h] BYREF
  char v32[16]; // [esp+54h] [ebp-18h] BYREF
  int v33; // [esp+64h] [ebp-8h] BYREF

  v2 = *((_DWORD *)this + 306);
  if ( v2 && *((_BYTE *)this + 1216) )
  {
    v3 = (FXManager *)FXManager::Instance(*((_DWORD *)this + 305), v2);
    FXSystemFromHash = FXManager::GetFXSystemFromHash(v3);
    v5 = FXSystemFromHash;
    if ( FXSystemFromHash )
    {
      *((_DWORD *)FXSystemFromHash + 5) = *((_DWORD *)this + 214);
      *((_DWORD *)FXSystemFromHash + 6) = *((_DWORD *)this + 215);
      *((_DWORD *)FXSystemFromHash + 7) = *((_DWORD *)this + 216);
      v6 = (_DWORD *)sub_102C0ED0(&v27);
      *((_DWORD *)v5 + 58) = *v6;
      *((_DWORD *)v5 + 59) = v6[1];
      *((_DWORD *)v5 + 60) = v6[2];
      *((_BYTE *)v5 + 112) = *((_BYTE *)this + 816);
      *((float *)v5 + 57) = *((float *)this + 264);
      v25 = *((float *)this + 265);
      *((float *)v5 + 63) = v25;
      *((float *)v5 + 62) = v25;
      *((float *)v5 + 61) = v25;
      *((float *)v5 + 64) = *((float *)this + 271);
      *((float *)v5 + 65) = *((float *)this + 272);
      v27 = *((int *)this + 273);
      v28 = *((float *)this + 274);
      v7 = v28;
      v8 = *((float *)this + 275);
      *((float *)v5 + 66) = *(float *)&v27;
      v29 = v8;
      v9 = v29;
      *((float *)v5 + 67) = v7;
      *((float *)v5 + 68) = v9;
      *((float *)v5 + 69) = *((float *)this + 266);
      *((float *)v5 + 70) = *((float *)this + 270);
      *((float *)v5 + 72) = *((float *)this + 268);
      *((float *)v5 + 73) = *((float *)this + 269);
      *((float *)v5 + 74) = *((float *)this + 267);
      v27 = *((int *)this + 276);
      v28 = *((float *)this + 277);
      v10 = v28;
      v11 = *((float *)this + 278);
      *((float *)v5 + 76) = *(float *)&v27;
      *((float *)v5 + 77) = v10;
      v29 = v11;
      v12 = *(void (__thiscall **)(struct FXSystem *, _DWORD))(*(_DWORD *)v5 + 36);
      *((float *)v5 + 78) = v29;
      v12(v5, *((_DWORD *)this + 263));
      *((_BYTE *)v5 + 316) = *((_BYTE *)this + 1196);
      *((float *)v5 + 75) = *((float *)this + 300);
      *((_DWORD *)v5 + 82) = *((_DWORD *)this + 301);
      if ( *((_BYTE *)this + 1188)
        && SkyController::Instance
        && *((_DWORD *)SkyController::Instance + 178) == *((_DWORD *)this + 178) )
      {
        v13 = *((_DWORD *)this + 280);
        v31[0] = *((_DWORD *)this + 279);
        v14 = *((_DWORD *)this + 281);
        v31[1] = v13;
        v15 = *((_DWORD *)this + 282);
        v31[2] = v14;
        v16 = (Light *)*((_DWORD *)SkyController::Instance + 307);
        v31[3] = v15;
        CurrentState = (int *)Light::GetCurrentState(v16);
        v18 = *((float *)CurrentState + 1);
        v27 = *CurrentState;
        v19 = *((float *)CurrentState + 2);
        v28 = v18;
        v20 = CurrentState[3];
        v29 = v19;
        v30 = v20;
        sub_10005E07();
        v23 = *((float *)this + 298);
        sub_10017C51((int)v32, (int)&v27);
        v24 = sub_1001230F((int)&v27, v23);
        v26 = 1.0 - *((float *)this + 298);
        sub_1001230F((int)&v33, v26);
        sub_10018381((int)v31, v24);
        sub_10005E07();
      }
      *((_DWORD *)v5 + 80) = sub_10005646();
    }
    v21 = (FXManager *)FXManager::Instance(*((_DWORD *)this + 305), *((_DWORD *)this + 306));
    v22 = FXManager::GetFXSystemFromHash(v21);
    if ( v22 )
    {
      *((_BYTE *)v22 + 8) = *((_BYTE *)this + 1208);
      FXSystem::SetBBoxCulling(v22, *((_BYTE *)this + 1209));
    }
  }
}
