/*
 * func-name: ??0TraceLineSystem@@QAE@PAVWorld@@HKMPAVTexture@@W4BlendMode@@@Z_0
 * func-address: 0x100cdc10
 * callers: 0x10008e09
 * callees: 0x1000f75e, 0x1000fd53
 */

int __thiscall TraceLineSystem::TraceLineSystem(int this, struct World *a2, int a3, int a4, float a5, int a6, int a7)
{
  int v8; // ebx
  unsigned int i; // ebp
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v15; // [esp-B8h] [ebp-DCh]
  int v16; // [esp-B4h] [ebp-D8h]
  int v17; // [esp-B0h] [ebp-D4h]
  int v18; // [esp-ACh] [ebp-D0h]
  int v19; // [esp-A8h] [ebp-CCh]
  int v20; // [esp-A4h] [ebp-C8h]
  int v21; // [esp-A0h] [ebp-C4h]
  int v22; // [esp-9Ch] [ebp-C0h]
  int v23; // [esp-98h] [ebp-BCh]
  int v24; // [esp-94h] [ebp-B8h]
  int v25; // [esp-90h] [ebp-B4h]
  int v26; // [esp-8Ch] [ebp-B0h]
  int v27; // [esp-88h] [ebp-ACh]
  int v28; // [esp-84h] [ebp-A8h]
  int v29; // [esp-80h] [ebp-A4h]
  int v30; // [esp-7Ch] [ebp-A0h]
  int v31; // [esp-78h] [ebp-9Ch]
  int v32; // [esp-74h] [ebp-98h]
  int v33; // [esp-70h] [ebp-94h]
  int v34; // [esp-6Ch] [ebp-90h]
  int v35; // [esp-68h] [ebp-8Ch]
  int v36; // [esp-64h] [ebp-88h]
  int v37; // [esp-60h] [ebp-84h]
  int v38; // [esp-5Ch] [ebp-80h]
  int v39; // [esp-58h] [ebp-7Ch]
  int v40; // [esp-54h] [ebp-78h]
  void *v41; // [esp-50h] [ebp-74h]
  int v42; // [esp-4Ch] [ebp-70h]
  int v43; // [esp-48h] [ebp-6Ch]
  int v44; // [esp-44h] [ebp-68h]
  int v45; // [esp-40h] [ebp-64h]
  int v46; // [esp-3Ch] [ebp-60h]
  int v47; // [esp-38h] [ebp-5Ch]
  int v48; // [esp-34h] [ebp-58h]
  int v49; // [esp-30h] [ebp-54h]
  int v50; // [esp-2Ch] [ebp-50h]
  int v51; // [esp-28h] [ebp-4Ch]
  int v52; // [esp-24h] [ebp-48h]
  int v53; // [esp-20h] [ebp-44h]
  int v54; // [esp-1Ch] [ebp-40h]
  int v55; // [esp-18h] [ebp-3Ch]
  int v56; // [esp-14h] [ebp-38h]
  int v57; // [esp-10h] [ebp-34h]
  int v58; // [esp-Ch] [ebp-30h]
  int v59; // [esp-8h] [ebp-2Ch]
  int v60; // [esp-4h] [ebp-28h]

  FXSystem::FXSystem((FXSystem *)this, a2);
  v8 = 0;
  *(_DWORD *)this = &TraceLineSystem::`vftable';
  *(_DWORD *)(this + 180) = 0;
  *(_DWORD *)(this + 184) = 0;
  *(_DWORD *)(this + 188) = 0;
  *(float *)(this + 216) = 0.0;
  *(float *)(this + 220) = 0.0;
  *(float *)(this + 224) = 0.0;
  *(float *)(this + 240) = 0.0;
  *(float *)(this + 244) = 0.0;
  *(float *)(this + 248) = 0.0;
  *(float *)(this + 276) = 0.0;
  *(float *)(this + 280) = 0.0;
  *(float *)(this + 284) = 0.0;
  *(float *)(this + 328) = 0.0;
  *(float *)(this + 332) = 0.0;
  *(float *)(this + 336) = 0.0;
  *(_DWORD *)(this + 208) = a7;
  *(_DWORD *)(this + 192) = a3;
  sub_1000FD53();
  sub_1000F75E(
    (void *)(this + 176),
    a3,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  *(float *)(this + 296) = 1.0;
  *(_DWORD *)(this + 344) = a6;
  *(_DWORD *)(this + 348) = 0;
  *(_DWORD *)(this + 300) = 0;
  *(_BYTE *)(this + 289) = 1;
  for ( i = 0; ; ++i )
  {
    v10 = *(_DWORD *)(this + 180);
    if ( !v10 || i >= (*(_DWORD *)(this + 184) - v10) / 184 )
      break;
    v11 = *(_DWORD *)(this + 180);
    if ( !v11 || i >= (*(_DWORD *)(this + 184) - v11) / 184 )
      _invalid_parameter_noinfo();
    *(_DWORD *)(v8 + *(_DWORD *)(this + 180) + 56) = a4;
    v12 = *(_DWORD *)(this + 180);
    if ( !v12 || i >= (*(_DWORD *)(this + 184) - v12) / 184 )
      _invalid_parameter_noinfo();
    *(float *)(*(_DWORD *)(this + 180) + v8 + 68) = a5;
    v13 = *(_DWORD *)(this + 180);
    if ( !v13 || i >= (*(_DWORD *)(this + 184) - v13) / 184 )
      _invalid_parameter_noinfo();
    *(float *)(*(_DWORD *)(this + 180) + v8 + 64) = 0.0;
    v8 += 184;
  }
  return this;
}
