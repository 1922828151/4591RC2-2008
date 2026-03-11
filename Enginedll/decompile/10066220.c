/*
 * func-name: ?RotatedBox@Canvas@@UAEXKHHHHMAAVVector@@PAVTexture@@W4BlendMode@@2@Z
 * func-address: 0x10066220
 * callers: none
 * callees: 0x10064c70, 0x101189f0, 0x10136210, 0x101a26c0
 */

int __userpurge Canvas::RotatedBox@<eax>(
        float *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5@<esi>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        float *a12,
        int a13,
        int a14,
        float a15,
        int a16,
        float *a17,
        int a18,
        int a19)
{
  struct RenderDevice *v20; // eax
  struct RenderDevice *v21; // eax
  struct RenderDevice *v22; // eax
  double v23; // st5
  double v24; // st7
  double v25; // st1
  double v26; // st7
  double v27; // st6
  double v28; // st4
  int *v29; // esi
  int v30; // edi
  struct RenderDevice *v31; // eax
  float v34; // [esp+40h] [ebp-A0h]
  float v35; // [esp+40h] [ebp-A0h]
  float v36; // [esp+40h] [ebp-A0h]
  float v37; // [esp+40h] [ebp-A0h]
  float v38; // [esp+40h] [ebp-A0h]
  float v39; // [esp+40h] [ebp-A0h]
  float v40; // [esp+44h] [ebp-9Ch]
  float v41; // [esp+44h] [ebp-9Ch]
  float v42; // [esp+48h] [ebp-98h]
  float v43; // [esp+48h] [ebp-98h]
  float v44[7]; // [esp+54h] [ebp-8Ch] BYREF
  float v45; // [esp+70h] [ebp-70h]
  float v46; // [esp+74h] [ebp-6Ch]
  float v47; // [esp+78h] [ebp-68h]
  float v48; // [esp+7Ch] [ebp-64h]
  int v49[7]; // [esp+80h] [ebp-60h] BYREF
  _BYTE v50[28]; // [esp+9Ch] [ebp-44h] BYREF
  _BYTE v51[28]; // [esp+B8h] [ebp-28h] BYREF
  float v52[3]; // [esp+D4h] [ebp-Ch] BYREF
  int v53; // [esp+F4h] [ebp+14h]
  float v54; // [esp+108h] [ebp+28h]

  v53 = (int)((double)a10 * a1[14]);
  *a12 = *a12 * a1[13];
  a12[1] = a1[14] * a12[1];
  v20 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, bool, int, int, int, int))(*(_DWORD *)v20 + 432))(
    v20,
    27,
    a14 != 0,
    a4,
    a5,
    a3,
    a2);
  if ( a14 )
  {
    v21 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v21 + 432))(v21, 19, a14);
    v22 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v22 + 432))(v22, 20, a19);
  }
  v47 = 0.0;
  v48 = 0.0;
  v46 = 1.0;
  v45 = 1.0;
  if ( a17 )
  {
    v47 = a17[15];
    v48 = a17[16];
    v46 = a17[17];
    v45 = a17[18];
  }
  v54 = a15 * 0.01745329300562541;
  v34 = (float)a11;
  v23 = v34;
  v44[0] = v34;
  v35 = (float)(int)a12;
  v24 = v35;
  v44[1] = v35;
  v44[2] = 0.0;
  v44[5] = v47;
  v44[3] = 1.0;
  v44[6] = v48;
  LODWORD(v44[4]) = v53;
  qmemcpy(v49, v44, sizeof(v49));
  LODWORD(v44[4]) = v53;
  v36 = (float)(a13 + a11);
  v25 = v24;
  v26 = v36;
  v44[0] = v36;
  v42 = v25;
  v44[1] = v42;
  v44[2] = 0.0;
  v44[3] = 1.0;
  v37 = v46 + v47;
  v44[5] = v37;
  v27 = v37;
  v44[6] = v48;
  qmemcpy(v50, v44, sizeof(v50));
  v40 = v23;
  v38 = (float)((int)a12 + a14);
  v28 = v38;
  v44[5] = v47;
  v44[0] = v40;
  v44[1] = v38;
  v39 = v48 + v45;
  v44[2] = 0.0;
  v44[3] = 1.0;
  v44[6] = v39;
  LODWORD(v44[4]) = v53;
  v41 = v26;
  qmemcpy(v51, v44, sizeof(v51));
  v43 = v28;
  v44[5] = v27;
  v44[6] = v39;
  v44[0] = v41;
  v44[1] = v43;
  v44[2] = 0.0;
  v44[3] = 1.0;
  LODWORD(v44[4]) = v53;
  qmemcpy(v52, v44, 0x1Cu);
  v29 = v49;
  v30 = 4;
  do
  {
    sub_10064C70((float *)v29, v54, a12);
    v29 += 7;
    --v30;
  }
  while ( v30 );
  if ( a17 )
  {
    Texture::Set((Texture *)a17, 0);
  }
  else
  {
    v31 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD))(*(_DWORD *)v31 + 484))(v31, 0);
  }
  return (*(int (__thiscall **)(float *, int, int *, int, int))(*(_DWORD *)a1 + 112))(a1, 4, v49, 28, 1);
}
