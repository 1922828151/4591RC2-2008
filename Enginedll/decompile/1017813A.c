/*
 * func-name: D3DXCreateFontW
 * func-address: 0x1017813a
 * callers: 0x100a9db0
 * callees: none
 */

// attributes: thunk
int __stdcall D3DXCreateFontW(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return __imp_D3DXCreateFontW(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
