/*
 * func-name: ?Box@Canvas@@UAEXKHHHHPAVMaterial@@@Z
 * func-address: 0x100678c0
 * callers: none
 * callees: 0x100e2b60, 0x101189f0, 0x1011fd80, 0x1011fdc0, 0x101206e0, 0x10121a70, 0x10121e80, 0x10122050, 0x10124d90, 0x101786e0, 0x101a251c, 0x101a26c0
 */

void __thiscall Canvas::Box(Canvas *this, unsigned int a2, int a3, int a4, int a5, int a6, struct Material *a7)
{
  int v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st3
  double v12; // st6
  struct RenderDevice *v13; // eax
  struct RenderDevice *v14; // eax
  void *v15; // eax
  unsigned int v16; // ebp
  unsigned int i; // edi
  float v18; // [esp+14h] [ebp-E0h]
  float v19; // [esp+14h] [ebp-E0h]
  float v20; // [esp+14h] [ebp-E0h]
  float v21; // [esp+14h] [ebp-E0h]
  float v22; // [esp+18h] [ebp-DCh]
  float v23; // [esp+18h] [ebp-DCh]
  float v24; // [esp+1Ch] [ebp-D8h]
  _DWORD v25[7]; // [esp+28h] [ebp-CCh] BYREF
  float v26[16]; // [esp+44h] [ebp-B0h] BYREF
  _BYTE v27[28]; // [esp+84h] [ebp-70h] BYREF
  _BYTE v28[28]; // [esp+A0h] [ebp-54h] BYREF
  _BYTE v29[28]; // [esp+BCh] [ebp-38h] BYREF
  _BYTE v30[28]; // [esp+D8h] [ebp-1Ch] BYREF
  int v31; // [esp+FCh] [ebp+8h]
  int v32; // [esp+100h] [ebp+Ch]
  int v33; // [esp+104h] [ebp+10h]

  v31 = (int)((double)a3 * *((float *)this + 13));
  v32 = (int)((double)a4 * *((float *)this + 14));
  v33 = (int)((double)a5 * *((float *)this + 13));
  v8 = (int)((double)a6 * *((float *)this + 14));
  v18 = (float)v31;
  v9 = v18;
  *(float *)v25 = v18;
  v19 = (float)v32;
  v10 = v19;
  *(float *)&v25[1] = v19;
  *(float *)&v25[2] = 0.0;
  *(float *)&v25[5] = 0.0;
  *(float *)&v25[6] = 0.0;
  *(float *)&v25[3] = 1.0;
  v25[4] = a2;
  qmemcpy(v27, v25, sizeof(v27));
  v25[4] = a2;
  v20 = (float)(v33 + v31);
  *(float *)v25 = v20;
  v11 = v10;
  v12 = v20;
  v24 = v11;
  *(float *)&v25[1] = v24;
  *(float *)&v25[2] = 0.0;
  *(float *)&v25[5] = 1.0;
  *(float *)&v25[3] = 1.0;
  *(float *)&v25[6] = 0.0;
  qmemcpy(v28, v25, sizeof(v28));
  v22 = v9;
  *(float *)v25 = v22;
  v25[4] = a2;
  v21 = (float)(v8 + v32);
  *(float *)&v25[1] = v21;
  *(float *)&v25[2] = 0.0;
  *(float *)&v25[3] = 1.0;
  *(float *)&v25[5] = 0.0;
  *(float *)&v25[6] = 1.0;
  qmemcpy(v29, v25, sizeof(v29));
  v23 = v12;
  *(float *)&v25[5] = 1.0;
  *(float *)&v25[6] = 1.0;
  *(float *)&v25[1] = v21;
  *(float *)v25 = v23;
  *(float *)&v25[3] = 1.0;
  v25[4] = a2;
  *(float *)&v25[2] = 0.0;
  qmemcpy(v30, v25, sizeof(v30));
  Shader::SetTechnique(*((Shader **)a7 + 38), *((const char *const *)a7 + 54));
  memset(v26, 0, sizeof(v26));
  sub_101786E0(1.0);
  v26[15] = 1.0;
  Shader::SetWorld(*((Shader **)a7 + 38), (const struct Matrix *)v26);
  if ( (**((_BYTE **)a7 + 38) & 3) != 0 )
  {
    v13 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v13 + 196))(v13);
    v14 = RenderDevice::Instance();
    v15 = (void *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v14 + 200))(v14);
    Shader::SetColorBuffer(*((Shader **)a7 + 38), v15);
  }
  Material::Apply(a7, 0);
  v16 = Shader::Begin(*((Shader **)a7 + 38), 0);
  for ( i = 0; i < v16; ++i )
  {
    Shader::BeginPass(*((Shader **)a7 + 38), i);
    (*(void (__thiscall **)(Canvas *, int, _BYTE *, int, int, _DWORD, _DWORD))(*(_DWORD *)this + 120))(
      this,
      4,
      v27,
      28,
      1,
      0,
      0);
    Shader::EndPass(*((Shader **)a7 + 38));
  }
  Shader::End(*((Shader **)a7 + 38));
}
