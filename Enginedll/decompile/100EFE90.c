/*
 * func-name: ?Draw@StaticModel@@IAEXPAVCamera@@PAUModelFrame@@PAVWorld@@_NHPAVActor@@3@Z
 * func-address: 0x100efe90
 * callers: 0x100efe90, 0x100f0470
 * callees: 0x10019470, 0x10020130, 0x10021e30, 0x10052ae0, 0x10055320, 0x10055820, 0x100566a0, 0x10056930, 0x10057ee0, 0x1005b260, 0x1005b520, 0x10063830, 0x1007a380, 0x1009dd90, 0x100cddf0, 0x100dda20, 0x100e3ef0, 0x100ee360, 0x100efe90, 0x101189f0, 0x101a2500
 */

void __thiscall StaticModel::Draw(
        StaticModel *this,
        struct Camera *a2,
        struct ModelFrame **a3,
        struct World *a4,
        bool a5,
        int a6,
        struct Actor *a7,
        bool a8)
{
  struct Mesh *Mesh; // eax
  struct Mesh *v10; // esi
  struct RenderDevice *v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  int *v14; // eax
  int v15; // esi
  bool v16; // zf
  unsigned int v17; // edi
  int v18; // eax
  BatchRenderer *v19; // eax
  struct BatchItem *NewBatchItem; // eax
  int v21; // ebp
  struct ModelFrame *v22; // eax
  const struct BBox *v23; // eax
  unsigned int v24; // esi
  int v25; // ecx
  int v26; // ecx
  int v27; // edi
  int v28; // esi
  int v29; // ecx
  struct Mesh *v30; // esi
  int v31; // eax
  _DWORD *v32; // eax
  int v33; // eax
  BatchRenderer *v34; // eax
  BatchRenderer *v35; // eax
  char v36; // [esp+17h] [ebp-35h]
  unsigned int j; // [esp+18h] [ebp-34h]
  unsigned int i; // [esp+1Ch] [ebp-30h]
  int v39; // [esp+1Ch] [ebp-30h]
  int v40; // [esp+20h] [ebp-2Ch] BYREF
  struct Mesh *v41; // [esp+24h] [ebp-28h]
  const struct BBox *v42; // [esp+28h] [ebp-24h]
  int v43; // [esp+2Ch] [ebp-20h] BYREF
  int v44; // [esp+30h] [ebp-1Ch] BYREF
  void *v45; // [esp+34h] [ebp-18h]
  int v46; // [esp+38h] [ebp-14h]
  int v47; // [esp+3Ch] [ebp-10h]
  int v48; // [esp+48h] [ebp-4h]

  if ( a3 )
  {
    if ( *((_BYTE *)a3 + 376) )
    {
      StaticModel::Draw(this, a2, a3[89], a4, a5, a6, a7, a8);
      return;
    }
    StaticModel::Draw(this, a2, a3[90], a4, a5, a6, a7, a8);
    StaticModel::Draw(this, a2, a3[89], a4, a5, a6, a7, a8);
    Mesh = ModelFrame::GetMesh((ModelFrame *)a3, 0);
    if ( Mesh )
    {
      if ( !*((_BYTE *)Mesh + 2524) )
      {
        v10 = StaticModel::ChooseLOD(this, a2, (struct ModelFrame *)a3);
        v41 = v10;
        if ( v10 )
        {
          if ( (a6 & 4) != 0 )
          {
            v11 = RenderDevice::Instance();
            v36 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v11 + 228))(v11);
            std::vector<Model *>::clear((_DWORD *)this + 72);
            v12 = 0;
            for ( i = 0; ; v12 = i )
            {
              v13 = *((_DWORD *)a4 + 810);
              if ( !v13 || v12 >= (*((_DWORD *)a4 + 811) - v13) >> 2 )
                break;
              v14 = (int *)std::vector<Model *>::operator[]((_DWORD *)a4 + 809, v12);
              v15 = *v14;
              v16 = *(_BYTE *)(*v14 + 816) == 0;
              v40 = *v14;
              if ( v16
                && !*(_BYTE *)(v15 + 1420)
                && (v36 || !*(_BYTE *)(v15 + 1054))
                && (!a7 || *(_BYTE *)(v15 + 422) == *((_BYTE *)a7 + 422)
                        || *(_BYTE *)(v15 + 421) == *((_BYTE *)a7 + 421)) )
              {
                if ( sub_1007A380((float *)this + 7, (float *)this + 10, (float *)(v15 + 1112), *(float *)(v15 + 1136)) )
                {
                  if ( !a7
                    || ((v16 = *((_BYTE *)a7 + 421) == *(_BYTE *)(v15 + 421), v40 = v15, v16)
                     || *((_BYTE *)a7 + 422) == *(_BYTE *)(v15 + 422))
                    && (!*((_BYTE *)a7 + 332) || !Light::IsExcluded((Light *)v15, a7)) )
                  {
                    sub_10052AE0((_DWORD *)this + 72, &v40);
                  }
                }
              }
              ++i;
              v10 = v41;
            }
          }
          *((_DWORD *)v10 + 21) = 0;
          v45 = 0;
          v46 = 0;
          v47 = 0;
          v48 = 0;
          v17 = 0;
          v40 = 0;
          while ( 1 )
          {
            while ( 1 )
            {
              v18 = *((_DWORD *)v10 + 620);
              v39 = v17;
              if ( !v18 || v17 >= (*((_DWORD *)v10 + 621) - v18) / 20 )
              {
                if ( (a6 & 2) != 0 )
                {
                  v35 = BatchRenderer::Instance();
                  BatchRenderer::DrawBatches(v35, (int)&v44);
                }
                if ( v45 )
                  operator delete(v45);
                return;
              }
              v19 = BatchRenderer::Instance();
              NewBatchItem = BatchRenderer::GetNewBatchItem(v19);
              v16 = *((_BYTE *)this + 314) == 0;
              v21 = (int)NewBatchItem;
              v43 = (int)NewBatchItem;
              if ( v16 )
              {
                v22 = a3[7];
                if ( v22 )
                {
                  if ( v17 < (a3[8] - v22) / 40 )
                    break;
                }
              }
              sub_10021E30(v21, (int)this + 288);
LABEL_49:
              *(_DWORD *)(v21 + 280) = a7;
              *(_DWORD *)(v21 + 20) = v21;
              *(_DWORD *)(v21 + 220) = this;
              *(_DWORD *)(v21 + 168) = *((_DWORD *)this + 4);
              v30 = v41;
              *(_DWORD *)(v21 + 172) = *((_DWORD *)this + 5);
              *(_DWORD *)(v21 + 176) = *((_DWORD *)this + 6);
              *(_DWORD *)(v21 + 180) = *((_DWORD *)this + 7);
              *(_DWORD *)(v21 + 184) = *((_DWORD *)this + 8);
              *(_DWORD *)(v21 + 188) = *((_DWORD *)this + 9);
              *(_DWORD *)(v21 + 192) = *((_DWORD *)this + 10);
              *(_DWORD *)(v21 + 196) = *((_DWORD *)this + 11);
              *(_DWORD *)(v21 + 200) = *((_DWORD *)this + 12);
              *(_DWORD *)(v21 + 92) = v30;
              v31 = *((_DWORD *)v30 + 620);
              if ( !v31 || v17 >= (*((_DWORD *)v30 + 621) - v31) / 20 )
                invalid_parameter_noinfo();
              v32 = (_DWORD *)(v40 + *((_DWORD *)v30 + 620));
              *(_DWORD *)(v21 + 56) = *v32;
              *(_DWORD *)(v21 + 60) = v32[1];
              *(_DWORD *)(v21 + 64) = v32[2];
              *(_DWORD *)(v21 + 68) = v32[3];
              *(_DWORD *)(v21 + 72) = v32[4];
              *(_DWORD *)(v21 + 228) = v17;
              std::vector<Matrix *>::operator=(v21 + 76, (int)(a3 + 105));
              v33 = (*(int (__thiscall **)(struct Mesh *, _DWORD))(*(_DWORD *)v30 + 108))(v30, *(_DWORD *)(v21 + 56));
              *(_DWORD *)(v21 + 52) = v33;
              if ( !v33 )
                *(_DWORD *)(v21 + 52) = *(_DWORD *)MaterialManager::Instance();
              *(_DWORD *)(v21 + 204) = a4;
              *(_BYTE *)(v21 + 160) = 1;
              qmemcpy((void *)(v21 + 96), a3 + 41, 0x40u);
              *(float *)(v21 + 268) = (double)v39 * 0.001000000047497451;
              *(_BYTE *)(v21 + 161) = a5;
              if ( (a6 & 2) != 0 )
              {
                sub_1005B260(&v44, &v43);
                v40 += 20;
                v10 = v41;
                v17 = v39 + 1;
              }
              else
              {
                v34 = BatchRenderer::Instance();
                BatchRenderer::QueueBatchItem(v34, (struct BatchItem *)v21);
                v17 = v39;
LABEL_57:
                v40 += 20;
                v10 = v41;
                ++v17;
              }
            }
            v23 = (const struct BBox *)std::vector<BBox>::operator[](a3 + 6, v17);
            v42 = v23;
            if ( !a8 || Camera::BoxInFrustum(a2, v23, 0.0, 0) )
            {
              v24 = 0;
              for ( j = 0; ; v24 = j )
              {
                v25 = *((_DWORD *)this + 73);
                if ( !v25 || v24 >= (*((_DWORD *)this + 74) - v25) >> 2 )
                  break;
                v26 = *((_DWORD *)this + 73);
                v27 = 4 * v24;
                v28 = *(_DWORD *)(v26 + 4 * v24) + 1076;
                if ( !v26 || j >= (*((_DWORD *)this + 74) - v26) >> 2 )
                  invalid_parameter_noinfo();
                if ( sub_1007A380(
                       (float *)v42 + 4,
                       (float *)v42 + 7,
                       (float *)(*(_DWORD *)(v27 + *((_DWORD *)this + 73)) + 1112),
                       *(float *)(v28 + 60)) )
                {
                  v29 = *((_DWORD *)this + 73);
                  if ( !v29 || j >= (*((_DWORD *)this + 74) - v29) >> 2 )
                    invalid_parameter_noinfo();
                  sub_10052AE0((_DWORD *)v21, (int *)(v27 + *((_DWORD *)this + 73)));
                }
                ++j;
                v17 = v39;
              }
              goto LABEL_49;
            }
            if ( *(_DWORD *)(v21 + 16) )
              goto LABEL_57;
            sub_10055820((_DWORD *)v21);
            operator delete((void *)v21);
            v40 += 20;
            v10 = v41;
            ++v17;
          }
        }
      }
    }
  }
}
