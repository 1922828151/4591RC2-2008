/*
 * func-name: ?SetRenderAll@C3DModel@@QAEX_N@Z
 * func-address: 0x1006b5b0
 * callers: none
 * callees: none
 */

void __thiscall C3DModel::SetRenderAll(C3DModel *this, bool a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 133);
  if ( v2 )
    *(_BYTE *)(v2 + 1052) = a2;
}
