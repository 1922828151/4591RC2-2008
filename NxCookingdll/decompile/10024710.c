/*
 * func-name: NxCloseCooking
 * func-address: 0x10024710
 * callers: 0x10024b60
 * callees: 0x100245a0
 */

char NxCloseCooking()
{
  int v0; // eax
  int v1; // eax
  int v2; // edx
  int v3; // ecx
  int v4; // edx
  int (__stdcall ***v6)(int, int, int, int, int); // [esp-8h] [ebp-8h]

  if ( byte_1005B460 )
  {
    byte_1005B460 = 0;
    if ( dword_1005B464 )
    {
      (**(void (__thiscall ***)(int))dword_1005B464)(dword_1005B464);
      dword_1005B464 = 0;
    }
  }
  LOBYTE(v0) = dword_1005B468;
  if ( dword_1005B468 )
  {
    v0 = dword_1005B468 - 1;
    dword_1005B468 = v0;
    if ( v0 )
    {
      v1 = 10 * v0;
      v2 = *(int *)((char *)dword_1005B1E4 + 2 * v1);
      v3 = *(int *)((char *)dword_1005B1E0 + 2 * v1);
      v1 *= 2;
      dword_1005B1D4 = v2;
      v4 = *(int *)((char *)dword_1005B1F0 + v1);
      dword_1005B1D0 = v3;
      v6 = *(int (__stdcall ****)(int, int, int, int, int))((char *)dword_1005B1EC + v1);
      dword_1005B1D8[0] = *(int *)((char *)dword_1005B1E8 + v1);
      LOBYTE(v0) = sub_100245A0(v6, v4);
    }
  }
  return v0;
}
