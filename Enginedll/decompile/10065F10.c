/*
 * func-name: ?Box@Canvas@@UAEXKHHHHPAVTexture@@W4BlendMode@@1@Z
 * func-address: 0x10065f10
 * callers: none
 * callees: 0x101189f0, 0x10136210, 0x101a26c0
 */

int __userpurge Canvas::Box@<eax>(
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
        int a12,
        int a13,
        int a14,
        float *a15,
        int a16,
        int a17)
{
  int v18; // ebp
  struct RenderDevice *v19; // eax
  struct RenderDevice *v20; // eax
  struct RenderDevice *v21; // eax
  double v22; // st5
  double v23; // st7
  double v24; // st1
  double v25; // st7
  double v26; // st6
  double v27; // st4
  struct RenderDevice *v28; // eax
  float v32; // [esp+28h] [ebp-A0h]
  float v33; // [esp+28h] [ebp-A0h]
  float v34; // [esp+28h] [ebp-A0h]
  float v35; // [esp+28h] [ebp-A0h]
  float v36; // [esp+28h] [ebp-A0h]
  float v37; // [esp+28h] [ebp-A0h]
  float v38; // [esp+2Ch] [ebp-9Ch]
  float v39; // [esp+2Ch] [ebp-9Ch]
  float v40; // [esp+30h] [ebp-98h]
  float v41; // [esp+30h] [ebp-98h]
  float v42[7]; // [esp+3Ch] [ebp-8Ch] BYREF
  float v43; // [esp+58h] [ebp-70h]
  float v44; // [esp+5Ch] [ebp-6Ch]
  float v45; // [esp+60h] [ebp-68h]
  float v46; // [esp+64h] [ebp-64h]
  _BYTE v47[28]; // [esp+68h] [ebp-60h] BYREF
  _BYTE v48[28]; // [esp+84h] [ebp-44h] BYREF
  _BYTE v49[28]; // [esp+A0h] [ebp-28h] BYREF
  float v50[3]; // [esp+BCh] [ebp-Ch] BYREF
  int v51; // [esp+DCh] [ebp+14h]

  v18 = (int)((double)a7 * a1[13]);
  v51 = (int)((double)a10 * a1[14]);
  v19 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, bool, int, int, int, int))(*(_DWORD *)v19 + 432))(
    v19,
    27,
    a12 != 0,
    a4,
    a5,
    a3,
    a2);
  if ( a12 )
  {
    v20 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v20 + 432))(v20, 19, a12);
    v21 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v21 + 432))(v21, 20, a17);
  }
  v45 = 0.0;
  v46 = 0.0;
  v44 = 1.0;
  v43 = 1.0;
  if ( a15 )
  {
    v45 = a15[15];
    v46 = a15[16];
    v44 = a15[17];
    v43 = a15[18];
  }
  v32 = (float)a11;
  v22 = v32;
  v42[0] = v32;
  v33 = (float)a12;
  v42[1] = v33;
  v23 = v33;
  v42[2] = 0.0;
  v42[5] = v45;
  v42[3] = 1.0;
  LODWORD(v42[4]) = v51;
  v42[6] = v46;
  qmemcpy(v47, v42, sizeof(v47));
  LODWORD(v42[4]) = v51;
  v34 = (float)(a13 + v18);
  v24 = v23;
  v25 = v34;
  v42[0] = v34;
  v40 = v24;
  v42[1] = v40;
  v42[2] = 0.0;
  v42[3] = 1.0;
  v35 = v44 + v45;
  v42[5] = v35;
  v26 = v35;
  v42[6] = v46;
  qmemcpy(v48, v42, sizeof(v48));
  v38 = v22;
  v42[0] = v38;
  v36 = (float)(a14 + a12);
  v27 = v36;
  v42[1] = v36;
  v42[5] = v45;
  v42[2] = 0.0;
  v42[3] = 1.0;
  LODWORD(v42[4]) = v51;
  v37 = v46 + v43;
  v42[6] = v37;
  qmemcpy(v49, v42, sizeof(v49));
  v39 = v25;
  v41 = v27;
  v42[5] = v26;
  v42[6] = v37;
  v42[0] = v39;
  v42[1] = v41;
  v42[2] = 0.0;
  v42[3] = 1.0;
  LODWORD(v42[4]) = v51;
  qmemcpy(v50, v42, 0x1Cu);
  if ( a15 )
  {
    Texture::Set((Texture *)a15, 0);
  }
  else
  {
    v28 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD))(*(_DWORD *)v28 + 484))(v28, 0);
  }
  return (*(int (__thiscall **)(float *, int, _BYTE *, int, int))(*(_DWORD *)a1 + 112))(a1, 4, v47, 28, 1);
}
