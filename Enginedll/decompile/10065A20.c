/*
 * func-name: ?Line@Canvas@@UAEXKHHHHHW4BlendMode@@0@Z
 * func-address: 0x10065a20
 * callers: none
 * callees: 0x101189f0
 */

int __thiscall Canvas::Line(float *this, float a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  struct RenderDevice *v10; // eax
  double v11; // st7
  double v12; // st6
  struct RenderDevice *v13; // eax
  int result; // eax
  struct RenderDevice *v15; // eax
  struct RenderDevice *v16; // eax
  double v17; // st6
  float v18; // eax
  int (__thiscall *v19)(float *, int, _BYTE *, int, int); // edx
  float v20; // [esp+20h] [ebp-A8h]
  float v21; // [esp+20h] [ebp-A8h]
  float v22; // [esp+20h] [ebp-A8h]
  float v23; // [esp+20h] [ebp-A8h]
  float v24[7]; // [esp+2Ch] [ebp-9Ch] BYREF
  float v25; // [esp+48h] [ebp-80h]
  float v26; // [esp+4Ch] [ebp-7Ch]
  float v27; // [esp+50h] [ebp-78h]
  float v28; // [esp+54h] [ebp-74h]
  _BYTE v29[28]; // [esp+58h] [ebp-70h] BYREF
  _BYTE v30[28]; // [esp+74h] [ebp-54h] BYREF
  _BYTE v31[28]; // [esp+90h] [ebp-38h] BYREF
  _BYTE v32[28]; // [esp+ACh] [ebp-1Ch] BYREF

  v10 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD))(*(_DWORD *)v10 + 484))(v10, 0);
  v11 = this[13];
  v28 = (double)a4 * v11;
  v12 = this[14];
  v26 = (double)a5 * v12;
  v27 = v11 * (double)a6;
  v25 = v12 * (double)a7;
  v13 = RenderDevice::Instance();
  result = (*(int (__thiscall **)(struct RenderDevice *, int, bool))(*(_DWORD *)v13 + 432))(v13, 27, a8 != 0);
  if ( a8 )
  {
    v15 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v15 + 432))(v15, 19, a8);
    v16 = RenderDevice::Instance();
    result = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v16 + 432))(v16, 20, a9);
  }
  if ( a3 > 0 )
  {
    v17 = (double)a3;
    v24[0] = v28;
    v20 = v26 + v17;
    v24[1] = v20;
    v24[2] = 0.0;
    v24[5] = 0.0;
    v24[6] = 0.0;
    v24[3] = 1.0;
    v24[4] = a2;
    qmemcpy(v29, v24, sizeof(v29));
    v21 = v26 - v17;
    v24[5] = 1.0;
    v24[6] = 0.0;
    v24[0] = v28;
    v24[1] = v21;
    v24[2] = 0.0;
    v24[3] = 1.0;
    v24[4] = a2;
    v22 = v25 + v17;
    qmemcpy(v30, v24, sizeof(v30));
    v24[5] = 0.0;
    v24[6] = 1.0;
    v24[0] = v27;
    v24[1] = v22;
    v24[2] = 0.0;
    v24[3] = 1.0;
    qmemcpy(v31, v24, sizeof(v31));
    v24[0] = v27;
    v24[4] = a2;
    v18 = *this;
    v23 = v25 - v17;
    v24[1] = v23;
    v24[2] = 0.0;
    v24[5] = 1.0;
    v24[3] = 1.0;
    v19 = *(int (__thiscall **)(float *, int, _BYTE *, int, int))(LODWORD(v18) + 112);
    v24[6] = 1.0;
    qmemcpy(v32, v24, sizeof(v32));
    return v19(this, 4, v29, 28, 1);
  }
  return result;
}
