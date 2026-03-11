/*
 * func-name: ?RemoveSceneOffset@StaticModel@@QAEXXZ
 * func-address: 0x100ee2e0
 * callers: 0x10006780, 0x10038ca0, 0x10045740
 * callees: none
 */

void __thiscall StaticModel::RemoveSceneOffset(StaticModel *this)
{
  ModelFrame *v1; // ecx

  v1 = (ModelFrame *)*((_DWORD *)this + 77);
  if ( v1 )
    ModelFrame::RemoveSceneOffset(v1);
}
