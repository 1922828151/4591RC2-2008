/*
 * func-name: ?Init@TextureCamera@@QAEXVVector@@0M_NUFloatColor@@MH@Z
 * func-address: 0x1016db80
 * callers: 0x100b2080, 0x100b41c0, 0x1016e600
 * callees: 0x10063980, 0x1008fcc0
 */

int __thiscall TextureCamera::Init(
        int this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float a8,
        char a9,
        int a10,
        int a11,
        int a12,
        int a13,
        float a14,
        int a15)
{
  float *v16; // eax
  double v17; // st7
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  double v24; // st7
  int v25; // ecx
  int v26; // edx
  int (*v27)(void); // eax
  float v29[16]; // [esp+10h] [ebp-40h] BYREF

  *(_BYTE *)(this + 1052) = a9;
  *(_DWORD *)(this + 856) = a2;
  *(_DWORD *)(this + 860) = a3;
  *(_DWORD *)(this + 864) = a4;
  v16 = sub_1008FCC0(v29, &a5);
  v17 = a8;
  qmemcpy((void *)(this + 868), v16, 0x40u);
  *(float *)(this + 1480) = v17;
  v18 = a5;
  *(_DWORD *)(this + 1440) = a2;
  *(_DWORD *)(this + 1444) = a3;
  v19 = a6;
  *(_DWORD *)(this + 1464) = v18;
  *(_DWORD *)(this + 1448) = a4;
  v20 = a7;
  *(_DWORD *)(this + 1468) = v19;
  *(_DWORD *)(this + 1472) = v20;
  Camera::Update((Camera *)(this + 1088));
  v21 = a10;
  v22 = a11;
  v23 = a12;
  *(float *)(this + 1528) = a14;
  v24 = a8;
  *(_DWORD *)(this + 1508) = v21;
  v25 = a13;
  *(float *)(this + 1604) = v24;
  *(_DWORD *)(this + 1512) = v22;
  *(_DWORD *)(this + 1516) = v23;
  *(_DWORD *)(this + 1520) = v25;
  *(_DWORD *)(this + 1524) = 0;
  std::string::operator=(this + 1532, &unk_101CE625);
  std::string::operator=(this + 1560, &unk_101CE626);
  *(float *)(this + 1592) = 512.0;
  *(float *)(this + 1596) = 512.0;
  *(_DWORD *)(this + 1588) = 0;
  *(float *)(this + 1600) = 0.0;
  v26 = *(_DWORD *)(this + 1056);
  *(_DWORD *)(this + 1060) = 512;
  *(_DWORD *)(this + 1064) = 512;
  v27 = *(int (**)(void))(v26 + 4);
  *(_DWORD *)(this + 1068) = this;
  return v27();
}
