/*
 * func-name: ?DrawBatchedQuads@FXManager@@QAEXXZ
 * func-address: 0x100a0220
 * callers: 0x100a0d00
 * callees: 0x10064610, 0x1006d030, 0x10116f70, 0x101189f0, 0x10136110, 0x10136210
 */

void __thiscall FXManager::DrawBatchedQuads(FXManager *this)
{
  struct RenderDevice *v1; // eax
  struct RenderDevice *v2; // eax
  char *v3; // ecx
  unsigned int v4; // esi
  int v5; // ebp
  void (__cdecl *v6)(); // ebx
  struct RenderDevice *v7; // eax
  char *v8; // edi
  struct RenderDevice *v9; // ebx
  char *v10; // edi
  struct Canvas *v11; // eax
  char *v12; // edi
  struct Canvas *v13; // ebx
  char *v14; // edi
  char *v15; // edi
  unsigned int v16; // edi
  struct RenderDevice *v17; // eax
  struct RenderDevice *v18; // eax
  char *v19; // ecx
  unsigned int v20; // ebp
  int i; // esi
  void (__cdecl *v22)(); // edi
  int v23; // ebx
  struct RenderDevice *v24; // eax
  char *v25; // esi
  struct RenderDevice *v26; // edi
  char *v27; // esi
  struct RenderDevice *v28; // eax
  int v29; // eax
  char *v30; // ecx
  int v31; // edi
  int v32; // esi
  char *v33; // ecx
  struct Profiler *v34; // eax
  char *v35; // esi
  unsigned int v36; // esi
  int v37; // edx
  _DWORD *v38; // eax
  _DWORD *v39; // ecx
  int v40; // [esp+58h] [ebp-8h]
  int v41; // [esp+58h] [ebp-8h]
  char *v42; // [esp+5Ch] [ebp-4h]

  if ( dword_1123D69C && (dword_1123D6A0 - (int)dword_1123D69C) / 20 )
  {
    v1 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v1 + 448))(v1, 0, 1, 3);
    v2 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v2 + 448))(v2, 0, 2, 3);
    v3 = (char *)dword_1123D69C;
    v4 = 0;
    v5 = 0;
    while ( v3 && v4 < (dword_1123D6A0 - (int)v3) / 20 )
    {
      v6 = invalid_parameter_noinfo;
      if ( *(_DWORD *)&v3[v5 + 4] )
      {
        if ( v4 >= (dword_1123D6A0 - (int)v3) / 20 )
        {
          invalid_parameter_noinfo();
          v3 = (char *)dword_1123D69C;
        }
        if ( !*(_DWORD *)&v3[v5] )
        {
          if ( !v3 || v4 >= (dword_1123D6A0 - (int)v3) / 20 )
          {
            invalid_parameter_noinfo();
            v3 = (char *)dword_1123D69C;
          }
          v40 = *(_DWORD *)&v3[v5 + 16];
          if ( v40 )
          {
            v7 = RenderDevice::Instance();
            v8 = (char *)dword_1123D69C;
            v9 = v7;
            if ( !dword_1123D69C || v4 >= (dword_1123D6A0 - (int)dword_1123D69C) / 20 )
            {
              invalid_parameter_noinfo();
              v8 = (char *)dword_1123D69C;
            }
            (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v9 + 432))(
              v9,
              20,
              *(_DWORD *)&v8[v5 + 8]);
            v10 = (char *)dword_1123D69C;
            if ( !dword_1123D69C || v4 >= (dword_1123D6A0 - (int)dword_1123D69C) / 20 )
            {
              invalid_parameter_noinfo();
              v10 = (char *)dword_1123D69C;
            }
            Texture::Set(*(Texture **)&v10[v5 + 4], 0);
            v11 = Canvas::Instance();
            v12 = (char *)dword_1123D69C;
            v13 = v11;
            if ( !dword_1123D69C || v4 >= (dword_1123D6A0 - (int)dword_1123D69C) / 20 )
            {
              invalid_parameter_noinfo();
              v12 = (char *)dword_1123D69C;
            }
            (*(void (__thiscall **)(struct Canvas *, int, char *, int, _DWORD))(*(_DWORD *)v13 + 112))(
              v13,
              3 * v40,
              (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)&v12[v5 + 12],
              24,
              0);
            v14 = (char *)dword_1123D69C;
            if ( !dword_1123D69C || v4 >= (dword_1123D6A0 - (int)dword_1123D69C) / 20 )
            {
              invalid_parameter_noinfo();
              v14 = (char *)dword_1123D69C;
            }
            Texture::UnSet(*(Texture **)&v14[v5 + 4], 0);
            v3 = (char *)dword_1123D69C;
            v6 = invalid_parameter_noinfo;
          }
          v15 = v3;
          if ( (unsigned int)v3 > dword_1123D6A0 )
          {
            v6();
            v3 = (char *)dword_1123D69C;
          }
          v16 = (unsigned int)&v15[v5];
          if ( v16 > dword_1123D6A0 || v16 < (unsigned int)v3 )
            v6();
          sub_1006D030((char *)(v16 + 20), (char *)dword_1123D6A0, (_DWORD *)v16);
          dword_1123D6A0 -= 20;
          v3 = (char *)dword_1123D69C;
          --v4;
          v5 -= 20;
        }
      }
      ++v4;
      v5 += 20;
    }
    v17 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v17 + 448))(v17, 0, 1, 1);
    v18 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v18 + 448))(v18, 0, 2, 1);
  }
  v19 = (char *)dword_1123D68C;
  if ( dword_1123D68C && (dword_1123D690 - (int)dword_1123D68C) / 20 )
  {
    v20 = 0;
    for ( i = 0; ; i += 20 )
    {
      v41 = i;
      if ( !v19 || v20 >= (dword_1123D690 - (int)v19) / 20 )
        break;
      v22 = invalid_parameter_noinfo;
      if ( *(_DWORD *)&v19[i + 4] )
      {
        if ( v20 >= (dword_1123D690 - (int)v19) / 20 )
        {
          invalid_parameter_noinfo();
          v19 = (char *)dword_1123D68C;
        }
        if ( !*(_DWORD *)&v19[i] )
        {
          if ( !v19 || v20 >= (dword_1123D690 - (int)v19) / 20 )
          {
            invalid_parameter_noinfo();
            v19 = (char *)dword_1123D68C;
          }
          v23 = *(_DWORD *)&v19[i + 16];
          if ( v23 )
          {
            v24 = RenderDevice::Instance();
            v25 = (char *)dword_1123D68C;
            v26 = v24;
            if ( !dword_1123D68C || v20 >= (dword_1123D690 - (int)dword_1123D68C) / 20 )
            {
              invalid_parameter_noinfo();
              v25 = (char *)dword_1123D68C;
            }
            (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v26 + 432))(
              v26,
              20,
              *(_DWORD *)&v25[v41 + 8]);
            v27 = (char *)dword_1123D68C;
            if ( !dword_1123D68C || v20 >= (dword_1123D690 - (int)dword_1123D68C) / 20 )
            {
              invalid_parameter_noinfo();
              v27 = (char *)dword_1123D68C;
            }
            Texture::Set(*(Texture **)&v27[v41 + 4], 0);
            v28 = RenderDevice::Instance();
            v29 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v28 + 392))(v28);
            v30 = (char *)dword_1123D68C;
            v31 = v29;
            if ( !dword_1123D68C || (v32 = dword_1123D690, v20 >= (dword_1123D690 - (int)dword_1123D68C) / 20) )
            {
              invalid_parameter_noinfo();
              v32 = dword_1123D690;
              v30 = (char *)dword_1123D68C;
            }
            v42 = &v30[v41];
            if ( !v30 || v20 >= (v32 - (int)v30) / 20 )
            {
              invalid_parameter_noinfo();
              v30 = (char *)dword_1123D68C;
            }
            (*(void (__thiscall **)(int, int, char *, int, char *, int, _DWORD, _DWORD, int))(*(_DWORD *)v31 + 108))(
              v31,
              4 * v23,
              (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)&v30[v41 + 12],
              6 * v23,
              (char *)&unk_102EAD30 + 162110 * *((_DWORD *)v42 + 3),
              24,
              0,
              0,
              1);
            v33 = (char *)dword_1123D68C;
            if ( !dword_1123D68C || v20 >= (dword_1123D690 - (int)dword_1123D68C) / 20 )
            {
              invalid_parameter_noinfo();
              v33 = (char *)dword_1123D68C;
            }
            Texture::UnSet(*(Texture **)&v33[v41 + 4], 0);
            v34 = Profiler::Get();
            v22 = invalid_parameter_noinfo;
            ++*((_DWORD *)v34 + 13);
            v19 = (char *)dword_1123D68C;
          }
          v35 = v19;
          if ( (unsigned int)v19 > dword_1123D690 )
          {
            v22();
            v19 = (char *)dword_1123D68C;
          }
          v36 = (unsigned int)&v35[v41];
          if ( v36 > dword_1123D690 || v36 < (unsigned int)v19 )
          {
            v22();
            v19 = (char *)dword_1123D68C;
          }
          v37 = dword_1123D690;
          v38 = (_DWORD *)(v36 + 20);
          if ( v36 + 20 != dword_1123D690 )
          {
            v39 = (_DWORD *)v36;
            do
            {
              *v39 = *v38;
              v39[1] = v38[1];
              v39[2] = v38[2];
              v39[3] = v38[3];
              v39[4] = v38[4];
              v38 += 5;
              v39 += 5;
            }
            while ( v38 != (_DWORD *)v37 );
            v19 = (char *)dword_1123D68C;
          }
          dword_1123D690 -= 20;
          --v20;
          i = v41 - 20;
        }
      }
      ++v20;
    }
  }
}
