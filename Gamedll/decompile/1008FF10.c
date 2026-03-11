/*
 * func-name: ?RefreshOptions@Effect_ParticleSystem@@UAEXXZ_0
 * func-address: 0x1008ff10
 * callers: 0x10001343
 * callees: 0x100015aa
 */

void __thiscall Effect_ParticleSystem::RefreshOptions(Effect_ParticleSystem *this)
{
  FXSystem *v2; // edi
  float v3; // eax
  double v4; // st7
  float v5; // eax
  double v6; // st7
  void (__thiscall *v7)(FXSystem *, _DWORD); // edx
  float v8; // [esp+Ch] [ebp-4h]
  float v9; // [esp+Ch] [ebp-4h]

  if ( *((_DWORD *)this + 263) )
  {
    Effect_Base::RefreshOptions(this);
    v2 = (FXSystem *)*((_DWORD *)this + 263);
    *((_BYTE *)v2 + 317) = *((_BYTE *)this + 1144);
    *((_DWORD *)v2 + 56) = *((_DWORD *)this + 273);
    *((float *)v2 + 57) = *((float *)this + 285);
    *((float *)v2 + 61) = *((float *)this + 287);
    *((float *)v2 + 62) = *((float *)this + 288);
    *((float *)v2 + 63) = *((float *)this + 289);
    *((float *)v2 + 64) = *((float *)this + 296);
    *((float *)v2 + 65) = *((float *)this + 297);
    v3 = *((float *)this + 299);
    v4 = *((float *)this + 300);
    *((float *)v2 + 66) = *((float *)this + 298);
    v8 = v4;
    *((float *)v2 + 67) = v3;
    *((float *)v2 + 68) = v8;
    *((float *)v2 + 69) = *((float *)this + 290);
    *((float *)v2 + 70) = *((float *)this + 294);
    *((float *)v2 + 71) = *((float *)this + 295);
    *((float *)v2 + 72) = *((float *)this + 292);
    *((float *)v2 + 73) = *((float *)this + 293);
    *((float *)v2 + 74) = *((float *)this + 291);
    v5 = *((float *)this + 302);
    v6 = *((float *)this + 303);
    *((float *)v2 + 76) = *((float *)this + 301);
    v9 = v6;
    v7 = *(void (__thiscall **)(FXSystem *, _DWORD))(*(_DWORD *)v2 + 36);
    *((float *)v2 + 77) = v5;
    *((float *)v2 + 78) = v9;
    v7(v2, *((_DWORD *)this + 284));
    *((_BYTE *)v2 + 316) = *((_BYTE *)this + 1224);
    *((float *)v2 + 75) = *((float *)this + 307);
    *((_BYTE *)v2 + 340) = *((_BYTE *)this + 1232);
    *((_DWORD *)v2 + 82) = *((_DWORD *)this + 309);
    *((_BYTE *)v2 + 332) = *((_BYTE *)this + 1243);
    *((float *)v2 + 84) = *((float *)this + 311);
    *((_BYTE *)v2 + 8) = *((_BYTE *)this + 1240);
    FXSystem::SetBBoxCulling(v2, *((_BYTE *)this + 1241));
  }
}
