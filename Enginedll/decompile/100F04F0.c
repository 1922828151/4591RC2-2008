/*
 * func-name: ?DrawImmediateTranslucent@StaticModel@@IAEXMPAVCamera@@PAUModelFrame@@PAVWorld@@_NHPAVActor@@@Z
 * func-address: 0x100f04f0
 * callers: 0x100f04f0, 0x100f15b0
 * callees: 0x10012aa0, 0x10019470, 0x10020130, 0x10021e30, 0x10052ae0, 0x10055320, 0x10055820, 0x100566a0, 0x10057ee0, 0x1005b260, 0x1005b520, 0x10063830, 0x1007a380, 0x1009dd90, 0x100cddf0, 0x100dda20, 0x100e3340, 0x100e33d0, 0x100e35c0, 0x100e3ef0, 0x100ee360, 0x100ee930, 0x100f04f0, 0x101189f0, 0x1017a0b0, 0x101a2500
 */

void __thiscall StaticModel::DrawImmediateTranslucent(
        StaticModel *this,
        float a2,
        struct Camera *a3,
        struct ModelFrame **a4,
        struct World *a5,
        bool a6,
        unsigned int j,
        int a8)
{
  const struct BBox *WorldBBox; // eax
  struct Camera *v10; // edi
  struct Actor *v11; // ebp
  struct Mesh *Mesh; // eax
  struct Mesh *v13; // esi
  unsigned int v14; // edi
  struct RenderDevice *v15; // eax
  const struct BBox *v16; // edx
  int v17; // ecx
  int *v18; // eax
  int v19; // esi
  bool v20; // zf
  int v21; // eax
  BatchRenderer *v22; // eax
  struct BatchItem *NewBatchItem; // eax
  int v24; // ebp
  struct ModelFrame *v25; // eax
  unsigned int v26; // esi
  int v27; // ecx
  int v28; // ecx
  int v29; // edi
  int v30; // esi
  int v31; // ecx
  struct Mesh *v32; // esi
  int v33; // eax
  _DWORD *v34; // eax
  int v35; // esi
  int v36; // edx
  double v37; // st7
  BatchRenderer *v38; // eax
  unsigned int v39; // edi
  int v40; // esi
  int v41; // ecx
  char v42; // al
  bool v43; // [esp+2Fh] [ebp-65h]
  int i; // [esp+30h] [ebp-64h] BYREF
  struct Mesh *v45; // [esp+34h] [ebp-60h]
  const struct BBox *v46; // [esp+38h] [ebp-5Ch]
  int v47; // [esp+3Ch] [ebp-58h] BYREF
  int v48; // [esp+40h] [ebp-54h] BYREF
  void *v49; // [esp+44h] [ebp-50h]
  int v50; // [esp+48h] [ebp-4Ch]
  int v51; // [esp+4Ch] [ebp-48h]
  int v52; // [esp+50h] [ebp-44h] BYREF
  void *v53; // [esp+54h] [ebp-40h]
  int v54; // [esp+58h] [ebp-3Ch]
  int v55; // [esp+5Ch] [ebp-38h]
  _DWORD v56[10]; // [esp+60h] [ebp-34h] BYREF
  int v57; // [esp+90h] [ebp-4h]

  if ( a4 )
  {
    if ( *((_BYTE *)this + 314) )
    {
      WorldBBox = (const struct BBox *)StaticModel::GetWorldBBox(this, v56);
      v10 = a3;
      v57 = 0;
      v43 = Camera::BoxInFrustum(a3, WorldBBox, 0.0, 0) == 0;
      v57 = -1;
      sub_1017A0B0(v56);
      if ( v43 )
        return;
    }
    else
    {
      v10 = a3;
    }
    v11 = (struct Actor *)a8;
    StaticModel::DrawImmediateTranslucent(this, a2, v10, a4[90], a5, a6, j, (struct Actor *)a8);
    StaticModel::DrawImmediateTranslucent(this, a2, v10, a4[89], a5, a6, j, v11);
    Mesh = ModelFrame::GetMesh((ModelFrame *)a4, 0);
    if ( Mesh )
    {
      if ( !*((_BYTE *)Mesh + 2524) )
      {
        v13 = StaticModel::ChooseLOD(this, v10, (struct ModelFrame *)a4);
        v14 = 0;
        v45 = v13;
        if ( v13 )
        {
          if ( (j & 4) != 0 )
          {
            v15 = RenderDevice::Instance();
            LOBYTE(j) = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v15 + 228))(v15);
            std::vector<Model *>::clear((_DWORD *)this + 72);
            v16 = (struct World *)((char *)a5 + 3236);
            a8 = 0;
            v46 = (struct World *)((char *)a5 + 3236);
            while ( 1 )
            {
              v17 = *((_DWORD *)v16 + 1);
              if ( !v17 || a8 >= (unsigned int)((*((_DWORD *)v16 + 2) - v17) >> 2) )
                break;
              v18 = (int *)std::vector<Model *>::operator[](v16, a8);
              v19 = *v18;
              v20 = *(_BYTE *)(*v18 + 816) == 0;
              i = *v18;
              if ( v20
                && !*(_BYTE *)(v19 + 1420)
                && ((_BYTE)j || !*(_BYTE *)(v19 + 1054))
                && (!v11
                 || *(_BYTE *)(v19 + 422) == *((_BYTE *)v11 + 422)
                 || *(_BYTE *)(v19 + 421) == *((_BYTE *)v11 + 421)) )
              {
                if ( sub_1007A380((float *)this + 7, (float *)this + 10, (float *)(v19 + 1112), *(float *)(v19 + 1136)) )
                {
                  if ( !v11
                    || ((v20 = *((_BYTE *)v11 + 421) == *(_BYTE *)(v19 + 421), i = v19, v20)
                     || *((_BYTE *)v11 + 422) == *(_BYTE *)(v19 + 422))
                    && (!*((_BYTE *)v11 + 332) || !Light::IsExcluded((Light *)v19, v11)) )
                  {
                    sub_10052AE0((_DWORD *)this + 72, &i);
                  }
                }
              }
              ++a8;
              v13 = v45;
              v16 = v46;
              v14 = 0;
            }
          }
          *((_DWORD *)v13 + 21) = 0;
          v53 = 0;
          v54 = 0;
          v55 = 0;
          v57 = 2;
          v49 = 0;
          v50 = 0;
          v51 = 0;
          for ( i = 0; ; i += 20 )
          {
            while ( 1 )
            {
              v21 = *((_DWORD *)v13 + 620);
              a8 = v14;
              if ( !v21 || v14 >= (*((_DWORD *)v13 + 621) - v21) / 20 )
              {
                v38 = BatchRenderer::Instance();
                BatchRenderer::DrawBatches(v38, (int)&v52);
                v39 = 0;
                while ( v49 )
                {
                  if ( v39 >= (v50 - (int)v49) >> 2 )
                  {
                    operator delete(v49);
                    break;
                  }
                  v40 = *((_DWORD *)v49 + v39);
                  v41 = *(_DWORD *)(v40 + 256);
                  v42 = *(_BYTE *)(v40 + 265);
                  *(_BYTE *)(v40 + 264) = 0;
                  **(_BYTE **)(v41 + 60) = v42;
                  **(_BYTE **)(*(_DWORD *)(v40 + 260) + 60) = *(_BYTE *)(v40 + 266);
                  **(float **)(*(_DWORD *)(v40 + 252) + 60) = *(float *)(v40 + 268);
                  Material::RestoreAlphaBlend((Material *)v40);
                  Material::UpdateStates((Material *)v40);
                  ++v39;
                }
                v49 = 0;
                v50 = 0;
                v51 = 0;
                if ( v53 )
                  operator delete(v53);
                return;
              }
              v22 = BatchRenderer::Instance();
              NewBatchItem = BatchRenderer::GetNewBatchItem(v22);
              v20 = *((_BYTE *)this + 314) == 0;
              v24 = (int)NewBatchItem;
              v47 = (int)NewBatchItem;
              if ( v20 )
              {
                v25 = a4[7];
                if ( v25 )
                {
                  if ( v14 < (a4[8] - v25) / 40 )
                    break;
                }
              }
              sub_10021E30(v24, (int)this + 288);
LABEL_50:
              *(_DWORD *)(v24 + 20) = v24;
              *(_DWORD *)(v24 + 220) = this;
              *(_DWORD *)(v24 + 168) = *((_DWORD *)this + 4);
              v32 = v45;
              *(_DWORD *)(v24 + 172) = *((_DWORD *)this + 5);
              *(_DWORD *)(v24 + 176) = *((_DWORD *)this + 6);
              *(_DWORD *)(v24 + 180) = *((_DWORD *)this + 7);
              *(_DWORD *)(v24 + 184) = *((_DWORD *)this + 8);
              *(_DWORD *)(v24 + 188) = *((_DWORD *)this + 9);
              *(_DWORD *)(v24 + 192) = *((_DWORD *)this + 10);
              *(_DWORD *)(v24 + 196) = *((_DWORD *)this + 11);
              *(_DWORD *)(v24 + 200) = *((_DWORD *)this + 12);
              *(_DWORD *)(v24 + 92) = v32;
              v33 = *((_DWORD *)v32 + 620);
              if ( !v33 || v14 >= (*((_DWORD *)v32 + 621) - v33) / 20 )
                invalid_parameter_noinfo();
              v34 = (_DWORD *)(i + *((_DWORD *)v32 + 620));
              *(_DWORD *)(v24 + 56) = *v34;
              *(_DWORD *)(v24 + 60) = v34[1];
              *(_DWORD *)(v24 + 64) = v34[2];
              *(_DWORD *)(v24 + 68) = v34[3];
              *(_DWORD *)(v24 + 72) = v34[4];
              *(_DWORD *)(v24 + 228) = v14;
              std::vector<Matrix *>::operator=(v24 + 76, (int)(a4 + 105));
              v35 = (*(int (__thiscall **)(struct Mesh *, _DWORD))(*(_DWORD *)v32 + 108))(v32, *(_DWORD *)(v24 + 56));
              j = v35;
              if ( !v35 )
              {
                v35 = *(_DWORD *)MaterialManager::Instance();
                j = v35;
              }
              if ( !*(_BYTE *)(v35 + 264) && *(_DWORD *)(v35 + 256) && *(_DWORD *)(v35 + 252) && *(_DWORD *)(v35 + 260) )
              {
                *(_BYTE *)(v35 + 264) = 1;
                *(_BYTE *)(v35 + 265) = **(_BYTE **)(*(_DWORD *)(v35 + 256) + 60);
                *(_BYTE *)(v35 + 266) = **(_BYTE **)(*(_DWORD *)(v35 + 260) + 60);
                v36 = *(_DWORD *)(v35 + 256);
                *(float *)(v35 + 268) = **(float **)(*(_DWORD *)(v35 + 252) + 60);
                **(_BYTE **)(v36 + 60) = 1;
                **(_BYTE **)(*(_DWORD *)(v35 + 260) + 60) = 0;
                **(float **)(*(_DWORD *)(v35 + 252) + 60) = a2;
                Material::ForceAlphaBlend((Material *)v35, 1);
                Material::UpdateStates((Material *)v35);
                std::vector<Material *>::push_back(&v48, (int *)&j);
              }
              v37 = (double)a8;
              *(_DWORD *)(v24 + 52) = v35;
              *(_DWORD *)(v24 + 204) = a5;
              *(_BYTE *)(v24 + 160) = 1;
              qmemcpy((void *)(v24 + 96), a4 + 41, 0x40u);
              *(float *)(v24 + 268) = v37 * 0.001000000047497451;
              *(_BYTE *)(v24 + 161) = a6;
              sub_1005B260(&v52, &v47);
              v14 = a8;
LABEL_61:
              v13 = v45;
              ++v14;
              i += 20;
            }
            v46 = (const struct BBox *)std::vector<BBox>::operator[](a4 + 6, v14);
            if ( Camera::BoxInFrustum(a3, v46, 0.0, 0) )
            {
              v26 = 0;
              for ( j = 0; ; v26 = j )
              {
                v27 = *((_DWORD *)this + 73);
                if ( !v27 || v26 >= (*((_DWORD *)this + 74) - v27) >> 2 )
                  break;
                v28 = *((_DWORD *)this + 73);
                v29 = 4 * v26;
                v30 = *(_DWORD *)(4 * v26 + v28) + 1076;
                if ( !v28 || j >= (*((_DWORD *)this + 74) - v28) >> 2 )
                  invalid_parameter_noinfo();
                if ( sub_1007A380(
                       (float *)v46 + 4,
                       (float *)v46 + 7,
                       (float *)(*(_DWORD *)(v29 + *((_DWORD *)this + 73)) + 1112),
                       *(float *)(v30 + 60)) )
                {
                  v31 = *((_DWORD *)this + 73);
                  if ( !v31 || j >= (*((_DWORD *)this + 74) - v31) >> 2 )
                    invalid_parameter_noinfo();
                  sub_10052AE0((_DWORD *)v24, (int *)(v29 + *((_DWORD *)this + 73)));
                }
                ++j;
                v14 = a8;
              }
              goto LABEL_50;
            }
            if ( *(_DWORD *)(v24 + 16) )
              goto LABEL_61;
            sub_10055820((_DWORD *)v24);
            operator delete((void *)v24);
            v13 = v45;
            ++v14;
          }
        }
      }
    }
  }
}
