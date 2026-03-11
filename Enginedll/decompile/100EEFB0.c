/*
 * func-name: ?DestroyNxTriangleMeshes@StaticModel@@QAEXXZ
 * func-address: 0x100eefb0
 * callers: 0x1004d5d0
 * callees: 0x1009ee50, 0x10140fc0, 0x10143fd0, 0x101a2500
 */

void __thiscall StaticModel::DestroyNxTriangleMeshes(StaticModel *this)
{
  _DWORD *v1; // ecx
  int v2; // edx
  void *v3; // ecx
  unsigned int v4; // esi
  NxPhysics *v5; // eax
  _DWORD *v6; // ecx
  struct NxTriangleMesh *v7; // [esp-4h] [ebp-2Ch]
  char v8[4]; // [esp+Ch] [ebp-1Ch] BYREF
  void *v9; // [esp+10h] [ebp-18h]
  int v10; // [esp+14h] [ebp-14h]
  int v11; // [esp+18h] [ebp-10h]
  int v12; // [esp+24h] [ebp-4h]

  v9 = 0;
  v10 = 0;
  v11 = 0;
  v1 = (_DWORD *)*((_DWORD *)this + 77);
  v12 = 0;
  ModelFrame::EnumerateMeshes(v1, (int)v8);
  v2 = v10;
  v3 = v9;
  v4 = 0;
  while ( v3 )
  {
    if ( v4 >= (v2 - (int)v3) >> 2 )
    {
      operator delete(v3);
      return;
    }
    if ( *(_DWORD *)(*((_DWORD *)v3 + v4) + 452) )
    {
      if ( v4 >= (v2 - (int)v3) >> 2 )
      {
        invalid_parameter_noinfo();
        v3 = v9;
      }
      v7 = *(struct NxTriangleMesh **)(*(_DWORD *)(*((_DWORD *)v3 + v4) + 452) + 36);
      v5 = NxPhysics::Instance();
      NxPhysics::ReleaseTriangleMesh(v5, v7);
      v6 = v9;
      if ( !v9 || v4 >= (v10 - (int)v9) >> 2 )
      {
        invalid_parameter_noinfo();
        v6 = v9;
      }
      *(_DWORD *)(*(_DWORD *)(v6[v4] + 452) + 36) = 0;
      v2 = v10;
      v3 = v9;
    }
    ++v4;
  }
}
