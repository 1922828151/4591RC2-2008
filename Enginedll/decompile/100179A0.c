/*
 * func-name: ?IsLoaded@StaticModel@@QAE_NXZ
 * func-address: 0x100179a0
 * callers: none
 * callees: none
 */

BOOL __thiscall StaticModel::IsLoaded(StaticModel *this)
{
  return *((_DWORD *)this + 77) != 0;
}
