/*
 * func-name: ?PreDestroy@StaticModel@@QAEXXZ
 * func-address: 0x100ee880
 * callers: 0x1004e070
 * callees: none
 */

void __thiscall StaticModel::PreDestroy(StaticModel *this)
{
  ModelFrame *v1; // ecx

  v1 = (ModelFrame *)*((_DWORD *)this + 77);
  if ( v1 )
    ModelFrame::PreDestroy(v1);
}
