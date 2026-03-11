/*
 * func-name: ?DrawSun@SkyController@@AAEXAAVVector@@@Z
 * func-address: 0x1012cad0
 * callers: 0x1012e2b0
 * callees: 0x1000bc40, 0x1008fcc0, 0x100e2b60, 0x101189f0, 0x1011fd80, 0x1011fdc0, 0x101206e0, 0x101218a0, 0x10121a70, 0x10121e80, 0x10122050, 0x10124d90, 0x1012c460, 0x10178370, 0x101783a0, 0x101a281a, 0x101a2820
 */

void __userpurge SkyController::DrawSun(SkyController *this@<ecx>, int a2@<ebx>, int a3@<ebp>, struct Vector *a4)
{
  float *v5; // eax
  float v6; // edx
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st6
  double v11; // st6
  double v12; // st7
  bool v13; // zf
  double v14; // st7
  double v15; // st5
  float *v16; // eax
  float *v17; // eax
  double v18; // st5
  double v19; // st3
  Shader *v20; // edi
  struct RenderDevice *v21; // eax
  void *v22; // eax
  float *v23; // eax
  struct RenderDevice *v24; // eax
  struct RenderDevice *v25; // eax
  struct RenderDevice *v26; // eax
  struct RenderDevice *v27; // eax
  struct RenderDevice *v28; // eax
  float v29; // [esp+Ch] [ebp-D4h]
  float v30; // [esp+Ch] [ebp-D4h]
  float v31; // [esp+Ch] [ebp-D4h]
  int v32; // [esp+10h] [ebp-D0h] BYREF
  int v33; // [esp+14h] [ebp-CCh]
  float v34; // [esp+18h] [ebp-C8h]
  float v35; // [esp+1Ch] [ebp-C4h]
  int v36; // [esp+20h] [ebp-C0h]
  int v37; // [esp+24h] [ebp-BCh]
  int v38; // [esp+28h] [ebp-B8h]
  int v39; // [esp+2Ch] [ebp-B4h]
  float v40; // [esp+34h] [ebp-ACh]
  float v41; // [esp+38h] [ebp-A8h]
  float v42; // [esp+3Ch] [ebp-A4h]
  float v43; // [esp+40h] [ebp-A0h]
  float v44; // [esp+44h] [ebp-9Ch]
  float v45; // [esp+48h] [ebp-98h]
  float v46; // [esp+4Ch] [ebp-94h]
  float v47; // [esp+50h] [ebp-90h]
  float v48; // [esp+54h] [ebp-8Ch]
  float v49; // [esp+58h] [ebp-88h]
  float v50; // [esp+5Ch] [ebp-84h]
  float v51[16]; // [esp+60h] [ebp-80h] BYREF
  float v52[16]; // [esp+A0h] [ebp-40h] BYREF

  v5 = sub_1012C460((float *)&v32, *((float *)this + 948));
  *((float *)this + 906) = *v5;
  *((float *)this + 907) = v5[1];
  *((float *)this + 908) = v5[2];
  v41 = *((float *)this + 906) * -6000.0;
  v42 = *((float *)this + 907) * -6000.0;
  v6 = v42;
  v7 = -6000.0 * *((float *)this + 908);
  *((float *)this + 903) = v41;
  *((float *)this + 904) = v6;
  v43 = v7;
  v8 = *((float *)this + 283);
  *((float *)this + 905) = v43;
  *(float *)&v37 = v8;
  v38 = *((int *)this + 284);
  v39 = *((int *)this + 285);
  v9 = *((float *)SkyController::mySkySettings + 24);
  *(float *)&v32 = *(float *)&v37 * v9;
  v10 = *(float *)&v38;
  *((float *)this + 894) = *(float *)&v32;
  *(float *)&v33 = v10 * v9;
  v11 = *(float *)&v39;
  *((float *)this + 895) = *(float *)&v33;
  v34 = v11 * v9;
  *((float *)this + 896) = v34;
  v35 = v9;
  v12 = *((float *)this + 273);
  *((float *)this + 897) = v35;
  v47 = v12;
  v29 = *((float *)this + 948) - *((float *)SkyController::mySkySettings + 6);
  v40 = v29 * 0.004363323096185923;
  v30 = cos(v40);
  v44 = *((float *)SkyController::mySkySettings + 8) * v30;
  v13 = *((_BYTE *)this + 1328) == 0;
  *(float *)&v36 = sin(v40);
  v45 = *(float *)&v36 * *((float *)SkyController::mySkySettings + 7);
  *((float *)this + 303) = v40;
  v14 = v44;
  v41 = v44 * 600.0;
  v15 = v45;
  *((float *)this + 308) = v41;
  v42 = v15 * 600.0;
  *((float *)this + 309) = v42;
  v43 = 600.0 * 0.0;
  *((float *)this + 310) = v43;
  if ( !v13 && *((float *)this + 272) >= 0.005 && *((_BYTE *)SkyController::mySkySettings + 56) )
  {
    *(float *)&v32 = -v14;
    *(float *)&v33 = -v15;
    v34 = -0.0;
    sub_1008FCC0(v51, &v32);
    v41 = *(float *)a4 + v44;
    v42 = *((float *)a4 + 1) + v45;
    v43 = *((float *)a4 + 2) + 0.0;
    v16 = (float *)sub_10178370(&v32);
    v48 = *v16 * v47;
    v49 = v16[1] * v47;
    v50 = v47 * v16[2];
    v17 = (float *)sub_101783A0(&v32);
    v44 = *v17 * v47;
    v45 = v17[1] * v47;
    v46 = v47 * v17[2];
    if ( v30 < 0.0 )
    {
      v44 = v44 * -1.0;
      v45 = v45 * -1.0;
      v46 = v46 * -1.0;
      v48 = v48 * -1.0;
      v49 = v49 * -1.0;
      v50 = -1.0 * v50;
    }
    *(float *)&v36 = v41 - v48;
    v18 = *(float *)&v36;
    v31 = v42 - v49;
    v47 = v43 - v50;
    *(float *)&v32 = *(float *)&v36 - v44;
    dword_11241A48 = v32;
    *(float *)&v33 = v31 - v45;
    dword_11241A4C = v33;
    v34 = v47 - v46;
    dword_11241A50 = LODWORD(v34);
    *(float *)&v36 = v41 + v48;
    v19 = *(float *)&v36;
    v32 = v36;
    *(float *)&v36 = v49 + v42;
    v40 = v50 + v43;
    *(float *)&v37 = *(float *)&v32 - v44;
    dword_11241A5C = v37;
    *(float *)&v38 = *(float *)&v36 - v45;
    dword_11241A60 = v38;
    *(float *)&v39 = v40 - v46;
    dword_11241A64 = v39;
    *(float *)&v32 = v18;
    *(float *)&v37 = *(float *)&v32 + v44;
    dword_11241A70 = v37;
    *(float *)&v38 = v31 + v45;
    dword_11241A74 = v38;
    *(float *)&v39 = v47 + v46;
    dword_11241A78 = v39;
    *(float *)&v32 = v19;
    v33 = v36;
    v34 = v40;
    *(float *)&v37 = v44 + *(float *)&v32;
    dword_11241A84 = v37;
    *(float *)&v38 = v45 + *(float *)&v36;
    dword_11241A88 = v38;
    *(float *)&v39 = v46 + v40;
    dword_11241A8C = v39;
    v20 = *(Shader **)(*((_DWORD *)this + 890) + 152);
    Shader::SetTechnique(v20, a2, a3, (int)v20, *((const char **)this + 891));
    v21 = RenderDevice::Instance();
    v22 = (void *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v21 + 192))(v21);
    Shader::SetColorBuffer(v20, v22);
    v23 = sub_1000BC40(v52);
    Shader::SetWorld(v20, (const struct Matrix *)v23);
    Material::Apply(*((Material **)this + 890), 0);
    v24 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v24 + 416))(v24, 258);
    Shader::Begin(v20, 0);
    Shader::BeginPass(v20, 0);
    v25 = RenderDevice::Instance();
    if ( !(*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v25 + 132))(v25) )
    {
      v26 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v26 + 432))(v26, 27, 1);
    }
    v27 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int, int *, int, _DWORD, _DWORD))(*(_DWORD *)v27 + 420))(
      v27,
      5,
      2,
      &dword_11241A48,
      20,
      0,
      0);
    Shader::UnbindHDRTarget(v20);
    Shader::EndPass(v20);
    Shader::End(v20);
    v28 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v28 + 432))(v28, 27, 0);
  }
}
