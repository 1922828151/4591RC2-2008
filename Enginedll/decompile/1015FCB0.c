/*
 * func-name: sub_1015FCB0
 * func-address: 0x1015fcb0
 * callers: 0x10168ec0
 * callees: 0x10136140, 0x1015cfc0, 0x1015df30, 0x1015e000, 0x101a26c0
 */

void __thiscall sub_1015FCB0(int this, RECT *lprcSrc1, int *a3, int a4, float a5)
{
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  Texture *v9; // ecx
  int v10; // eax
  double v11; // st7
  LONG top; // ecx
  LONG left; // esi
  int v14; // eax
  LONG v15; // eax
  struct IDirect3DTexture9 *v16; // ebp
  int v17; // esi
  _BYTE *v18; // esi
  int v19; // ebp
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  unsigned __int8 v23; // al
  bool v24; // cc
  int v25; // [esp+14h] [ebp-78h]
  float v26; // [esp+18h] [ebp-74h]
  float v27; // [esp+1Ch] [ebp-70h]
  float v28; // [esp+1Ch] [ebp-70h]
  int v29; // [esp+1Ch] [ebp-70h]
  float v30; // [esp+20h] [ebp-6Ch]
  int v31; // [esp+20h] [ebp-6Ch]
  struct IDirect3DTexture9 *Texture; // [esp+24h] [ebp-68h]
  int v33; // [esp+28h] [ebp-64h]
  float v34; // [esp+30h] [ebp-5Ch]
  float v35; // [esp+34h] [ebp-58h]
  float v36; // [esp+38h] [ebp-54h]
  float v37; // [esp+3Ch] [ebp-50h]
  float v38; // [esp+40h] [ebp-4Ch]
  int v39; // [esp+44h] [ebp-48h] BYREF
  int v40; // [esp+48h] [ebp-44h]
  struct tagRECT v41; // [esp+4Ch] [ebp-40h] BYREF
  RECT rcSrc2; // [esp+5Ch] [ebp-30h] BYREF
  int v43; // [esp+6Ch] [ebp-20h]
  int v44; // [esp+70h] [ebp-1Ch]
  int v45; // [esp+74h] [ebp-18h]
  int v46; // [esp+78h] [ebp-14h]
  struct tagRECT rcDst; // [esp+7Ch] [ebp-10h] BYREF

  if ( *(_DWORD *)(this + 28) )
  {
    if ( *(_DWORD *)(this + 4) )
    {
      v6 = *(_DWORD *)(this + 16);
      v7 = *(_DWORD *)(this + 12);
      rcSrc2.left = *(_DWORD *)(this + 8) << 6;
      v8 = *(_DWORD *)(this + 20) + 1;
      rcSrc2.right = (v6 + 1) << 6;
      rcSrc2.top = v7 << 6;
      rcSrc2.bottom = v8 << 6;
      if ( IntersectRect(&rcDst, lprcSrc1, &rcSrc2) )
      {
        v9 = *(Texture **)(this + 28);
        if ( v9 )
        {
          Texture = Texture::GetTexture(v9);
          if ( Texture )
          {
            v10 = *(_DWORD *)(this + 28);
            v30 = (double)*(int *)(v10 + 84) / (double)(rcSrc2.bottom - rcSrc2.top);
            v27 = (double)*(int *)(v10 + 80) / (double)(rcSrc2.right - rcSrc2.left);
            v41.top = (int)((double)(rcDst.top - rcSrc2.top) * v30);
            v41.left = (int)((double)(rcDst.left - rcSrc2.left) * v27);
            v41.bottom = (int)(v30 * (double)(rcDst.bottom - rcSrc2.top));
            v11 = (double)a3[9];
            v41.right = (int)(v27 * (double)(rcDst.right - rcSrc2.left));
            top = lprcSrc1->top;
            v28 = v11 / (double)(lprcSrc1->bottom - top);
            v26 = (double)a3[8] / (double)(lprcSrc1->right - lprcSrc1->left);
            left = lprcSrc1->left;
            v44 = (int)((double)(rcDst.top - top) * v28);
            v43 = (int)((double)(rcDst.left - left) * v26);
            v46 = (int)(v28 * (double)(rcDst.bottom - top));
            v45 = (int)(v26 * (double)(rcDst.right - left));
            if ( v41.left < 0 )
              v41.left = 0;
            if ( v41.top < 0 )
              v41.top = 0;
            v14 = *(_DWORD *)(this + 28);
            if ( v41.right > *(_DWORD *)(v14 + 80) )
              v41.right = *(_DWORD *)(v14 + 80);
            v15 = *(_DWORD *)(v14 + 84);
            if ( v41.bottom > v15 )
              v41.bottom = v15;
            Terrain::UpdateModifyRect(*(Terrain **)(this + 4), &v41);
            v16 = Texture;
            if ( !Texture->lpVtbl->LockRect(Texture, 0, (D3DLOCKED_RECT *)&v39, &v41, 0) )
            {
              v17 = v40;
              v33 = v40;
              v31 = 0;
              if ( v41.bottom - v41.top > 0 )
              {
                do
                {
                  v29 = 0;
                  v25 = v41.right - v41.left;
                  if ( v41.right - v41.left > 0 )
                  {
                    v18 = (_BYTE *)(v17 + 2);
                    v35 = (float)(v46 - v44 - 1);
                    v36 = (float)v44;
                    v37 = (float)(v45 - v43 - 1);
                    v38 = (float)v43;
                    do
                    {
                      v34 = (float)v31;
                      v19 = (int)(v34 / (double)(v41.bottom - v41.top) * v35 + v36);
                      v20 = (int)((double)v29 / (double)v25 * v37 + v38);
                      v21 = a3[8];
                      if ( v20 < v21 && v19 < a3[9] )
                      {
                        v22 = a3[10];
                        if ( v22 )
                        {
                          v23 = (int)((double)*(unsigned __int8 *)(v22 + v19 * v21 + v20) * a5 * 0.1000000014901161);
                          if ( a4 )
                          {
                            switch ( a4 )
                            {
                              case 1:
                                sub_1015DF30(v18 - 1, v18 - 2, v18, v18 + 1, v23);
                                break;
                              case 2:
                                sub_1015DF30(v18, v18 - 1, v18 - 2, v18 + 1, v23);
                                break;
                              case 3:
                                sub_1015DF30(v18 + 1, v18 - 1, v18, v18 - 2, v23);
                                break;
                              case 4:
                                sub_1015E000(v18 - 2, v18 - 1, v18, v18 + 1, -v23);
                                break;
                              case 5:
                                sub_1015E000(v18 - 2, v18 - 1, v18, v18 + 1, v23);
                                break;
                            }
                          }
                          else
                          {
                            sub_1015DF30(v18 - 2, v18 - 1, v18, v18 + 1, v23);
                          }
                        }
                      }
                      v18 += 4;
                      v24 = ++v29 < v41.right - v41.left;
                      v25 = v41.right - v41.left;
                    }
                    while ( v24 );
                    v17 = v33;
                    v16 = Texture;
                  }
                  v17 += v39;
                  v24 = v31 + 1 < v41.bottom - v41.top;
                  v33 = v17;
                  ++v31;
                }
                while ( v24 );
              }
              v16->lpVtbl->UnlockRect(v16, 0);
            }
          }
        }
      }
    }
  }
}
