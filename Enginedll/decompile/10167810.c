/*
 * func-name: ?RegistNode@Terrain@@QAEXPAVTerrainNode@@HH_N@Z
 * func-address: 0x10167810
 * callers: 0x10167c60, 0x10168040, 0x10169020
 * callees: 0x1003b320, 0x1015eca0, 0x1015f4a0, 0x10160740, 0x10162c30, 0x10166fb0, 0x1016b720, 0x101a26c0
 */

void __thiscall Terrain::RegistNode(Terrain *this, struct TerrainNode *a2, int a3, int a4, bool a5)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v6; // ebx
  int v7; // ebp
  struct TerrainNode *v8; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  double v14; // st7
  double v15; // st6
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  int i; // edi
  struct TerrainNode *Node; // eax
  int v23; // [esp+0h] [ebp-D0h]
  float v24; // [esp+0h] [ebp-D0h]
  float v25; // [esp+0h] [ebp-D0h]
  float v26; // [esp+4h] [ebp-CCh]
  float v27; // [esp+4h] [ebp-CCh]
  float v28; // [esp+8h] [ebp-C8h]
  float v29; // [esp+Ch] [ebp-C4h]
  float v30; // [esp+Ch] [ebp-C4h]
  _BYTE v31[28]; // [esp+1Ch] [ebp-B4h] BYREF
  _BYTE v32[28]; // [esp+38h] [ebp-98h] BYREF
  _BYTE v33[28]; // [esp+54h] [ebp-7Ch] BYREF
  _BYTE v34[28]; // [esp+70h] [ebp-60h] BYREF
  _BYTE v35[28]; // [esp+8Ch] [ebp-44h] BYREF
  _BYTE v36[28]; // [esp+A8h] [ebp-28h] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *v37; // [esp+C4h] [ebp-Ch]
  void *v38; // [esp+C8h] [ebp-8h]
  int v39; // [esp+CCh] [ebp-4h]

  v39 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v38 = &loc_101B64BB;
  v37 = ExceptionList;
  v6 = a3;
  v7 = a4;
  v8 = a2;
  if ( a5 )
  {
    v23 = sub_1003B320((int)v34, a3);
    v39 = 0;
    v10 = sub_1003B320((int)v32, v7);
    LOBYTE(v39) = 1;
    v11 = std::operator+<char>(v35, "_", v10);
    LOBYTE(v39) = 2;
    v12 = std::operator+<char>(v33, v11, "_");
    LOBYTE(v39) = 3;
    std::operator+<char>(v31, v12, v23);
    LOBYTE(v39) = 5;
    std::string::~string(v33);
    LOBYTE(v39) = 6;
    std::string::~string(v35);
    LOBYTE(v39) = 7;
    std::string::~string(v32);
    LOBYTE(v39) = 8;
    std::string::~string(v34);
    v13 = std::operator+<char>(v36, (char *)this + 444, v31);
    LOBYTE(v39) = 9;
    std::string::operator=((char *)v8 + 444, v13);
    LOBYTE(v39) = 8;
    std::string::~string(v36);
    v14 = *((float *)this + 361) * 32.0;
    v26 = (double)((*((_DWORD *)this + 340) - 1) / 2) * *((float *)this + 361) - v14;
    v15 = (double)((*((_DWORD *)this + 341) - 1) / 2) * *((float *)this + 361);
    v39 = -1;
    v28 = v15 - v14;
    v29 = (double)(v6 << 6) * *((float *)this + 361) - v26;
    v24 = (double)(v7 << 6) * *((float *)this + 361) - v28;
    v30 = *((float *)this + 214) + v29;
    v27 = *((float *)this + 215) + 0.0;
    v25 = *((float *)this + 216) + v24;
    *((float *)v8 + 214) = v30;
    *((float *)v8 + 215) = v27;
    *((float *)v8 + 216) = v25;
    *((float *)v8 + 68) = 5000.0;
    *((_DWORD *)v8 + 293) = v6;
    *((_DWORD *)v8 + 294) = v7;
    *((_BYTE *)v8 + 440) = 1;
    std::string::~string(v31);
  }
  *((_DWORD *)v8 + 316) = this;
  sub_1015F4A0((char *)v8 + 1184, (int)this + 1352, v6 << 6, v7 << 6, 65, 65);
  sub_1016B720((int)this + 1192, (int)&a2);
  Terrain::GenerateNodeMsg(this);
  v16 = *((_DWORD *)this + 299);
  if ( v16 )
    v17 = (*((_DWORD *)this + 300) - v16) >> 2;
  else
    v17 = 0;
  if ( v17 == *((_DWORD *)this + 325) * *((_DWORD *)this + 324) )
  {
    v18 = *((_DWORD *)this + 347);
    if ( !v18 || !((*((_DWORD *)this + 348) - v18) >> 2) )
    {
      sub_10162C30(
        (_DWORD *)this + 346,
        *((_DWORD *)this + 324),
        *((_DWORD *)this + 325),
        (int)((double)(int)(*((_DWORD *)this + 324) << 6) * *((float *)this + 361)),
        (int)((double)(int)(*((_DWORD *)this + 325) << 6) * *((float *)this + 361)));
      v19 = 0;
      if ( *((int *)this + 325) > 0 )
      {
        v20 = *((_DWORD *)this + 324);
        do
        {
          for ( i = 0; i < v20; ++i )
          {
            Node = Terrain::FindNode(this, i, v19);
            Terrain::_newSurfaceNode((struct World **)this, Node);
            v20 = *((_DWORD *)this + 324);
          }
          ++v19;
        }
        while ( v19 < *((_DWORD *)this + 325) );
      }
    }
  }
}
