/*
 * func-name: sub_10014380
 * func-address: 0x10014380
 * callers: none
 * callees: 0x10001160
 */

int __thiscall sub_10014380(_DWORD *this, unsigned int a2, _DWORD *a3)
{
  if ( a2 >= this[47]
    && !byte_1005B1BB
    && (!dword_100580A4
     || sub_10001160(
          (_DWORD *)dword_100580A4,
          107,
          (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\TriangleMesh.cpp",
          527,
          &byte_1005B1BB,
          "pageIndex<pageCount",
          0)) )
  {
    __debugbreak();
  }
  *a3 = *(_DWORD *)(this[49] + 8 * a2);
  return this[50] + *(_DWORD *)(this[49] + 8 * a2 + 4);
}
