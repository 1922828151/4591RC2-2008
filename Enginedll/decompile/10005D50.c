/*
 * func-name: sub_10005D50
 * func-address: 0x10005d50
 * callers: 0x10005d50, 0x10006780, 0x100080a0
 * callees: 0x10001ca0, 0x10002f20, 0x10005d50, 0x10011ca0, 0x100158b0, 0x1009dd90, 0x1009e990, 0x1009ec20, 0x1011ed60, 0x1011ef20, 0x10171580, 0x10171860, 0x101786e0, 0x101a2500, 0x101a251c, 0x101a2534
 */

char __thiscall sub_10005D50(ILoad *this, struct StaticModel *a2, FILE *Stream, struct ModelFrame **a4, int a5)
{
  unsigned __int8 *v5; // eax
  struct ModelFrame *v6; // eax
  int v7; // eax
  char *v8; // ecx
  void (__cdecl *v9)(void *, size_t, size_t, FILE *); // esi
  int v10; // eax
  int v11; // eax
  char *v12; // ecx
  ILoad *v13; // edi
  char *v14; // edi
  int last_of; // eax
  int v16; // eax
  ILoad *v17; // edi
  unsigned __int8 *v18; // eax
  int v19; // eax
  int v20; // ecx
  char MeshBinary; // al
  ModelFrame *v22; // ebp
  ModelFrame *v24; // ecx
  struct Mesh *Mesh; // eax
  ModelFrame *v26; // ecx
  struct Mesh *v27; // eax
  struct Mesh *v28; // eax
  int v29; // edx
  int v30; // ecx
  char v31; // [esp-20h] [ebp-FCh] BYREF
  int v32; // [esp-1Ch] [ebp-F8h]
  size_t v33; // [esp-18h] [ebp-F4h]
  size_t v34; // [esp-14h] [ebp-F0h]
  FILE *v35; // [esp-10h] [ebp-ECh]
  char *v36; // [esp-Ch] [ebp-E8h]
  size_t v37; // [esp-8h] [ebp-E4h]
  size_t v38; // [esp-4h] [ebp-E0h]
  FILE *v39; // [esp+0h] [ebp-DCh]
  char v40; // [esp+15h] [ebp-C7h] BYREF
  char v41; // [esp+16h] [ebp-C6h] BYREF
  char v42; // [esp+17h] [ebp-C5h] BYREF
  int v43; // [esp+18h] [ebp-C4h] BYREF
  ILoad *v44; // [esp+1Ch] [ebp-C0h]
  unsigned __int8 *v45; // [esp+20h] [ebp-BCh] BYREF
  _BYTE v46[4]; // [esp+24h] [ebp-B8h] BYREF
  _BYTE v47[28]; // [esp+28h] [ebp-B4h] BYREF
  char *v48; // [esp+44h] [ebp-98h]
  int v49[7]; // [esp+48h] [ebp-94h] BYREF
  float Buffer[16]; // [esp+64h] [ebp-78h] BYREF
  _BYTE v51[28]; // [esp+A4h] [ebp-38h] BYREF
  char v52; // [esp+C0h] [ebp-1Ch] BYREF
  int v53; // [esp+D8h] [ebp-4h]

  v44 = this;
  v5 = (unsigned __int8 *)operator new(0x1C8u);
  v45 = v5;
  v53 = 0;
  if ( v5 )
    v6 = ModelFrame::ModelFrame((ModelFrame *)v5, a2);
  else
    v6 = 0;
  v39 = Stream;
  v38 = (size_t)v49;
  v53 = -1;
  *a4 = v6;
  v7 = sub_10001CA0(v38, v39);
  v8 = (char *)*a4;
  v53 = 1;
  std::string::operator=(v8 + 44, v7);
  v53 = -1;
  std::string::~string(v49);
  memset(Buffer, 0, sizeof(Buffer));
  sub_101786E0(1.0);
  v9 = (void (__cdecl *)(void *, size_t, size_t, FILE *))fread;
  Buffer[15] = 1.0;
  fread(Buffer, 0x40u, 1u, Stream);
  if ( a5 )
  {
    qmemcpy((char *)*a4 + 100, Buffer, 0x40u);
    v9 = (void (__cdecl *)(void *, size_t, size_t, FILE *))fread;
  }
  v43 = 0;
  v9(&v43, 4u, 1u, Stream);
  v10 = (int)*a4;
  v35 = Stream;
  v34 = 1;
  v33 = 1;
  *(_DWORD *)(v10 + 20) = v43;
  v42 = 0;
  v9(&v42, v33, v34, v35);
  if ( v42 )
  {
    v11 = sub_10001CA0((int)v49, Stream);
    v12 = (char *)*a4;
    v53 = 2;
    std::string::operator=(v12 + 72, v11);
    v53 = -1;
    std::string::~string(v49);
    v9((char *)*a4 + 368, 4u, 1u, Stream);
    if ( 0.0 == *((float *)*a4 + 92) )
      *((float *)*a4 + 92) = 1.0;
    v13 = v44;
    if ( *((int *)v44 + 14) > 8 )
    {
      v9((char *)*a4 + 396, 0xCu, 1u, Stream);
      v9((char *)*a4 + 408, 0xCu, 1u, Stream);
    }
    v14 = (char *)v13 + 60;
    last_of = std::string::find_last_of(v14, "\\", std::string::npos);
    v16 = std::string::substr(v14, v51, 0, last_of + 1);
    v39 = (FILE *)((char *)*a4 + 72);
    v53 = 3;
    std::operator+<char>(v47, v16, v39);
    LOBYTE(v53) = 5;
    std::string::~string(v51);
    v17 = v44;
    if ( *((_BYTE *)v44 + 44) )
    {
      if ( AsyncLoader::GetPacket((char *)a2 + 320) )
        sub_100158B0(v47);
      std::string::operator=((char *)*a4 + 72, v47);
      v18 = (unsigned __int8 *)operator new(0x2Cu);
      v45 = v18;
      LOBYTE(v53) = 6;
      if ( v18 )
        v19 = sub_10011CA0(v18);
      else
        v19 = 0;
      v20 = (int)*a4;
      v39 = Stream;
      v38 = 1;
      v37 = 16;
      v36 = &v52;
      *(_DWORD *)(v20 + 452) = v19;
      v9(v36, v37, v38, v39);
      v9(v49, 0x10u, 1u, Stream);
      v40 = 0;
      v9(&v40, 1u, 1u, Stream);
    }
    else
    {
      if ( (unsigned __int8)AsyncLoader::GetMemCache(v47, &v45, v46) )
      {
        MeshBinary = ILoad::ReadMeshBinary_Mem(v17, &v45, a4, v43);
      }
      else
      {
        v39 = (FILE *)v43;
        v38 = (size_t)a4;
        v48 = &v31;
        std::string::string(&v31, v47);
        MeshBinary = ILoad::ReadMeshBinary(v31, v32, v33, v34, v35, v36, v37, v38, v39);
      }
      if ( !MeshBinary )
      {
        v22 = *a4;
        if ( *a4 )
        {
          ModelFrame::~ModelFrame(v22);
          operator delete(v22);
        }
        v53 = -1;
        std::string::~string(v47);
        return 0;
      }
      v24 = *a4;
      v39 = Stream;
      v38 = 1;
      v37 = 16;
      Mesh = ModelFrame::GetMesh(v24, 0);
      v9((char *)Mesh + 88, v37, v38, v39);
      v26 = *a4;
      v39 = Stream;
      v38 = 1;
      v37 = 16;
      v27 = ModelFrame::GetMesh(v26, 0);
      v9((char *)v27 + 104, v37, v38, v39);
      v40 = 0;
      v9(&v40, 1u, 1u, Stream);
      if ( v40 )
      {
        v28 = ModelFrame::GetMesh(*a4, 0);
        sub_10002F20(Stream, (char *)v28 + 120);
      }
    }
    v53 = -1;
    std::string::~string(v47);
  }
  v41 = 0;
  v9(&v41, 1u, 1u, Stream);
  if ( v41 )
  {
    if ( !(unsigned __int8)sub_10005D50(a2, Stream, (struct ModelFrame **)*a4 + 90, a5 + 1) )
      return 0;
    v29 = *((_DWORD *)*a4 + 90);
    if ( 1.0 != *(float *)(v29 + 368) )
      *((float *)*a4 + 92) = *(float *)(v29 + 368);
  }
  v9(&v41, 1u, 1u, Stream);
  if ( v41 )
  {
    if ( (unsigned __int8)sub_10005D50(a2, Stream, (struct ModelFrame **)*a4 + 89, a5) )
    {
      v30 = *((_DWORD *)*a4 + 89);
      if ( 1.0 != *(float *)(v30 + 368) )
        *((float *)*a4 + 92) = *(float *)(v30 + 368);
      return 1;
    }
    return 0;
  }
  return 1;
}
