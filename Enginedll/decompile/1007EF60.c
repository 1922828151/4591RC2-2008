/*
 * func-name: ?Intialize@Editor@@QAEXXZ
 * func-address: 0x1007ef60
 * callers: 0x10097ea0
 * callees: 0x100971c0, 0x101189f0, 0x10136530, 0x101780b0, 0x101780b6, 0x1017bd70, 0x1017c0d0, 0x1017c3a0
 */

void __thiscall Editor::Intialize(Editor *this)
{
  struct RenderDevice *v2; // eax
  struct RenderDevice *v3; // eax
  char v4[4]; // [esp+18h] [ebp-54h] BYREF
  int v5; // [esp+1Ch] [ebp-50h]
  int v6; // [esp+20h] [ebp-4Ch]
  int v7; // [esp+24h] [ebp-48h]
  int v8; // [esp+28h] [ebp-44h]
  int v9; // [esp+2Ch] [ebp-40h]
  int v10; // [esp+30h] [ebp-3Ch]
  int v11; // [esp+34h] [ebp-38h] BYREF
  float v12; // [esp+38h] [ebp-34h]
  float v13; // [esp+3Ch] [ebp-30h]
  float v14; // [esp+40h] [ebp-2Ch]
  float v15; // [esp+44h] [ebp-28h]
  float v16; // [esp+48h] [ebp-24h]
  int v17; // [esp+4Ch] [ebp-20h]
  float v18; // [esp+58h] [ebp-14h]
  int *v19; // [esp+5Ch] [ebp-10h]
  int v20; // [esp+68h] [ebp-4h]

  v17 = 0;
  *((_DWORD *)this + 513) = RenderDevice::Instance();
  v2 = RenderDevice::Instance();
  D3DXCreateCylinder(*((_DWORD *)v2 + 427), 0.0, 0.2, 0.5, 10, 10, (char *)this + 64, v17);
  v3 = RenderDevice::Instance();
  D3DXCreateSphere(*((_DWORD *)v3 + 427), 0.2, 10, 10, (char *)this + 68, 0);
  v18 = COERCE_FLOAT(&v11);
  std::string::string(&v11, &unk_101C32FB);
  v19 = (int *)v4;
  v20 = 0;
  std::string::string(v4, "SnapToGrid");
  LOBYTE(v20) = 1;
  Engine::Instance();
  v20 = -1;
  if ( (unsigned __int8)sub_1017BD70(
                          v4[0],
                          v5,
                          v6,
                          v7,
                          v8,
                          v9,
                          v10,
                          v11,
                          LODWORD(v12),
                          LODWORD(v13),
                          LODWORD(v14),
                          LODWORD(v15),
                          LODWORD(v16),
                          v17) )
  {
    v19 = &v11;
    std::string::string(&v11, &unk_101C330A);
    v18 = COERCE_FLOAT(v4);
    v20 = 2;
    std::string::string(v4, "SnapToGrid");
    LOBYTE(v20) = 3;
    Engine::Instance();
    v20 = -1;
    *((_BYTE *)this + 2084) = sub_1017C0D0(
                                v4[0],
                                v5,
                                v6,
                                v7,
                                v8,
                                v9,
                                v10,
                                v11,
                                LODWORD(v12),
                                LODWORD(v13),
                                LODWORD(v14),
                                LODWORD(v15),
                                LODWORD(v16),
                                v17);
  }
  v19 = &v11;
  std::string::string(&v11, &unk_101C330B);
  v18 = COERCE_FLOAT(v4);
  v20 = 4;
  std::string::string(v4, "SnapToGridValue");
  LOBYTE(v20) = 5;
  Engine::Instance();
  v20 = -1;
  if ( (unsigned __int8)sub_1017BD70(
                          v4[0],
                          v5,
                          v6,
                          v7,
                          v8,
                          v9,
                          v10,
                          v11,
                          LODWORD(v12),
                          LODWORD(v13),
                          LODWORD(v14),
                          LODWORD(v15),
                          LODWORD(v16),
                          v17) )
  {
    v19 = &v11;
    std::string::string(&v11, &unk_101C3316);
    v18 = COERCE_FLOAT(v4);
    v20 = 6;
    std::string::string(v4, "SnapToGridValue");
    LOBYTE(v20) = 7;
    Engine::Instance();
    v20 = -1;
    v18 = sub_1017C3A0(
            v4[0],
            v5,
            v6,
            v7,
            v8,
            v9,
            v10,
            v11,
            LODWORD(v12),
            LODWORD(v13),
            LODWORD(v14),
            LODWORD(v15),
            LODWORD(v16),
            v17);
    *((float *)this + 522) = v18;
  }
  if ( *((_BYTE *)this + 2056) )
  {
    v17 = 0;
    v16 = 0.0;
    v15 = 1.0;
    v14 = 1.0;
    v13 = 0.0;
    v12 = 0.0;
    v11 = 0;
    v19 = (int *)v4;
    std::string::string(v4, "Editor_Script.dds");
    Texture::Load(v4[0], v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17);
  }
}
