/*
 * func-name: ?setModelSize@C3DModel@@QAEXHH@Z
 * func-address: 0x100a77d0
 * callers: none
 * callees: none
 */

void __thiscall C3DModel::setModelSize(C3DModel *this, int a2, int a3)
{
  int v3; // edx

  v3 = a3 + *((_DWORD *)this + 254);
  *((_DWORD *)this + 255) = a2 + *((_DWORD *)this + 253);
  *((_DWORD *)this + 256) = v3;
}
