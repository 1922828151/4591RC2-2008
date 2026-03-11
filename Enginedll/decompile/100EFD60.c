/*
 * func-name: ?Load@StaticModel@@QAEXPBD_N@Z
 * func-address: 0x100efd60
 * callers: 0x100b41c0, 0x100e1e90, 0x1010c190, 0x1010c960, 0x10116820, 0x10116db0, 0x1012ffd0, 0x10173030
 * callees: 0x100ef9b0, 0x101a2500
 */

void __thiscall StaticModel::Load(ModelFrame **this, const char *a2, char a3)
{
  int v3; // [esp+0h] [ebp-10h] BYREF
  void *v4; // [esp+4h] [ebp-Ch]

  StaticModel::ImportModel(this, &v3, (int)a2, a3);
  if ( v4 )
    operator delete(v4);
}
