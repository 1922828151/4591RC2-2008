/*
 * func-name: DirectInput8Create
 * func-address: 0x10007a90
 * callers: 0x10003150
 * callees: none
 */

// attributes: thunk
HRESULT __stdcall DirectInput8Create(
        HINSTANCE hinst,
        DWORD dwVersion,
        const IID *const riidltf,
        LPVOID *ppvOut,
        LPUNKNOWN punkOuter)
{
  return __imp_DirectInput8Create(hinst, dwVersion, riidltf, ppvOut, punkOuter);
}
