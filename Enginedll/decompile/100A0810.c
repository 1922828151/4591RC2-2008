/*
 * func-name: ?DrawShadedQuads@FXManager@@QAEXXZ
 * func-address: 0x100a0810
 * callers: 0x100a0d00, 0x100a0e10, 0x10139890
 * callees: 0x1000bc40, 0x1006d030, 0x100a1b10, 0x100e2b60, 0x10116f70, 0x101189f0, 0x1011fd80, 0x1011fdc0, 0x101206e0, 0x10121a70, 0x10121e80, 0x10122050, 0x10124d90
 */

void __usercall FXManager::DrawShadedQuads(int a1@<ebx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  char *v5; // esi
  unsigned int v6; // ebx
  int v7; // ebp
  char *v8; // edi
  unsigned int v9; // edi
  struct RenderDevice *v10; // eax
  int v11; // eax
  char *v12; // ecx
  unsigned int v13; // ebx
  int v14; // ebp
  int v15; // edi
  int v16; // esi
  float *v17; // eax
  int v18; // eax
  struct RenderDevice *v19; // ecx
  struct RenderDevice *v20; // ecx
  struct RenderDevice *v21; // ecx
  void *v22; // eax
  struct RenderDevice *v23; // eax
  struct RenderDevice *v24; // ecx
  struct RenderDevice *v25; // eax
  struct RenderDevice *v26; // ecx
  unsigned int v27; // ebp
  struct RenderDevice *v28; // eax
  int v29; // eax
  char *v30; // ecx
  int v31; // ebx
  int v32; // esi
  struct Profiler *v33; // eax
  char *v34; // eax
  char *v35; // edi
  char *v36; // esi
  struct RenderDevice *v37; // eax
  int v40; // [esp+30h] [ebp-58h]
  int v41; // [esp+34h] [ebp-54h]
  unsigned int v42; // [esp+38h] [ebp-50h]
  int v43; // [esp+3Ch] [ebp-4Ch]
  unsigned int v44; // [esp+40h] [ebp-48h]
  char *v45; // [esp+44h] [ebp-44h]
  unsigned int v46; // [esp+48h] [ebp-40h]
  int v47; // [esp+4Ch] [ebp-3Ch]
  float v48[14]; // [esp+50h] [ebp-38h] BYREF

  if ( !dword_1123D68C || !((dword_1123D690 - (int)dword_1123D68C) / 20) )
    return;
  if ( *((float *)RenderDevice::Instance() + 411) >= 2.0 )
  {
    v10 = RenderDevice::Instance();
    v11 = (*(int (__thiscall **)(struct RenderDevice *, int, _DWORD, int, int))(*(_DWORD *)v10 + 432))(
            v10,
            14,
            0,
            a3,
            a4);
    v12 = (char *)dword_1123D68C;
    v13 = 0;
    v47 = v11;
    v14 = 0;
    v41 = 12;
    while ( 1 )
    {
      while ( 1 )
      {
        v40 = v14;
        v42 = v13;
        if ( !v12 || v13 >= (dword_1123D690 - (int)v12) / 20 )
        {
          v37 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v37 + 432))(v37, 14, v47);
          return;
        }
        if ( !*(_DWORD *)&v12[v14 + 4] )
        {
          if ( v13 >= (dword_1123D690 - (int)v12) / 20 )
          {
            invalid_parameter_noinfo();
            v12 = (char *)dword_1123D68C;
          }
          if ( *(_DWORD *)&v12[v14] )
          {
            if ( !v12 || v13 >= (dword_1123D690 - (int)v12) / 20 )
            {
              invalid_parameter_noinfo();
              v12 = (char *)dword_1123D68C;
            }
            v15 = *(_DWORD *)&v12[v14];
            if ( !byte_102C7A49 || (**(_BYTE **)(v15 + 152) & 4) == 0 )
              break;
          }
        }
        ++v13;
        v14 += 20;
        v41 += 20;
      }
      v16 = *(_DWORD *)(std::vector<AttributeRange>::operator[](v13) + 16);
      if ( v16 )
        break;
LABEL_55:
      v34 = (char *)dword_1123D68C;
      v35 = (char *)dword_1123D68C;
      if ( (unsigned int)dword_1123D68C > dword_1123D690 )
      {
        invalid_parameter_noinfo();
        v34 = (char *)dword_1123D68C;
      }
      v36 = &v35[v14];
      if ( (unsigned int)&v35[v14] > dword_1123D690 || v36 < v34 )
        invalid_parameter_noinfo();
      sub_1006D030(v36 + 20, (char *)dword_1123D690, &v35[v14]);
      v12 = (char *)dword_1123D68C;
      dword_1123D690 -= 20;
      v14 = v40;
    }
    Shader::SetTechnique(*(Shader **)(v15 + 152), *(const char *const *)(v15 + 216));
    v17 = sub_1000BC40(v48);
    Shader::SetWorld(*(Shader **)(v15 + 152), (const struct Matrix *)v17);
    v18 = **(_DWORD **)(v15 + 152);
    if ( (v18 & 2) != 0 )
    {
      if ( !byte_102C7A48 )
      {
        byte_102C7A48 = 1;
        if ( byte_102C7A49 )
        {
          v19 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v19 + 184))(v19);
        }
        else
        {
          v20 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v20 + 196))(v20);
        }
      }
      if ( byte_102C7A49 )
      {
        v21 = RenderDevice::Instance();
        v22 = (void *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v21 + 192))(v21);
