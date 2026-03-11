/*
 * func-name: ?RefreshOptions@Effect_LaserParticle@@UAEXXZ_0
 * func-address: 0x10083ca0
 * callers: 0x1000e98f
 * callees: none
 */

void __thiscall Effect_LaserParticle::RefreshOptions(Effect_LaserParticle *this)
{
  float *v2; // esi
  float v3; // ecx
  double v4; // st7
  float v5; // ecx
  double v6; // st7
  int v7; // eax
  float v8; // [esp+8h] [ebp-10h]
  float v9; // [esp+Ch] [ebp-Ch]
  float v10; // [esp+14h] [ebp-4h]
  float v11; // [esp+14h] [ebp-4h]

  v2 = (float *)*((_DWORD *)this + 263);
  if ( v2 )
  {
    v2[57] = *((float *)this + 285);
    v8 = *((float *)this + 286);
    v2[63] = v8;
    v2[62] = v8;
    v2[61] = v8;
    v2[64] = *((float *)this + 292);
    v2[65] = *((float *)this + 293);
    v9 = *((float *)this + 294);
    v3 = *((float *)this + 295);
    v4 = *((float *)this + 296);
    v2[66] = v9;
    v10 = v4;
    v2[67] = v3;
    v2[68] = v10;
    v2[69] = *((float *)this + 287);
    v2[70] = *((float *)this + 291);
    v2[72] = *((float *)this + 289);
    v2[73] = *((float *)this + 290);
    v2[74] = *((float *)this + 288);
    v5 = *((float *)this + 298);
    v6 = *((float *)this + 299);
    v2[76] = *((float *)this + 297);
    v2[77] = v5;
    v11 = v6;
    v2[78] = v11;
    *((_BYTE *)v2 + 316) = *((_BYTE *)this + 1208);
    v7 = *(_DWORD *)v2;
    v2[75] = *((float *)this + 303);
    v2[82] = *((float *)this + 304);
    v2[92] = *((float *)this + 306);
    v2[101] = *((float *)this + 307);
    *((_BYTE *)v2 + 372) = *((_BYTE *)this + 1248);
    (*(void (__thiscall **)(float *, _DWORD))(v7 + 36))(v2, *((_DWORD *)this + 284));
    *((_BYTE *)v2 + 8) = *((_BYTE *)this + 1220);
    FXSystem::SetBBoxCulling((FXSystem *)v2, *((_BYTE *)this + 1221));
    Effect_Base::RefreshOptions(this);
  }
}
