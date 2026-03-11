/*
 * func-name: ?GenerateLODs@LODManager@@QAE_NPAVStaticModel@@PAUModelFrame@@AAV?$vector@PAVMesh@@V?$allocator@PAVMesh@@@std@@@std@@@Z
 * func-address: 0x100e1e90
 * callers: 0x1009ed40
 * callees: 0x10019470, 0x1002c930, 0x1002eb50, 0x1003b320, 0x10076ef0, 0x10097220, 0x1009dd90, 0x100ee5c0, 0x100efd60, 0x100f2ca0, 0x101189f0, 0x1017a2d0, 0x1017a310, 0x101a2534
 */

char __stdcall LODManager::GenerateLODs(int a1, int a2, _DWORD *a3)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _DWORD *v6; // esi
  int v7; // eax
  int j; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  Model *v13; // eax
  Model *v14; // edi
  const char *v15; // eax
  unsigned int i; // ebx
  int v17; // ecx
  ModelFrame *NodeHandle; // eax
  ModelFrame *v19; // edi
  int v20; // eax
  struct RenderDevice *v21; // esi
  int v22; // eax
  int *v23; // ebx
  int v24; // eax
  struct Mesh *Mesh; // edi
  void (__thiscall **v26)(struct Mesh *, _DWORD, int); // esi
  int v27; // eax
  _DWORD *v28; // eax
  char v29; // [esp-20h] [ebp-128h] BYREF
  int v30; // [esp-1Ch] [ebp-124h]
  int v31; // [esp-18h] [ebp-120h]
  int v32; // [esp-14h] [ebp-11Ch]
  int v33; // [esp-10h] [ebp-118h]
  int v34; // [esp-Ch] [ebp-114h]
  int v35; // [esp-8h] [ebp-110h]
  struct ModelFrame *v36; // [esp-4h] [ebp-10Ch]
  int v37; // [esp+10h] [ebp-F8h] BYREF
  int v38; // [esp+14h] [ebp-F4h]
  char *v39; // [esp+18h] [ebp-F0h]
  int v40[7]; // [esp+1Ch] [ebp-ECh] BYREF
  int v41[7]; // [esp+38h] [ebp-D0h] BYREF
  _BYTE v42[28]; // [esp+54h] [ebp-B4h] BYREF
  int v43[7]; // [esp+70h] [ebp-98h] BYREF
  _BYTE v44[28]; // [esp+8Ch] [ebp-7Ch] BYREF
  _BYTE v45[28]; // [esp+A8h] [ebp-60h] BYREF
  _BYTE v46[28]; // [esp+C4h] [ebp-44h] BYREF
  _BYTE v47[28]; // [esp+E0h] [ebp-28h] BYREF
  int v48; // [esp+104h] [ebp-4h]

  v3 = a3[1];
  if ( v3 )
  {
    if ( (a3[2] - v3) >> 2 )
    {
      v4 = (_DWORD *)a3[1];
      if ( *v4 )
      {
        if ( !v4 || !((a3[2] - (int)v4) >> 2) )
          invalid_parameter_noinfo();
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)a3[1] + 4))(*(_DWORD *)a3[1]) && a2 && a1 )
        {
          if ( *(_DWORD *)(*(_DWORD *)std::vector<Model *>::operator[](a3, 0) + 12) )
            return 1;
          v6 = (_DWORD *)(a1 + 120);
          v38 = a1 + 120;
          if ( std::vector<Model *>::size((_DWORD *)(a1 + 120)) )
          {
LABEL_24:
            for ( i = 0; ; ++i )
            {
              v17 = v6[1];
              v37 = i;
              if ( !v17 || i >= (v6[2] - v17) >> 2 )
                break;
              v36 = 0;
              v39 = &v29;
              std::string::string(&v29, a2 + 44);
              std::vector<Model *>::operator[](v6, i);
              NodeHandle = (ModelFrame *)StaticModel::GetNodeHandle(v29, v30, v31, v32, v33, v34, v35, v36);
              v19 = NodeHandle;
              if ( NodeHandle )
              {
                if ( ModelFrame::GetMesh(NodeHandle, 0) )
                {
                  v36 = 0;
                  v20 = std::vector<Model *>::size(a3);
                  sub_1002C930(a3, v20 + 1, (int)v36);
                  v21 = RenderDevice::Instance();
                  v22 = std::vector<Model *>::size(a3);
                  v23 = (int *)std::vector<Model *>::operator[](a3, v22 - 1);
                  v24 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v21 + 8))(v21);
                  v36 = 0;
                  *v23 = v24;
                  Mesh = ModelFrame::GetMesh(v19, (unsigned int)v36);
                  v26 = (void (__thiscall **)(struct Mesh *, _DWORD, int))(*(_DWORD *)Mesh + 100);
                  v27 = std::vector<Model *>::size(a3);
                  v28 = (_DWORD *)std::vector<Model *>::operator[](a3, v27 - 1);
                  (*v26)(Mesh, *v28, 1);
                  i = v37;
                }
              }
              v6 = (_DWORD *)v38;
            }
            return 1;
          }
          if ( std::string::find_last_of(a1 + 320, 46, std::string::npos) >= 0 )
          {
            std::string::find(a1 + 320, ".xml", 0);
            std::string::string(v41, ".xml");
            v48 = 0;
            v7 = sub_1017A2D0(v46, a1 + 320);
            LOBYTE(v48) = 1;
            sub_1017A310(v42, v7);
            LOBYTE(v48) = 3;
            std::string::~string(v46);
            for ( j = 1; j <= 2; ++j )
            {
              v9 = sub_1003B320((int)v47, j);
              LOBYTE(v48) = 4;
              v10 = std::string::string(v45, "LOD");
              LOBYTE(v48) = 5;
              v11 = std::operator+<char>(v44, v42, v10);
              LOBYTE(v48) = 6;
              v12 = std::operator+<char>(v43, v11, v9);
              LOBYTE(v48) = 7;
              std::operator+<char>(v40, v12, v41);
              LOBYTE(v48) = 9;
              std::string::~string(v43);
              LOBYTE(v48) = 10;
              std::string::~string(v44);
              LOBYTE(v48) = 11;
              std::string::~string(v45);
              LOBYTE(v48) = 12;
              std::string::~string(v47);
              if ( FindMedia((int)v40, (int)"Models", 0, 0) )
              {
                v13 = (Model *)operator new(0x1C8u);
                v37 = (int)v13;
                LOBYTE(v48) = 13;
                if ( v13 )
                  v14 = Model::Model(v13);
                else
                  v14 = 0;
                LOBYTE(v48) = 12;
                v37 = (int)v14;
                v15 = (const char *)std::string::c_str(v40);
                StaticModel::Load(v14, v15, 0);
                if ( *((_DWORD *)v14 + 77) )
                  std::vector<Model *>::push_back((_DWORD *)v38, &v37);
                else
                  (*(void (__thiscall **)(Model *, int))(*(_DWORD *)v14 + 12))(v14, 1);
              }
              LOBYTE(v48) = 3;
              std::string::~string(v40);
            }
            LOBYTE(v48) = 0;
            std::string::~string(v42);
            v48 = -1;
            std::string::~string(v41);
            v6 = (_DWORD *)v38;
            goto LABEL_24;
          }
        }
      }
    }
  }
  return 0;
}