LABEL_43:
        Shader::SetColorBuffer(*(Shader **)(v15 + 152), v22);
        goto LABEL_44;
      }
    }
    else
    {
      if ( (v18 & 1) == 0 )
      {
LABEL_44:
        Material::Apply((Material *)v15, 0);
        v27 = 0;
        v46 = Shader::Begin(*(Shader **)(v15 + 152), 0);
        if ( v46 )
        {
          v44 = 6 * v16;
          do
          {
            Shader::BeginPass(*(Shader **)(v15 + 152), v27);
            v28 = RenderDevice::Instance();
            v29 = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v28 + 392))(v28, a2, a1);
            v30 = (char *)dword_1123D68C;
            v31 = v29;
            if ( !dword_1123D68C || (v32 = dword_1123D690, v44 >= (dword_1123D690 - (int)dword_1123D68C) / 20) )
            {
              invalid_parameter_noinfo();
              v32 = dword_1123D690;
              v30 = (char *)dword_1123D68C;
            }
            v45 = &v30[v42];
            if ( !v30 || v44 >= (v32 - (int)v30) / 20 )
            {
              invalid_parameter_noinfo();
              v30 = (char *)dword_1123D68C;
            }
            a1 = 0;
            a2 = 0;
            (*(void (__thiscall **)(int, int, char *, unsigned int, char *, int, _DWORD))(*(_DWORD *)v31 + 108))(
              v31,
              v47,
              (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)&v30[v43],
              v46,
              (char *)&unk_102EAD30 + 162110 * *((_DWORD *)v45 + 3),
              24,
              0);
            Shader::EndPass(*(Shader **)(v15 + 152));
            ++v27;
          }
          while ( v27 < v46 );
          v13 = v42;
        }
        Shader::End(*(Shader **)(v15 + 152));
        v33 = Profiler::Get();
        v14 = v40;
        ++*((_DWORD *)v33 + 13);
        goto LABEL_55;
      }
      byte_102C7A48 = 1;
      if ( byte_102C7A49 )
      {
        v23 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v23 + 184))(v23);
        v24 = RenderDevice::Instance();
        v22 = (void *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v24 + 192))(v24);
        goto LABEL_43;
      }
      v25 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v25 + 196))(v25);
    }
    v26 = RenderDevice::Instance();
    v22 = (void *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v26 + 200))(v26);
    goto LABEL_43;
  }
  v5 = (char *)dword_1123D68C;
  v6 = 0;
  v7 = 0;
  while ( v5 && v6 < (dword_1123D690 - (int)v5) / 20 )
  {
    if ( !*(_DWORD *)&v5[v7 + 4] )
    {
      if ( v6 >= (dword_1123D690 - (int)v5) / 20 )
      {
        invalid_parameter_noinfo();
        v5 = (char *)dword_1123D68C;
      }
      if ( *(_DWORD *)&v5[v7] )
      {
        v8 = v5;
        if ( (unsigned int)v5 > dword_1123D690 )
        {
          invalid_parameter_noinfo();
          v5 = (char *)dword_1123D68C;
        }
        v9 = (unsigned int)&v8[v7];
        if ( v9 > dword_1123D690 || v9 < (unsigned int)v5 )
          invalid_parameter_noinfo();
        sub_1006D030((char *)(v9 + 20), (char *)dword_1123D690, (_DWORD *)v9);
        dword_1123D690 -= 20;
        v5 = (char *)dword_1123D68C;
        --v6;
        v7 -= 20;
      }
    }
    ++v6;
    v7 += 20;
  }
}
