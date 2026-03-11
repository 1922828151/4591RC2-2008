/*
 * func-name: ?RebuildCollisionTriangleMesh@Prefab@@QAEXXZ
 * func-address: 0x1004d5d0
 * callers: none
 * callees: 0x10001330, 0x100eefb0, 0x10141630, 0x101438a0, 0x10143fd0
 */

void __thiscall Prefab::RebuildCollisionTriangleMesh(StaticModel **this)
{
  _DWORD *v2; // edi
  NxPhysics *v3; // eax
  float v4; // edx
  float v5; // eax
  struct NxPhysics *v6; // eax
  StaticModel *v7; // [esp-Ch] [ebp-54h]
  struct NxActor **v8; // [esp-4h] [ebp-4Ch]
  StaticModel *v9; // [esp-4h] [ebp-4Ch]
  float v10[16]; // [esp+8h] [ebp-40h] BYREF

  v2 = this + 155;
  if ( this[155] && this[179] )
  {
    v8 = this + 155;
    v3 = NxPhysics::Instance();
    NxPhysics::DestroyNxActor(v3, v8);
    StaticModel::DestroyNxTriangleMeshes(this[179]);
    if ( !*((_BYTE *)this + 724) )
    {
      sub_10001330(v10, this + 217);
      v4 = *((float *)this + 215);
      v5 = *((float *)this + 216);
      LODWORD(v10[12]) = this[214];
      v9 = this[266];
      v10[13] = v4;
      v10[14] = v5;
      v7 = this[179];
      v6 = NxPhysics::Instance();
      *v2 = NxPhysics::CreateMeshActor(v6, this, -1, v7, v10, v9);
    }
  }
}
