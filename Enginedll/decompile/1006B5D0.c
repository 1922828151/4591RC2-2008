/*
 * func-name: ?GetRenderAll@C3DModel@@QAE_NXZ
 * func-address: 0x1006b5d0
 * callers: none
 * callees: none
 */

bool __thiscall C3DModel::GetRenderAll(C3DModel *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 133);
  if ( v1 )
    return *(_BYTE *)(v1 + 1052);
  else
    return 0;
}
