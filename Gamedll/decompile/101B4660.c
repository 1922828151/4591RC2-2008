/*
 * func-name: sub_101B4660
 * func-address: 0x101b4660
 * callers: 0x10015415
 * callees: 0x102c9d86
 */

int __cdecl sub_101B4660(int a1, int a2, int a3)
{
  int v3; // esi
  int v6; // [esp+0h] [ebp-34h] BYREF
  _BYTE v7[16]; // [esp+10h] [ebp-24h] BYREF
  int v8; // [esp+20h] [ebp-14h]
  int *v9; // [esp+24h] [ebp-10h]
  int v10; // [esp+30h] [ebp-4h]

  v9 = &v6;
  v3 = a3;
  v8 = a3;
  std::vector<ModelFrame *>::vector<ModelFrame *>(v7);
  v10 = 0;
  while ( a1 != a2 )
  {
    LOBYTE(v10) = 2;
    if ( v3 )
      std::vector<ModelFrame *>::vector<ModelFrame *>(v7);
    LOBYTE(v10) = 1;
    std::vector<ModelFrame *>::swap(v3, a1);
    v3 += 16;
    a1 += 16;
  }
  v10 = -1;
  std::vector<ModelFrame *>::~vector<ModelFrame *>(v7);
  return v3;
}
