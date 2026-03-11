/*
 * func-name: sub_100C10F0
 * func-address: 0x100c10f0
 * callers: 0x10014277
 * callees: 0x100188f9, 0x102c9fe0
 */

void __thiscall sub_100C10F0(Effect_Base *this)
{
  int v2; // esi
  double v3; // st7
  float *v4; // eax
  double v5; // st7
  float *v6; // eax
  double v7; // st7
  float *v8; // eax
  double v9; // st7
  float *v10; // eax
  float v11; // [esp+8h] [ebp-8h] BYREF
  float v12; // [esp+Ch] [ebp-4h] BYREF

  v2 = *((_DWORD *)this + 263);
  *(_DWORD *)(v2 + 260) = *((_DWORD *)this + 273);
  *(float *)(v2 + 192) = *((float *)this + 286);
  v12 = *((float *)this + 290);
  v3 = v12;
  *(float *)(v2 + 196) = v12;
  v11 = *(float *)(v2 + 220) / *(float *)(v2 + 224);
  v12 = v3 / *(float *)(v2 + 200);
  v4 = &v11;
  if ( v11 <= (double)v12 )
    v4 = &v12;
  WaterDecal::setNumNodes((WaterDecal *)v2, (int)(*v4 + 1.0));
  v12 = *((float *)this + 289);
  v5 = v12;
  *(float *)(v2 + 200) = v12;
  v12 = *(float *)(v2 + 220) / *(float *)(v2 + 224);
  v11 = *(float *)(v2 + 196) / v5;
  v6 = &v12;
  if ( v12 <= (double)v11 )
    v6 = &v11;
  WaterDecal::setNumNodes((WaterDecal *)v2, (int)(*v6 + 1.0));
  *(float *)(v2 + 204) = *((float *)this + 287);
  *(float *)(v2 + 208) = *((float *)this + 288);
  v12 = *((float *)this + 292);
  *(float *)(v2 + 212) = *((float *)this + 291);
  *(float *)(v2 + 216) = v12;
  v12 = *((float *)this + 296);
  v7 = v12;
  *(float *)(v2 + 220) = v12;
  v12 = v7 / *(float *)(v2 + 224);
  v11 = *(float *)(v2 + 196) / *(float *)(v2 + 200);
  v8 = &v12;
  if ( v12 <= (double)v11 )
    v8 = &v11;
  WaterDecal::setNumNodes((WaterDecal *)v2, (int)(*v8 + 1.0));
  v12 = *((float *)this + 295);
  v9 = v12;
  *(float *)(v2 + 224) = v12;
  v12 = *(float *)(v2 + 220) / v9;
  v11 = *(float *)(v2 + 196) / *(float *)(v2 + 200);
  v10 = &v12;
  if ( v12 <= (double)v11 )
    v10 = &v11;
  WaterDecal::setNumNodes((WaterDecal *)v2, (int)(*v10 + 1.0));
  *(float *)(v2 + 228) = *((float *)this + 293);
  *(float *)(v2 + 232) = *((float *)this + 294);
  v12 = *((float *)this + 298);
  *(float *)(v2 + 236) = *((float *)this + 297);
  *(float *)(v2 + 240) = v12;
  Effect_Base::RefreshOptions(this);
}
