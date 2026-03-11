/*
 * func-name: NxInitCooking
 * func-address: 0x10024620
 * callers: 0x10024b40
 * callees: 0x100245a0
 */

char __cdecl NxInitCooking(
        int (__stdcall ***a1)(int, int, int, int, int),
        void (__thiscall ***a2)(_DWORD, int, const char *, const char *, int))
{
  int v2; // edx
  int (__stdcall ***v3)(int, int, int, int, int); // edi
  void (__thiscall ***v4)(_DWORD, int, const char *, const char *, int); // esi
  int v5; // ecx
  int v6; // eax

  v2 = dword_1005B468;
  if ( dword_1005B468 )
  {
    if ( byte_1005B460 )
    {
      byte_1005B460 = 0;
      if ( dword_1005B464 )
      {
        (**(void (__thiscall ***)(int))dword_1005B464)(dword_1005B464);
        v2 = dword_1005B468;
        dword_1005B464 = 0;
      }
    }
    v3 = a1;
    if ( !a1 )
      v3 = (int (__stdcall ***)(int, int, int, int, int))dword_1005B1D8[5 * v2];
    v4 = a2;
    if ( !a2 )
      v4 = (void (__thiscall ***)(_DWORD, int, const char *, const char *, int))dword_1005B1DC[5 * v2];
  }
  else
  {
    v4 = a2;
    v3 = a1;
  }
  v5 = dword_1005B1D0;
  v6 = 5 * v2;
  dword_1005B1EC[v6] = (int)v3;
  dword_1005B1F0[v6] = (int)v4;
  dword_1005B1E0[v6] = v5;
  dword_1005B1E4[v6] = dword_1005B1D4;
  dword_1005B1E8[v6] = dword_1005B1D8[0];
  dword_1005B468 = v2 + 1;
  if ( v2 == 31 )
  {
    if ( v4 )
      (**v4)(
        v4,
        4,
        "NxInitCooking() state stack overflow, you should call NxCloseCooking() once for each initialization. Please see "
        "the API documentation.",
        "g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\Cooking.cpp",
        241);
    dword_1005B468 = 31;
  }
  return sub_100245A0(v3, (int)v4);
}
