/*
 * func-name: ?DrawMoon@SkyController@@AAEXAAVVector@@@Z
 * func-address: 0x1012c590
 * callers: 0x1012e2b0
 * callees: 0x1000bc40, 0x1008fcc0, 0x100e2b60, 0x101189f0, 0x1011fd80, 0x1011fdc0, 0x101206e0, 0x101218a0, 0x10121a70, 0x10121e80, 0x10122050, 0x10124d90, 0x1012c460, 0x10178370, 0x101783a0, 0x101a281a, 0x101a2820
 */

void __userpurge SkyController::DrawMoon(
        SkyController *this@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        struct Vector *a4,
        float *a5)
{
  float *v6; // eax
  bool v7; // zf
  float v8; // edx
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st6
  double v13; // st6
  float *v14; // eax
  float *v15; // eax
  double v16; // st5
  double v17; // st3
  double v18; // st2
  Shader *v19; // edi
  struct RenderDevice *v20; // eax
  void *v21; // eax
  float *v22; // eax
  struct RenderDevice *v23; // eax
  struct RenderDevice *v24; // eax
  struct RenderDevice *v25; // eax
  struct RenderDevice *v26; // eax
  struct RenderDevice *v27; // eax
  float v28; // [esp+8h] [ebp-D0h]
  float v29; // [esp+Ch] [ebp-CCh]
  float v30; // [esp+Ch] [ebp-CCh]
  int v31; // [esp+Ch] [ebp-CCh]
  float v32; // [esp+Ch] [ebp-CCh]
  int v33; // [esp+10h] [ebp-C8h] BYREF
  int v34; // [esp+14h] [ebp-C4h] BYREF
  int v35; // [esp+18h] [ebp-C0h]
  int v36; // [esp+1Ch] [ebp-BCh]
  float v37; // [esp+20h] [ebp-B8h]
  int v38; // [esp+24h] [ebp-B4h]
  int v39; // [esp+28h] [ebp-B0h]
  int v40; // [esp+2Ch] [ebp-ACh]
  float v41; // [esp+34h] [ebp-A4h]
  float v42; // [esp+38h] [ebp-A0h]
  float v43; // [esp+3Ch] [ebp-9Ch]
  float v44; // [esp+40h] [ebp-98h]
  float v45; // [esp+44h] [ebp-94h]
  float v46; // [esp+48h] [ebp-90h]
  float v47; // [esp+4Ch] [ebp-8Ch]
  float v48; // [esp+50h] [ebp-88h]
  float v49; // [esp+54h] [ebp-84h]
  float v50; // [esp+58h] [ebp-80h]
  float v51[16]; // [esp+5Ch] [ebp-7Ch] BYREF
  float v52[15]; // [esp+9Ch] [ebp-3Ch] BYREF

  v6 = sub_1012C460((float *)&v33, *((float *)this + 948));
  *((float *)this + 924) = *v6;
  *((float *)this + 925) = v6[1];
  *((float *)this + 926) = v6[2];
  v7 = *((_BYTE *)this + 1328) == 0;
  v44 = *((float *)this + 924) * -6000.0;
  v45 = *((float *)this + 925) * -6000.0;
  v8 = v45;
  v9 = -6000.0 * *((float *)this + 926);
  *((float *)this + 921) = v44;
  *((float *)this + 922) = v8;
  v46 = v9;
  v10 = *((float *)this + 286);
  *((float *)this + 923) = v46;
  v37 = v10;
  v38 = *((int *)this + 287);
  v39 = *((int *)this + 288);
  v11 = *((float *)SkyController::mySkySettings + 25);
  *(float *)&v33 = v37 * v11;
  v12 = *(float *)&v38;
  *((float *)this + 912) = *(float *)&v33;
  *(float *)&v34 = v12 * v11;
  v13 = *(float *)&v39;
  *((float *)this + 913) = *(float *)&v34;
  *(float *)&v35 = v13 * v11;
  *((float *)this + 914) = *(float *)&v35;
  *(float *)&v36 = v11;
  *((float *)this + 915) = *(float *)&v36;
  if ( !v7 && *((float *)this + 270) >= 0.005 && *((_BYTE *)SkyController::mySkySettings + 57) )
  {
    v43 = *((float *)this + 271);
    v28 = *((float *)this + 948) - *((float *)SkyController::mySkySettings + 3);
    v29 = v28 * 0.004363323096185923;
    v30 = cos(v29);
    v41 = *((float *)SkyController::mySkySettings + 5) * v30;
    *(float *)&v33 = sin(*(float *)&v33);
    v42 = *(float *)&v33 * *((float *)SkyController::mySkySettings + 4);
    *(float *)&v34 = -v41;
    *(float *)&v35 = -v42;
    *(float *)&v36 = -0.0;
    sub_1008FCC0(v51, &v34);
    v45 = *a5 + v41;
    v46 = a5[1] + v42;
    v47 = a5[2] + 0.0;
    v14 = (float *)sub_10178370(&v34);
    v48 = v44 * *v14;
    v49 = v14[1] * v44;
    v50 = v44 * v14[2];
    v15 = (float *)sub_101783A0(&v34);
    v41 = *v15 * v44;
    v42 = v15[1] * v44;
    v43 = v44 * v15[2];
    if ( v30 < 0.0 )
    {
      v41 = v41 * -1.0;
      v42 = v42 * -1.0;
      v43 = v43 * -1.0;
      v48 = v48 * -1.0;
      v49 = v49 * -1.0;
      v50 = -1.0 * v50;
    }
    *(float *)&v31 = v45 - v48;
    v16 = *(float *)&v31;
    v38 = v31;
    v32 = v46 - v49;
    v44 = v47 - v50;
    *(float *)&v34 = *(float *)&v38 - v41;
    dword_11241A48 = v34;
    *(float *)&v35 = v32 - v42;
    dword_11241A4C = v35;
    *(float *)&v36 = v44 - v43;
    dword_11241A50 = v36;
    *(float *)&v33 = v45 + v48;
    v17 = *(float *)&v33;
    v34 = v33;
    *(float *)&v33 = v49 + v46;
    v18 = *(float *)&v33;
    v35 = v33;
    *(float *)&v33 = v50 + v47;
    *(float *)&v38 = *(float *)&v34 - v41;
    dword_11241A5C = v38;
    *(float *)&v39 = *(float *)&v35 - v42;
    dword_11241A60 = v39;
    *(float *)&v40 = *(float *)&v33 - v43;
    dword_11241A64 = v40;
    *(float *)&v34 = v16;
    *(float *)&v38 = *(float *)&v34 + v41;
    dword_11241A70 = v38;
    *(float *)&v39 = v32 + v42;
    dword_11241A74 = v39;
    *(float *)&v40 = v44 + v43;
    dword_11241A78 = v40;
    *(float *)&v34 = v17;
    *(float *)&v35 = v18;
    v36 = v33;
    *(float *)&v38 = v41 + *(float *)&v34;
    dword_11241A84 = v38;
    *(float *)&v39 = v42 + *(float *)&v35;
    dword_11241A88 = v39;
    *(float *)&v40 = v43 + *(float *)&v33;
    dword_11241A8C = v40;
    v19 = *(Shader **)(*((_DWORD *)this + 892) + 152);
    Shader::SetTechnique(v19, a2, a3, (int)v19, *((const char **)this + 893));
    v20 = RenderDevice::Instance();
    v21 = (void *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v20 + 192))(v20);
    Shader::SetColorBuffer(v19, v21);
    v22 = sub_1000BC40(v52);
    Shader::SetWorld(v19, (const struct Matrix *)v22);
    Material::Apply(*((Material **)this + 892), 0);
    v23 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v23 + 416))(v23, 258);
    Shader::Begin(v19, 0);
    Shader::BeginPass(v19, 0);
    v24 = RenderDevice::Instance();
    if ( !(*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v24 + 132))(v24) )
    {
      v25 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v25 + 432))(v25, 27, 1);
    }
    v26 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int, int *, int, _DWORD))(*(_DWORD *)v26 + 420))(
      v26,
      5,
      2,
      &dword_11241A48,
      20,
      0);
    Shader::UnbindHDRTarget(v19);
    Shader::EndPass(v19);
    Shader::End(v19);
    v27 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v27 + 432))(v27, 27, 0);
  }
}
