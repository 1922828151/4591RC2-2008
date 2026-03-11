/*
 * func-name: ?GetNumMeshes@StaticModel@@QAEHXZ
 * func-address: 0x100ef210
 * callers: 0x1007d280, 0x1007da70
 * callees: 0x1009ee50, 0x101a2500
 */

int __thiscall StaticModel::GetNumMeshes(StaticModel *this)
{
  _DWORD *v1; // ecx
  int v3; // esi
  _BYTE v4[4]; // [esp+4h] [ebp-1Ch] BYREF
  void *v5; // [esp+8h] [ebp-18h]
  int v6; // [esp+Ch] [ebp-14h]
  int v7; // [esp+10h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-4h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v1 = (_DWORD *)*((_DWORD *)this + 77);
  v8 = 0;
  if ( !v1 )
    return 0;
  ModelFrame::EnumerateMeshes(v1, (int)v4);
  if ( !v5 )
    return 0;
  v3 = (v6 - (int)v5) >> 2;
  operator delete(v5);
  return v3;
}
