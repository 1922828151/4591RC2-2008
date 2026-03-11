/*
 * func-name: ?DeserializationComplete@TerrainNode@@UAEXXZ
 * func-address: 0x10167c60
 * callers: none
 * callees: 0x1004e7f0, 0x10057850, 0x10057890, 0x1007ec70, 0x100977a0, 0x1009dbf0, 0x100e2550, 0x1015ed60, 0x101658e0, 0x10167810
 */

void __thiscall TerrainNode::DeserializationComplete(TerrainNode *this)
{
  TerrainNode *v1; // ebx
  ModelFrame *v2; // ecx
  Terrain *Terrain; // eax
  int v4; // edi
  int v5; // eax
  int last_of; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  const CHAR *v11; // eax
  HANDLE FileA; // eax
  void *v13; // ebp
  _DWORD *v14; // ebx
  int v15; // esi
  _DWORD *v16; // ebx
  int v17; // esi
  DWORD NumberOfBytesRead; // [esp+4h] [ebp-B4h] BYREF
  int v19; // [esp+8h] [ebp-B0h]
  int Buffer; // [esp+Ch] [ebp-ACh] BYREF
  int v21; // [esp+10h] [ebp-A8h] BYREF
  TerrainNode *v22; // [esp+14h] [ebp-A4h]
  _BYTE v23[8]; // [esp+18h] [ebp-A0h] BYREF
  _BYTE v24[28]; // [esp+20h] [ebp-98h] BYREF
  _BYTE v25[4]; // [esp+3Ch] [ebp-7Ch] BYREF
  LPCSTR lpFileName[6]; // [esp+40h] [ebp-78h] BYREF
  _BYTE v27[28]; // [esp+58h] [ebp-60h] BYREF
  _BYTE v28[28]; // [esp+74h] [ebp-44h] BYREF
  _BYTE v29[28]; // [esp+90h] [ebp-28h] BYREF
  int v30; // [esp+B4h] [ebp-4h]

  v1 = this;
  v2 = *(ModelFrame **)(*((_DWORD *)this + 179) + 308);
  v22 = v1;
  ModelFrame::SetDisableLODs(v2, 1);
  Terrain = Terrain::FindTerrain(*((_DWORD *)v1 + 314), *((_DWORD *)v1 + 315));
  if ( Terrain )
  {
    Terrain::RegistNode(Terrain, v1, *((_DWORD *)v1 + 293), *((_DWORD *)v1 + 294), 0);
    if ( *((_BYTE *)Editor::Instance() + 2056) )
    {
      v4 = 16;
      if ( *(_DWORD *)(*((_DWORD *)v1 + 178) + 3212) < 0x10u )
        v5 = *((_DWORD *)v1 + 178) + 3192;
      else
        v5 = *(_DWORD *)(*((_DWORD *)v1 + 178) + 3192);
      std::string::string(v27, v5);
      v30 = 0;
      last_of = std::string::find_last_of(v27, ".", std::string::npos, 1);
      std::string::substr(v27, v24, 0, last_of);
      LOBYTE(v30) = 1;
      if ( std::string::find_last_of(v24, "\\", std::string::npos, 1) != -1 )
      {
        v7 = std::string::find_last_of(v24, "\\", std::string::npos, 1);
        v8 = std::string::substr(v24, v28, 0, v7);
        LOBYTE(v30) = 2;
        std::string::operator=(v24, v8);
        LOBYTE(v30) = 1;
        std::string::~string(v28);
      }
      v9 = std::operator+<char>(v29, v24, "\\");
      LOBYTE(v30) = 3;
      v10 = std::operator+<char>(v28, v9, (char *)v1 + 444);
      LOBYTE(v30) = 4;
      std::operator+<char>(v25, v10, ".hole");
      LOBYTE(v30) = 6;
      std::string::~string(v28);
      LOBYTE(v30) = 7;
      std::string::~string(v29);
      v11 = lpFileName[0];
      if ( lpFileName[5] < (LPCSTR)0x10 )
        v11 = (const CHAR *)lpFileName;
      FileA = CreateFileA(v11, 0x80000000, 1u, 0, 3u, 0, 0);
      v13 = FileA;
      if ( FileA != (HANDLE)-1 )
      {
        if ( !ReadFile(FileA, &Buffer, 4u, &NumberOfBytesRead, 0) || NumberOfBytesRead != 4 )
          CloseHandle(v13);
        v19 = 0;
        if ( Buffer > 0 )
        {
          v14 = (_DWORD *)((char *)v1 + 1232);
          do
          {
            if ( !ReadFile(v13, v23, 6u, &NumberOfBytesRead, 0) || NumberOfBytesRead != 6 )
              CloseHandle(v13);
            v15 = v14[1];
            v4 = (int)sub_10057850(v15, *(_DWORD *)(v15 + 4), (int)v23);
            sub_10057890(v14, 1u);
            *(_DWORD *)(v15 + 4) = v4;
            **(_DWORD **)(v4 + 4) = v4;
            ++v19;
          }
          while ( v19 < Buffer );
          v1 = v22;
        }
        if ( !ReadFile(v13, &v21, 4u, &NumberOfBytesRead, 0) || NumberOfBytesRead != 4 )
          CloseHandle(v13);
        v19 = 0;
        if ( v21 > 0 )
        {
          v16 = (_DWORD *)((char *)v1 + 1244);
          do
          {
            if ( !ReadFile(v13, v23, 6u, &NumberOfBytesRead, 0) || NumberOfBytesRead != 6 )
              CloseHandle(v13);
            v17 = v16[1];
            v4 = (int)sub_10057850(v17, *(_DWORD *)(v17 + 4), (int)v23);
            sub_10057890(v16, 1u);
            *(_DWORD *)(v17 + 4) = v4;
            **(_DWORD **)(v4 + 4) = v4;
            ++v19;
          }
          while ( v19 < v21 );
          v1 = v22;
        }
        CloseHandle(v13);
      }
      if ( !TerrainNode::GenerateMesh(v1, (struct Mesh *)v4, 0.0, COERCE_FLOAT(1)) )
        LogPrintf("TerrainNode: GenerateMesh() failed.");
      LOBYTE(v30) = 1;
      std::string::~string(v25);
      LOBYTE(v30) = 0;
      std::string::~string(v24);
      v30 = -1;
      std::string::~string(v27);
    }
    Actor::DeserializationComplete(v1);
  }
  else
  {
    SeriousWarning("TerrainNode can't find parent.");
  }
}
