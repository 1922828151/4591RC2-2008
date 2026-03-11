/*
 * func-name: ?CreateControllerActor@NxPhysics@@QAEPAVNxActor@@PAVActor@@JABVBBox@@ABVMatrix@@MPAVPhysicsController_Callback@@M@Z
 * func-address: 0x10141710
 * callers: none
 * callees: 0x10140eb0, 0x101a2534, 0x101a281a
 */

struct NxActor *__thiscall NxPhysics::CreateControllerActor(
        NxPhysics *this,
        struct Actor *a2,
        float a3,
        const struct BBox *a4,
        const struct Matrix *a5,
        float a6,
        struct PhysicsController_Callback *a7,
        float a8)
{
  float *v10; // esi
  double v11; // st7
  double v12; // st4
  double v13; // st3
  double v14; // st2
  double v15; // st4
  float *v16; // eax
  float *v17; // eax
  double v18; // st7
  _DWORD *v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edi
  _DWORD *v24; // ebp
  float *v25; // eax
  float *v26; // eax
  double v27; // st7
  float v28; // [esp+8h] [ebp-78h]
  float v29; // [esp+Ch] [ebp-74h]
  float v30[2]; // [esp+10h] [ebp-70h] BYREF
  float v31; // [esp+18h] [ebp-68h] BYREF
  _DWORD v32[4]; // [esp+1Ch] [ebp-64h] BYREF
  double v33; // [esp+2Ch] [ebp-54h]
  double v34; // [esp+34h] [ebp-4Ch]
  double v35; // [esp+3Ch] [ebp-44h]
  int v36; // [esp+44h] [ebp-3Ch]
  float v37; // [esp+48h] [ebp-38h]
  float v38; // [esp+4Ch] [ebp-34h]
  float v39; // [esp+50h] [ebp-30h]
  char *v40; // [esp+54h] [ebp-2Ch]
  int v41; // [esp+58h] [ebp-28h]
  int v42; // [esp+5Ch] [ebp-24h]
  float v43; // [esp+64h] [ebp-1Ch]
  float v44; // [esp+68h] [ebp-18h]
  int v45; // [esp+6Ch] [ebp-14h]
  int v46; // [esp+7Ch] [ebp-4h]
  float v47; // [esp+8Ch] [ebp+Ch]
  float v48; // [esp+8Ch] [ebp+Ch]
  float v49; // [esp+8Ch] [ebp+Ch]

  v10 = 0;
  v47 = *((float *)a4 + 7) - *((float *)a4 + 4);
  v11 = *((float *)a4 + 8) - *((float *)a4 + 5);
  v32[3] = 1;
  v32[0] = &NxCapsuleControllerDesc::`vftable';
  v32[2] = 0;
  v28 = v11;
  v42 = 0;
  v29 = *((float *)a4 + 9) - *((float *)a4 + 6);
  v30[0] = v47;
  v30[1] = v28;
  v31 = v29;
  v12 = *((float *)a2 + 214);
  v46 = 0;
  v13 = *((float *)a2 + 215);
  v14 = v12;
  v15 = *((float *)a2 + 216);
  v33 = v14;
  v34 = v13;
  v35 = v15;
  v16 = &v31;
  if ( v29 <= (double)v47 )
    v16 = v30;
  v44 = v28 - *v16;
  if ( v44 < 0.0099999998 )
    v44 = 0.0099999998;
  v17 = &v31;
  if ( v29 <= (double)v47 )
    v17 = v30;
  v18 = *v17;
  v45 = 0;
  v36 = 1;
  v43 = v18 * 0.5;
  v48 = a8 * 0.01745329238474369;
  v49 = cos(v48);
  v19 = (_DWORD *)*((_DWORD *)this + 4);
  v37 = v49;
  v40 = (char *)this + 40;
  v20 = *((_DWORD *)this + 3);
  v38 = 0.1;
  v39 = 0.1;
  v41 = 0;
  v21 = (*(int (__thiscall **)(_DWORD, int, _DWORD *))(*(_DWORD *)*v19 + 8))(*v19, v20, v32);
  v22 = v21;
  if ( !v21 )
    return 0;
  v24 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v21 + 24))(v21);
  (*(void (__thiscall **)(_DWORD *, int))(*v24 + 100))(v24, 2);
  v25 = (float *)operator new(0x10u);
  if ( v25 )
  {
    v25[3] = 0.0;
    v25[1] = NAN;
    *((_DWORD *)v25 + 2) = 4;
    v10 = v25;
  }
  v10[1] = a3;
  *((_DWORD *)v10 + 2) = 2;
  *(_DWORD *)v10 = a2;
  v26 = (float *)operator new(0x3Cu);
  if ( v26 )
  {
    v26[1] = 1.0;
    v26[3] = 0.0;
    v26[4] = 0.0;
    v26[5] = 0.0;
    *((_BYTE *)v26 + 24) = 0;
    *((_BYTE *)v26 + 25) = 0;
    v26[13] = 0.0;
    v26[14] = 0.0;
  }
  else
  {
    v26 = 0;
  }
  v26[1] = a6;
  v27 = v37;
  *((_DWORD *)v26 + 14) = a7;
  v26[2] = v27;
  *(_DWORD *)v26 = v22;
  *((_DWORD *)v10 + 3) = v26;
  NxPhysics::SetActorCollisionGroup((int)v24, 5);
  v24[1] = v10;
  return (struct NxActor *)v24;
}
