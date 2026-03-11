/*
 * func-name: ?_newSurfaceNode@Terrain@@QAEXPAVTerrainNode@@@Z
 * func-address: 0x10166fb0
 * callers: 0x10167810
 * callees: 0x1003b320, 0x1007bf30, 0x1007da70, 0x100ee930, 0x100ee980, 0x100f2ca0, 0x10165f10, 0x1016a3c0, 0x1017a0b0, 0x101a2534, 0x101a26c0
 */

void __thiscall Terrain::_newSurfaceNode(struct World **this, struct TerrainNode *a2)
{
  SurfaceNode *v3; // eax
  SurfaceNode *v4; // edi
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  Model *v12; // eax
  Model *v13; // eax
  _DWORD *v14; // ecx
  double v15; // st7
  struct World *v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // ebp
  double v19; // st7
  int v20; // eax
  double v21; // st7
  int v22; // eax
  double v23; // st7
  int v24; // edx
  int v25; // ecx
  struct World *v26; // eax
  unsigned int v27; // edi
  int v28; // [esp-10h] [ebp-104h]
  int v29; // [esp-8h] [ebp-FCh]
  _DWORD v30[4]; // [esp+10h] [ebp-E4h] BYREF
  float v31; // [esp+20h] [ebp-D4h]
  float v32; // [esp+24h] [ebp-D0h]
  float v33; // [esp+28h] [ebp-CCh]
  float v34; // [esp+2Ch] [ebp-C8h]
  float v35; // [esp+30h] [ebp-C4h]
  float v36; // [esp+34h] [ebp-C0h]
  _DWORD v37[4]; // [esp+38h] [ebp-BCh] BYREF
  struct World *v38; // [esp+48h] [ebp-ACh]
  int v39; // [esp+4Ch] [ebp-A8h]
  char v40; // [esp+50h] [ebp-A4h]
  char v41; // [esp+51h] [ebp-A3h]
  float v42; // [esp+54h] [ebp-A0h]
  float v43; // [esp+58h] [ebp-9Ch]
  int v44; // [esp+5Ch] [ebp-98h] BYREF
  int v45; // [esp+60h] [ebp-94h]
  int v46; // [esp+64h] [ebp-90h]
  _BYTE v47[28]; // [esp+78h] [ebp-7Ch] BYREF
  _BYTE v48[28]; // [esp+94h] [ebp-60h] BYREF
  _BYTE v49[28]; // [esp+B0h] [ebp-44h] BYREF
  _BYTE v50[28]; // [esp+CCh] [ebp-28h] BYREF
  int v51; // [esp+F0h] [ebp-4h]

  v3 = (SurfaceNode *)operator new(0x4B8u);
  v4 = 0;
  v51 = 0;
  if ( v3 )
    v4 = SurfaceNode::SurfaceNode(v3, this[178]);
  v29 = *((_DWORD *)a2 + 293);
  v51 = -1;
  v5 = sub_1003B320((int)v49, v29);
  v28 = *((_DWORD *)a2 + 294);
  v51 = 1;
  v6 = sub_1003B320((int)v50, v28);
  LOBYTE(v51) = 2;
  v7 = std::operator+<char>(v47, "Surface", v6);
  LOBYTE(v51) = 3;
  v8 = std::operator+<char>(v48, v7, "_");
  LOBYTE(v51) = 4;
  v9 = std::operator+<char>(&v44, v8, v5);
  LOBYTE(v51) = 5;
  std::string::operator=((char *)v4 + 444, v9);
  LOBYTE(v51) = 4;
  std::string::~string(&v44);
  LOBYTE(v51) = 3;
  std::string::~string(v48);
  LOBYTE(v51) = 2;
  std::string::~string(v47);
  LOBYTE(v51) = 1;
  std::string::~string(v50);
  v51 = -1;
  std::string::~string(v49);
  *((_DWORD *)v4 + 214) = *((_DWORD *)a2 + 214);
  *((_DWORD *)v4 + 215) = *((_DWORD *)a2 + 215);
  v10 = *((_DWORD *)a2 + 216);
  *((float *)v4 + 68) = 5000.0;
  *((_DWORD *)v4 + 216) = v10;
  *((_BYTE *)v4 + 440) = 1;
  *((_BYTE *)v4 + 724) = 1;
  v11 = *((_DWORD *)a2 + 293);
  *((_DWORD *)v4 + 301) = *((_DWORD *)a2 + 294);
  *((_DWORD *)v4 + 300) = v11;
  std::string::operator=((char *)v4 + 1172, this + 111);
  v12 = (Model *)operator new(0x1C8u);
  v51 = 6;
  if ( v12 )
    v13 = Model::Model(v12);
  else
    v13 = 0;
  *((_DWORD *)v4 + 179) = v13;
  *((_BYTE *)v13 + 312) = 1;
  v14 = (_DWORD *)*((_DWORD *)a2 + 179);
  v51 = -1;
  StaticModel::GetWorldBBox(v14, v30);
  v15 = v31 - *((float *)a2 + 214);
  v51 = 7;
  v31 = v15;
  v32 = v32 - *((float *)a2 + 215);
  v33 = v33 - *((float *)a2 + 216);
  v34 = v34 - *((float *)a2 + 214);
  v35 = v35 - *((float *)a2 + 215);
  v36 = v36 - *((float *)a2 + 216);
  StaticModel::SetUserBBox(*((StaticModel **)v4 + 179), (const struct BBox *)v30);
  std::string::operator=(*((_DWORD *)v4 + 179) + 320, (char *)v4 + 444);
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)v4 + 179) + 8))(*((_DWORD *)v4 + 179));
  v42 = 100.0;
  v43 = 100.0;
  v40 = 1;
  v38 = 0;
  v37[1] = 0;
  LOWORD(v37[0]) = 0;
  v41 = 0;
  v37[2] = 0;
  v39 = 0;
  v37[3] = GetTickCount();
  v16 = this[178];
  LOBYTE(v51) = 8;
  v38 = v16;
  sub_1007DA70(v37, (int)v4);
  v17 = operator new(0x20u);
  v18 = v17;
  LOBYTE(v51) = 9;
  if ( v17 )
  {
    v17[1] = sub_1016A3C0(v17);
    v18[2] = 0;
    v18[7] = 0;
  }
  else
  {
    v18 = 0;
  }
  v19 = *((float *)a2 + 216) + v33;
  v44 = (int)(*((float *)a2 + 214) + v31);
  v20 = (int)v19;
  v21 = *((float *)a2 + 214) + v34;
  v45 = v20;
  v22 = (int)v21;
  v23 = *((float *)a2 + 216) + v36;
  v46 = v22;
  v24 = v45;
  v18[3] = v44;
  v25 = v46;
  v18[4] = v24;
  v18[5] = v25;
  v18[7] = v4;
  v18[6] = (int)v23;
  v26 = this[347];
  v27 = *((_DWORD *)a2 + 293) + *((_DWORD *)a2 + 294) * (_DWORD)this[357];
  if ( v26 && v27 < (this[348] - v26) >> 2 )
    *((_DWORD *)v26 + v27) = v18;
  LOBYTE(v51) = 7;
  nullsub_1();
  v51 = -1;
  sub_1017A0B0(v30);
}
