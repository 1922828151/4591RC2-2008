/*
 * func-name: ?PreLoad@Prefab@@QAEXXZ
 * func-address: 0x1004eb00
 * callers: 0x1004ec60
 * callees: 0x100ef520, 0x10138850, 0x101a2500
 */

void __thiscall Prefab::PreLoad(Prefab *this)
{
  int MaterialList; // eax
  _BYTE v2[4]; // [esp+4h] [ebp-1Ch] BYREF
  void *v3; // [esp+8h] [ebp-18h]
  int v4; // [esp+1Ch] [ebp-4h]

  if ( *((_DWORD *)this + 179) && *((_DWORD *)this + 178) )
  {
    MaterialList = World::GetMaterialList(v2);
    v4 = 0;
    StaticModel::PreLoad(MaterialList);
    if ( v3 )
      operator delete(v3);
  }
}
