/*
 * func-name: sub_100080A0
 * func-address: 0x100080a0
 * callers: 0x10008c60
 * callees: 0x10001ca0, 0x10002b60, 0x10002c50, 0x10005d50, 0x100f2ca0, 0x101786e0, 0x101a24ac, 0x101a2500, 0x101a251c, 0x101a2534, 0x101a253a
 */

char __thiscall sub_100080A0(ILoad *this, FILE *Stream, struct StaticModel **a3)
{
  float v3; // esi
  char v4; // al
  int j; // esi
  int k; // esi
  int m; // esi
  int v8; // eax
  ILoad *v9; // edx
  struct StaticModel *v10; // eax
  Model *v11; // eax
  struct ModelFrame **v12; // esi
  char result; // al
  char v14; // [esp+15h] [ebp-16Bh] BYREF
  char v15; // [esp+16h] [ebp-16Ah] BYREF
  char v16; // [esp+17h] [ebp-169h] BYREF
  void *v17; // [esp+18h] [ebp-168h] BYREF
  int v18; // [esp+1Ch] [ebp-164h] BYREF
  float v19; // [esp+20h] [ebp-160h]
  ILoad *v20; // [esp+24h] [ebp-15Ch]
  int v21; // [esp+28h] [ebp-158h] BYREF
  int Buffer; // [esp+2Ch] [ebp-154h] BYREF
  char v23; // [esp+33h] [ebp-14Dh] BYREF
  int i; // [esp+34h] [ebp-14Ch]
  int v25[7]; // [esp+38h] [ebp-148h] BYREF
  int v26; // [esp+54h] [ebp-12Ch] BYREF
  int v27[11]; // [esp+58h] [ebp-128h] BYREF
  int v28; // [esp+84h] [ebp-FCh] BYREF
  int v29[7]; // [esp+88h] [ebp-F8h] BYREF
  _BYTE v30[28]; // [esp+A4h] [ebp-DCh] BYREF
  _BYTE v31[36]; // [esp+C0h] [ebp-C0h] BYREF
  float v32[16]; // [esp+E4h] [ebp-9Ch] BYREF
  _BYTE v33[16]; // [esp+124h] [ebp-5Ch] BYREF
  float v34[16]; // [esp+134h] [ebp-4Ch] BYREF
  int v35; // [esp+17Ch] [ebp-4h]

  v20 = this;
  sub_10001CA0((int)v27, Stream);
  std::string::~string(v27);
  Buffer = 0;
  fread(&Buffer, 4u, 1u, Stream);
  memset(v32, 0, sizeof(v32));
  sub_101786E0(1.0);
  v32[15] = 1.0;
  fread(v32, 0x40u, 1u, Stream);
  fread(v33, 0x10u, 1u, Stream);
  sub_10001CA0((int)v27, Stream);
  std::string::~string(v27);
  memset(&v27[8], 0, 12);
  v35 = 1;
  memset(&v27[1], 0, 12);
  v21 = 0;
  fread(&v21, 4u, 1u, Stream);
  v3 = COERCE_FLOAT(operator new(0x400u));
  v17 = (void *)LODWORD(v3);
  memset((void *)LODWORD(v3), 0, 0x400u);
  for ( i = 0; i < v21; ++i )
  {
    std::string::string(v29);
    LOBYTE(v35) = 2;
    std::string::string(v30);
    LOBYTE(v35) = 3;
    std::string::string(v31);
    v31[32] = 1;
    v31[33] = 0;
    LOBYTE(v35) = 4;
    v19 = v3;
    sub_10002C50(&v28, &v17, Stream, &v26, (int)v29);
    v4 = std::operator==<char>(v29, "LODRatio");
    v3 = *(float *)&v17;
    if ( v4 )
      *((float *)*a3 + 53) = *(float *)v17;
    if ( v28 == 13 )
    {
      operator delete((void *)LODWORD(v3));
      v3 = v19;
      v17 = (void *)LODWORD(v19);
    }
    LOBYTE(v35) = 6;
    std::string::~string(v31);
    LOBYTE(v35) = 5;
    std::string::~string(v30);
    LOBYTE(v35) = 1;
    std::string::~string(v29);
  }
  operator delete[]((void *)LODWORD(v3));
  memset(v34, 0, sizeof(v34));
  sub_101786E0(1.0);
  v34[15] = 1.0;
  fread(v34, 0x40u, 1u, Stream);
  v14 = 0;
  fread(&v14, 1u, 1u, Stream);
  if ( v14 )
  {
    sub_10001CA0((int)v25, Stream);
    std::string::~string(v25);
    sub_10001CA0((int)v25, Stream);
    std::string::~string(v25);
    sub_10001CA0((int)v25, Stream);
    std::string::~string(v25);
    fread(&v14, 1u, 1u, Stream);
    v17 = 0;
    fread(&v17, 4u, 1u, Stream);
    for ( j = 0; j < (int)v17; ++j )
    {
      sub_10001CA0((int)v25, Stream);
      std::string::~string(v25);
      sub_10001CA0((int)v25, Stream);
      std::string::~string(v25);
    }
  }
  v18 = 0;
  fread(&v18, 4u, 1u, Stream);
  fread(&v23, 1u, 1u, Stream);
  for ( k = 0; k < v18; ++k )
  {
    sub_10001CA0((int)v25, Stream);
    std::string::~string(v25);
  }
  fread(&v18, 4u, 1u, Stream);
  for ( m = 0; m < v18; ++m )
  {
    sub_10001CA0((int)v25, Stream);
    std::string::~string(v25);
  }
  v8 = Buffer;
  v15 = 0;
  if ( Buffer || (fread(&v15, 1u, 1u, Stream), (v8 = Buffer) != 0) )
  {
    if ( v8 == 1 )
      sub_10002B60(v20, Stream, 0);
    return 0;
  }
  if ( !v15 || !sub_10005D50(v20, *a3, Stream, (struct ModelFrame **)*a3 + 77, 1) )
    return 0;
  v9 = v20;
  qmemcpy((void *)(*((_DWORD *)*a3 + 77) + 100), v32, 0x40u);
  v10 = *a3;
  v19 = *(float *)(*((_DWORD *)*a3 + 77) + 368);
  *((float *)v10 + 13) = v19;
  if ( *((int *)v9 + 14) >= 3 )
  {
    v16 = 0;
    fread(&v16, 1u, 1u, Stream);
    if ( v16 )
    {
      fread((char *)*a3 + 148, 0x40u, 1u, Stream);
      v11 = (Model *)operator new(0x1C8u);
      v26 = (int)v11;
      LOBYTE(v35) = 7;
      if ( v11 )
        v12 = (struct ModelFrame **)Model::Model(v11);
      else
        v12 = 0;
      LOBYTE(v35) = 1;
      if ( sub_10005D50(v20, (struct StaticModel *)v12, Stream, v12 + 77, 0) )
      {
        *((_DWORD *)*a3 + 36) = v12;
        (*((void (__thiscall **)(struct ModelFrame **))*v12 + 2))(v12);
        result = 1;
        v19 = *((float *)v12[77] + 92);
        *((float *)v12 + 13) = v19;
        return result;
      }
      (*((void (__thiscall **)(struct ModelFrame **))*v12 + 2))(v12);
      (*((void (__thiscall **)(struct ModelFrame **, int))*v12 + 3))(v12, 1);
    }
  }
  return 1;
}
