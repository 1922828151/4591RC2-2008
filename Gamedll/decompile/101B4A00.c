/*
 * func-name: sub_101B4A00
 * func-address: 0x101b4a00
 * callers: 0x1000f25e
 * callees: 0x102c9d86
 */

int __cdecl sub_101B4A00(int a1, int a2, int a3)
{
  int v3; // esi
  int result; // eax
  _DWORD v6[7]; // [esp+0h] [ebp-28h] BYREF
  int v7; // [esp+24h] [ebp-4h]

  v6[6] = v6;
  v3 = a1;
  v6[5] = a1;
  v7 = 0;
  while ( a2 )
  {
    v6[4] = v3;
    LOBYTE(v7) = 1;
    if ( v3 )
      result = std::vector<ModelFrame *>::vector<ModelFrame *>(a3);
    --a2;
    v3 += 16;
    LOBYTE(v7) = 0;
  }
  return result;
}
