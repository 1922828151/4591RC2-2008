/*
 * func-name: ?WriteMeshBinary@ISave@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAPAUModelFrame@@@Z
 * func-address: 0x10014730
 * callers: 0x100042c0, 0x100431a0
 * callees: 0x10013f40, 0x10097800, 0x1009dd90
 */

int __thiscall ISave::WriteMeshBinary(
        ISave *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        ModelFrame **a9)
{
  ModelFrame **v10; // ebp
  ModelFrame *v11; // ecx
  struct Mesh *Mesh; // eax
  struct Mesh *v13; // eax
  const char *v14; // eax
  const char *v16; // eax
  FILE *v17; // eax
  FILE *v18; // edi
  const char *v19; // eax
  struct Mesh *v20; // eax
  int v21; // ecx
  char *v22; // eax
  unsigned int i; // edi
  int v24; // ecx
  _DWORD *v25; // ebp
  struct Mesh *v26; // eax
  int v27; // ecx
  char *v28; // esi
  ModelFrame *v29; // ecx
  int j; // esi
  struct Mesh *v31; // eax
  unsigned int v32; // [esp-Ch] [ebp-38h]
  int Buffer; // [esp+8h] [ebp-24h] BYREF
  unsigned int v34; // [esp+Ch] [ebp-20h]
  int v35; // [esp+10h] [ebp-1Ch]
  int v36; // [esp+14h] [ebp-18h] BYREF
  int v37; // [esp+18h] [ebp-14h] BYREF
  FILE *v38; // [esp+1Ch] [ebp-10h]
  int v39; // [esp+28h] [ebp-4h]

  v10 = a9;
  v11 = *a9;
  v39 = 0;
  Mesh = ModelFrame::GetMesh(v11, 0);
  (*(void (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)Mesh + 128))(Mesh, &v36);
  v13 = ModelFrame::GetMesh(*v10, 0);
  (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v13 + 132))(v13);
  if ( v36 == 72 && *((_DWORD *)ModelFrame::GetMesh(*v10, 0) + 1) )
  {
    v14 = (const char *)std::string::c_str(&a2);
    Warning("Can't save meshes with skinning initialized %s", v14);
    v39 = -1;
    return std::string::~string(&a2);
  }
  else
  {
    v16 = (const char *)std::string::c_str(&a2);
    v17 = fopen(v16, "wb");
    v18 = v17;
    v38 = v17;
    if ( v17 )
    {
      HIBYTE(Buffer) = 23;
      fwrite((char *)&Buffer + 3, 1u, 1u, v17);
      v37 = *((_DWORD *)*v10 + 10);
      fwrite(&v37, 4u, 1u, v18);
      v35 = 999;
      v34 = 0;
      while ( 1 )
      {
        v20 = ModelFrame::GetMesh(*v10, 0);
        v21 = *((_DWORD *)v20 + 616);
        v22 = (char *)v20 + 2460;
        if ( !v21 || v34 >= (*((_DWORD *)v22 + 2) - v21) >> 2 )
          break;
        for ( i = 0; ; ++i )
        {
          v24 = *((_DWORD *)this + 18);
          if ( !v24 || i >= (*((_DWORD *)this + 19) - v24) >> 2 )
            break;
          v25 = (_DWORD *)(*((_DWORD *)this + 18) + 4 * i);
          v26 = ModelFrame::GetMesh(*a9, 0);
          v27 = *((_DWORD *)v26 + 616);
          v28 = (char *)v26 + 2460;
          if ( !v27 || v34 >= (*((_DWORD *)v26 + 617) - v27) >> 2 )
            invalid_parameter_noinfo();
          if ( (unsigned __int8)std::operator==<char>(*(_DWORD *)(*((_DWORD *)v28 + 1) + 4 * v34) + 184, *v25 + 184)
            && (int)i < v35 )
          {
            v10 = a9;
            v35 = i;
            break;
          }
          v10 = a9;
        }
        ++v34;
        v18 = v38;
      }
      v29 = *v10;
      for ( j = 0; j < *((_DWORD *)*v10 + 10); ++j )
      {
        v32 = v35;
        v31 = ModelFrame::GetMesh(v29, j);
        ISave::WriteMeshPart(this, v31, (int)v18, v32);
        v29 = *v10;
      }
      fclose(v18);
      v39 = -1;
      return std::string::~string(&a2);
    }
    else
    {
      v19 = (const char *)std::string::c_str(&a2);
      Warning("Couldn't open %s", v19);
      v39 = -1;
      return std::string::~string(&a2);
    }
  }
}
