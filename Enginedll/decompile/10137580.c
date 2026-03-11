/*
 * func-name: ?PostRenderSubarea@World@@IAEXXZ
 * func-address: 0x10137580
 * callers: 0x101396e0
 * callees: 0x10001440, 0x10064610, 0x1017a0b0
 */

void __thiscall World::PostRenderSubarea(World *this)
{
  struct Canvas *v2; // eax
  int v3; // edi
  bool v4; // sf
  double v5; // st7
  double v6; // st5
  struct Canvas *v7; // eax
  int v8; // edi
  struct Canvas *v9; // eax
  struct Canvas *v10; // eax
  float v11; // [esp+18h] [ebp-60h]
  float v12; // [esp+18h] [ebp-60h]
  int v13; // [esp+18h] [ebp-60h]
  int i; // [esp+18h] [ebp-60h]
  float v15; // [esp+1Ch] [ebp-5Ch]
  float v16; // [esp+1Ch] [ebp-5Ch]
  float v17; // [esp+1Ch] [ebp-5Ch]
  float v18; // [esp+1Ch] [ebp-5Ch]
  float v19; // [esp+20h] [ebp-58h] BYREF
  float v20; // [esp+24h] [ebp-54h]
  float v21; // [esp+28h] [ebp-50h]
  float v22; // [esp+2Ch] [ebp-4Ch] BYREF
  float v23; // [esp+30h] [ebp-48h]
  float v24; // [esp+34h] [ebp-44h]
  float v25; // [esp+38h] [ebp-40h]
  float v26; // [esp+3Ch] [ebp-3Ch]
  float v27; // [esp+40h] [ebp-38h]
  float v28[4]; // [esp+44h] [ebp-34h] BYREF
  float v29; // [esp+54h] [ebp-24h]
  float v30; // [esp+58h] [ebp-20h]
  float v31; // [esp+5Ch] [ebp-1Ch]
  float v32; // [esp+60h] [ebp-18h]
  float v33; // [esp+64h] [ebp-14h]
  float v34; // [esp+68h] [ebp-10h]
  int v35; // [esp+74h] [ebp-4h]

  v2 = Canvas::Instance();
  (*(void (__thiscall **)(struct Canvas *))(*(_DWORD *)v2 + 92))(v2);
  sub_10001440(v28);
  v3 = 0;
  v4 = *((int *)this + 137) < 0;
  v5 = -*((float *)this + 134) * 0.5;
  v35 = 0;
  v11 = v5;
  v15 = -*((float *)this + 135) * 0.5;
  v25 = v11;
  v29 = v11;
  v26 = 0.0;
  v27 = v15;
  v30 = 0.0;
  v6 = *((float *)this + 134) * 0.5;
  v31 = v15;
  v16 = v6;
  v12 = 0.5 * *((float *)this + 135);
  v25 = v16;
  v32 = v16;
  v26 = 0.0;
  v33 = 0.0;
  v27 = v12;
  v34 = v12;
  v22 = 0.0;
  v13 = 0;
  v23 = 0.0;
  v24 = 0.0;
  v19 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  if ( !v4 )
  {
    do
    {
      v22 = v29;
      v23 = *((float *)this + 139);
      v17 = (v34 - v31) * (double)v13 / (double)*((int *)this + 137) + v31;
      v24 = v17;
      v19 = v32;
      v20 = *((float *)this + 139);
      v21 = v17;
      v7 = Canvas::Instance();
      (*(void (__thiscall **)(struct Canvas *, float *, float *, int))(*(_DWORD *)v7 + 96))(v7, &v22, &v19, -65536);
      v13 = ++v3;
    }
    while ( v3 <= *((_DWORD *)this + 137) );
  }
  v8 = 0;
  for ( i = 0; v8 <= *((_DWORD *)this + 136); i = v8 )
  {
    v18 = (v32 - v29) * (double)i / (double)*((int *)this + 136) + v29;
    v22 = v18;
    v23 = *((float *)this + 139);
    v24 = v31;
    v19 = v18;
    v20 = *((float *)this + 139);
    v21 = v34;
    v9 = Canvas::Instance();
    (*(void (__thiscall **)(struct Canvas *, float *, float *, int))(*(_DWORD *)v9 + 96))(v9, &v22, &v19, -65536);
    ++v8;
  }
  v10 = Canvas::Instance();
  (*(void (__thiscall **)(struct Canvas *))(*(_DWORD *)v10 + 100))(v10);
  v35 = -1;
  sub_1017A0B0(v28);
}
