/*
 * func-name: ?HDRrender@FXManager@@UAEXPAVWorld@@AAVCamera@@@Z
 * func-address: 0x100a0e10
 * callers: none
 * callees: 0x10012390, 0x10063830, 0x100a0810, 0x10117dc0, 0x10117de0, 0x10118420, 0x101189f0, 0x1017a0b0, 0x101a24ac, 0x101a2500, 0x101a2516
 */

void __userpurge FXManager::HDRrender(
        FXManager *this@<ecx>,
        int a2@<ebp>,
        int a3@<esi>,
        struct World *a4,
        struct Camera *a5)
{
  int v5; // edi
  FXManager *v6; // ebx
  struct RenderDevice *v7; // eax
  int v8; // eax
  int v10; // ecx
  int v11; // esi
  bool v12; // zf
  double v13; // st7
  double v14; // st6
  const struct BBox *v15; // eax
  bool v16; // bl
  unsigned int v17; // esi
  _DWORD *v18; // ecx
  int v19; // esi
  _DWORD **v20; // eax
  int v21; // [esp-8h] [ebp-64h]
  int v22; // [esp-4h] [ebp-60h]
  float v24; // [esp+Ch] [ebp-50h]
  float v25; // [esp+Ch] [ebp-50h]
  float v26; // [esp+Ch] [ebp-50h]
  float v27; // [esp+Ch] [ebp-50h]
  float v28; // [esp+10h] [ebp-4Ch]
  float v29; // [esp+10h] [ebp-4Ch]
  float v30; // [esp+10h] [ebp-4Ch]
  float v31; // [esp+10h] [ebp-4Ch]
  int v32; // [esp+14h] [ebp-48h] BYREF
  float v33; // [esp+18h] [ebp-44h] BYREF
  float v34; // [esp+1Ch] [ebp-40h]
  float v35; // [esp+20h] [ebp-3Ch]
  int v36; // [esp+40h] [ebp-1Ch] BYREF
  void *v37; // [esp+44h] [ebp-18h]
  int v38; // [esp+48h] [ebp-14h]
  int v39; // [esp+4Ch] [ebp-10h]
  int v40; // [esp+58h] [ebp-4h]
  struct World *v41; // [esp+60h] [ebp+4h]
  float v42; // [esp+64h] [ebp+8h]
  float v43; // [esp+64h] [ebp+8h]
  float v44; // [esp+64h] [ebp+8h]
  float v45; // [esp+64h] [ebp+8h]
  Camera *i; // [esp+64h] [ebp+8h]

  v5 = 0;
  v6 = this;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  byte_102C7A48 = 0;
  v7 = RenderDevice::Instance();
  byte_102C7A49 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v7 + 132))(v7);
  v8 = (int)&byte_102EF38C;
  do
  {
    *(_BYTE *)v8 = 0;
    v8 += 162110;
  }
  while ( v8 < 287723460 );
  if ( !a4 )
    goto LABEL_35;
  v22 = a2;
  v21 = a3;
  v24 = *((float *)a5 + 59);
  v28 = *((float *)a5 + 63);
  v33 = *((float *)a5 + 55);
  *((float *)v6 + 9) = v33;
  v34 = v24;
  *((float *)v6 + 10) = v24;
  v35 = v28;
  *((float *)v6 + 11) = v28;
  v29 = *((float *)a5 + 60);
  v25 = *((float *)a5 + 64);
  v33 = *((float *)a5 + 56);
  *((float *)v6 + 12) = v33;
  v34 = v29;
  *((float *)v6 + 13) = v29;
  v35 = v25;
  *((float *)v6 + 14) = v25;
  v30 = *((float *)a5 + 61);
  v26 = *((float *)a5 + 65);
  v33 = *((float *)a5 + 57);
  *((float *)v6 + 15) = v33;
  v34 = v30;
  *((float *)v6 + 16) = v30;
  v35 = v26;
  *((float *)v6 + 17) = v26;
  while ( 1 )
  {
    v10 = *((_DWORD *)v6 + 2);
    if ( !v10 || v5 >= (unsigned int)((*((_DWORD *)v6 + 3) - v10) >> 2) )
      break;
    v11 = *(_DWORD *)(*((_DWORD *)v6 + 2) + 4 * v5);
    v12 = *(_BYTE *)(v11 + 172) == 0;
    v32 = v11;
    if ( v12 && *(struct World **)(v11 + 116) == a4 && !*(_BYTE *)(v11 + 112) )
    {
      v31 = *(float *)(v11 + 20) - *((float *)a5 + 88);
      v42 = *(float *)(v11 + 24) - *((float *)a5 + 89);
      v27 = *(float *)(v11 + 28) - *((float *)a5 + 90);
      v43 = v42 * v42 + v31 * v31 + v27 * v27;
      v44 = sqrt(v43);
      v13 = v44;
      *(float *)(v11 + 12) = v44;
      if ( *((float *)a5 + 100) <= (double)*(float *)(v11 + 128) )
        v14 = *((float *)a5 + 100);
      else
        v14 = *(float *)(v11 + 128);
      v45 = v14;
      if ( v45 > v13 || *(_BYTE *)(v11 + 16) )
      {
        if ( !*(_BYTE *)(v11 + 124)
          || (v15 = (const struct BBox *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v11 + 12))(v11, &v33),
              LOBYTE(v40) = 1,
              v16 = Camera::BoxInFrustum(a5, v15, 0.0, 0) == 0,
              LOBYTE(v40) = 0,
              sub_1017A0B0(&v33),
              v12 = !v16,
              v6 = this,
              v12) )
        {
          *(_BYTE *)(v11 + 113) = 0;
          sub_10012390(&v36, &v32);
          goto LABEL_20;
        }
        *(_BYTE *)(v11 + 113) = 1;
        ++v5;
      }
      else
      {
        *(_BYTE *)(v11 + 113) = 1;
        ++v5;
      }
    }
    else
    {
LABEL_20:
      ++v5;
    }
  }
  if ( v37 )
  {
    v5 = (v38 - (int)v37) >> 2;
    if ( v5 > 0 )
    {
      v17 = 0;
      v41 = (struct World *)operator new(4 * v5);
      do
      {
        v18 = v37;
        if ( !v37 || v17 >= (v38 - (int)v37) >> 2 )
        {
          invalid_parameter_noinfo();
          v18 = v37;
        }
        *((float *)v41 + v17) = *(float *)(v18[v17] + 12);
        ++v17;
      }
      while ( (int)v17 < v5 );
      sub_10117DC0(&v33);
      LOBYTE(v40) = 2;
      sub_10118420(v41, v5);
      v19 = v5 - 1;
      for ( i = (Camera *)LODWORD(v34); v19 > -1; --v19 )
      {
        v20 = (_DWORD **)v37;
        v5 = *((_DWORD *)i + v19);
        if ( !v37 || v5 >= (unsigned int)((v38 - (int)v37) >> 2) )
        {
          invalid_parameter_noinfo();
          v20 = (_DWORD **)v37;
        }
        (*(void (__thiscall **)(_DWORD *, struct Camera *))(*v20[v5] + 4))(v20[v5], a5);
      }
      operator delete(v41);
      LOBYTE(v40) = 0;
      sub_10117DE0(&v33);
    }
  }
  a3 = v21;
  a2 = v22;
LABEL_35:
  FXManager::DrawShadedQuads((int)v6, a2, v5, a3);
  if ( v37 )
    operator delete(v37);
}
